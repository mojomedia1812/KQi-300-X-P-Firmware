"""Run original decoded Thumb routines in isolated Unicorn memory.

This validates static analysis with synthetic RAM inputs. It does not access a
scooter, execute a firmware update, or alter either downloaded firmware file.
"""
import json
from pathlib import Path
import struct
import sys

ROOT = Path(__file__).resolve().parents[1]
GENERATED = ROOT / 'generated'
RESULTS = ROOT / 'results'
RESULTS.mkdir(exist_ok=True)
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB, UC_MODE_MCLASS, UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_R0, UC_ARM_REG_PC

BASE = 0x01000000
STOP = BASE + 0xf000
REGIONS = {
    'US': {'throttle_routine':0x2940, 'parameter_routine':0x41e8, 'drive_routine':0x5560,
           'speed_pi':0x515c, 'adc':0x200001a0, 'mode':0x20000e62, 'request':0x200001c2,
           'command':0x200001c0, 'speed_sensor':0x20000216, 'parameter_base':0x20000e5a,
           'requested_limit':0x200000c4, 'converted_limit':0x200000c6, 'state':0x200001a8,
           'expected_sport':6288, 'nominal_max':380, 'expected_telemetry':384,
           'expected_custom':(380,3986,6288,384)},
    'DE': {'throttle_routine':0x283c, 'parameter_routine':0x40c4, 'drive_routine':0x5444,
           'speed_pi':0x5040, 'adc':0x2000019c, 'mode':0x20000e5e, 'request':0x200001be,
           'command':0x200001bc, 'speed_sensor':0x20000212, 'parameter_base':0x20000e56,
           'requested_limit':0x200000be, 'converted_limit':0x200000c0, 'state':0x200001a4,
           'expected_sport':3560, 'nominal_max':200, 'expected_telemetry':217,
           'expected_custom':(218,2191,3497,213)},
    'EU': {'throttle_routine':0x293c, 'parameter_routine':0x41e8, 'drive_routine':0x555c,
           'speed_pi':0x5158, 'adc':0x200001a0, 'mode':0x20000e62, 'request':0x200001c2,
           'command':0x200001c0, 'speed_sensor':0x20000216, 'parameter_base':0x20000e5a,
           'requested_limit':0x200000c4, 'converted_limit':0x200000c6, 'state':0x200001a8,
           'expected_sport':4160, 'nominal_max':250, 'expected_telemetry':254,
           'expected_custom':(250,2617,4160,254)},
}


class Machine:
    def __init__(self, region):
        self.region = region
        self.cfg = REGIONS[region]
        self.uc = Uc(UC_ARCH_ARM, UC_MODE_THUMB | UC_MODE_MCLASS)
        self.uc.mem_map(BASE, 0x10000)
        self.uc.mem_map(0x20000000, 0x10000)
        self.uc.mem_map(0x40000000, 0x200000)
        self.uc.mem_map(0xe0000000, 0x10000)
        self.uc.mem_write(BASE, (GENERATED / f'{region}_normalized.analysis.dat').read_bytes())
        self.calls = []
        self.hooks = {}
        self.uc.hook_add(UC_HOOK_CODE, self.instruction)

    def instruction(self, uc, addr, size, user):
        if addr == STOP:
            uc.emu_stop()
        elif addr in self.hooks:
            self.hooks[addr]()

    def put16(self, addr, val):
        self.uc.mem_write(addr, struct.pack('<H', val & 0xffff))

    def get16(self, addr):
        return struct.unpack('<H', self.uc.mem_read(addr, 2))[0]

    def put8(self, addr, val):
        self.uc.mem_write(addr, bytes([val]))

    def run(self, offset):
        self.uc.reg_write(UC_ARM_REG_SP, 0x2000f000)
        self.uc.reg_write(UC_ARM_REG_LR, STOP | 1)
        self.uc.emu_start((BASE+offset) | 1, STOP, count=200000)
        assert self.uc.reg_read(UC_ARM_REG_PC) == STOP, hex(self.uc.reg_read(UC_ARM_REG_PC))

    def telemetry(self):
        self.run(self.cfg['parameter_routine'])
        data = self.uc.mem_read(self.cfg['parameter_base']+0xd, 2)
        return int.from_bytes(data, 'big')


def main():
    result = {'method':'Original Thumb instructions executed in isolated Unicorn RAM; synthetic input, no hardware test.', 'regions':{}}
    for region, cfg in REGIONS.items():
        sport = []
        for adc in [1023, 1500, 2000, 2620, 3000]:
            m = Machine(region)
            m.put16(cfg['adc'],adc)
            m.put8(cfg['mode'],2)
            m.put8(cfg['state'],7)
            m.run(cfg['throttle_routine'])
            request = m.get16(cfg['request'])
            sport.append({'adc':adc,'speed_request_internal':request})
        assert sport[-1]['speed_request_internal'] == cfg['expected_sport']
        assert sport[-2]['speed_request_internal'] == cfg['expected_sport']
        m = Machine(region)
        m.put16(cfg['adc'],2620)
        m.put8(cfg['mode'],2)
        m.put8(cfg['state'],7)
        m.run(cfg['throttle_routine'])
        def capture_pi():
            m.calls.append({'routine':hex(BASE+cfg['speed_pi']),
                            'argument_r0':m.uc.reg_read(UC_ARM_REG_R0),
                            'drive_command_internal':m.get16(cfg['command'])})
            m.uc.reg_write(UC_ARM_REG_PC,m.uc.reg_read(UC_ARM_REG_LR))
        m.hooks[BASE+cfg['speed_pi']] = capture_pi
        m.run(cfg['drive_routine'])
        assert m.calls and m.calls[0]['drive_command_internal'] == cfg['expected_sport']
        assert m.calls[0]['argument_r0'] == cfg['expected_sport']
        pi_calls = list(m.calls)
        # Feed the same speed into the measured-speed fields: raw and raw/8.
        m = Machine(region)
        m.put16(cfg['speed_sensor']+2,cfg['expected_sport'])
        m.put16(cfg['speed_sensor']+4,cfg['expected_sport']//8)
        telemetry_at_sport = m.telemetry()
        assert telemetry_at_sport == cfg['expected_telemetry']
        parameters = []
        requested_values = [50, 100, 200, 210, 250, 320, 380, 500, 9999]
        if region == 'EU':
            requested_values = [50, 100, 200, 210, 249, 250, 251, 320, 380, 500, 9999]
        for requested in requested_values:
            m = Machine(region)
            m.uc.mem_write(cfg['parameter_base']+0x6c, requested.to_bytes(2,'big'))
            m.run(cfg['parameter_routine'])
            stored = m.get16(cfg['requested_limit'])
            converted = m.get16(cfg['converted_limit'])
            m.put16(cfg['adc'],2620)
            m.put8(cfg['mode'],10)
            m.put8(cfg['state'],7)
            m.run(cfg['throttle_routine'])
            custom_request = m.get16(cfg['request'])
            m.put8(cfg['state'],0)
            m.put16(cfg['speed_sensor']+2,custom_request)
            m.put16(cfg['speed_sensor']+4,custom_request//8)
            parameters.append({'input_deci_kmh':requested,'stored_after_regional_scaling':stored,
                               'converted_parameter':converted, 'custom_speed_request_internal':custom_request,
                               'telemetry_at_custom_request':m.telemetry()})
        expected = cfg['expected_custom']
        assert tuple(parameters[-1][k] for k in ('stored_after_regional_scaling','converted_parameter',
                                               'custom_speed_request_internal','telemetry_at_custom_request')) == expected
        for row in parameters:
            if row['input_deci_kmh'] >= cfg['nominal_max']:
                assert tuple(row[k] for k in ('stored_after_regional_scaling','converted_parameter',
                                             'custom_speed_request_internal','telemetry_at_custom_request')) == expected
        if region == 'EU':
            boundary = {row['input_deci_kmh']:row for row in parameters}
            assert boundary[249]['stored_after_regional_scaling'] == 249
            assert boundary[249]['custom_speed_request_internal'] < cfg['expected_sport']
            assert boundary[250]['stored_after_regional_scaling'] == boundary[251]['stored_after_regional_scaling'] == 250
        result['regions'][region] = {'sport_sweep':sport, 'pi_call':pi_calls,
                                    'sport_pi_command_verified':True,
                                    'sport_telemetry_deci_kmh':telemetry_at_sport,
                                    'custom_parameter_sweep':parameters}
        print(region, json.dumps(result['regions'][region], indent=2), flush=True)
    (RESULTS / 'emulated-speed-limits.json').write_text(json.dumps(result, indent=2), encoding='utf-8')
    comparison = {
        'method':result['method'],
        'units':'Nominal parameter and firmware telemetry in 0.1 km/h; no independent road or GPS measurement.',
        'regions':{},
    }
    for region in ('DE', 'EU', 'US'):
        cfg = REGIONS[region]
        measured = result['regions'][region]
        maximum = measured['custom_parameter_sweep'][-1]
        comparison['regions'][region] = {
            'nominal_custom_max_deci_kmh':cfg['nominal_max'],
            'normal_max_internal':measured['sport_sweep'][-1]['speed_request_internal'],
            'normal_telemetry_deci_kmh':measured['sport_telemetry_deci_kmh'],
            'custom_scaled_parameter':maximum['stored_after_regional_scaling'],
            'custom_max_internal':maximum['custom_speed_request_internal'],
            'custom_telemetry_deci_kmh':maximum['telemetry_at_custom_request'],
            'throttle_routine':f"0x{BASE+cfg['throttle_routine']:08X}",
            'throttle_file_offset':f"0x{0x400+cfg['throttle_routine']:06X}",
            'parameter_routine':f"0x{BASE+cfg['parameter_routine']:08X}",
            'drive_routine':f"0x{BASE+cfg['drive_routine']:08X}",
            'regulator':measured['pi_call'][0],
        }
    (RESULTS / 'regional-speed-comparison.json').write_text(json.dumps(comparison, indent=2), encoding='utf-8')


if __name__ == '__main__':
    main()
