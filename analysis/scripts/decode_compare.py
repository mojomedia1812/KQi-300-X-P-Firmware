"""Normalize the additive word encoding; compare analysis copies, never flash.

The key candidates are inferred from identical repeated vector-table slots at
file offset 0x410. Validation uses ARM startup code, vector bounds, embedded
version strings, and exact encode/decode round trips. The initial 1024 bytes
are not decoded or semantically identified by this script.
"""
from collections import Counter
import difflib
import hashlib
import json
from pathlib import Path
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
REPO = ROOT.parent
RESULTS = ROOT / 'results'
GENERATED = ROOT / 'generated'
RESULTS.mkdir(exist_ok=True)
GENERATED.mkdir(exist_ok=True)
META = {
    'US': ('KBE13M02.bin', '125b01730f8b095d88adca2e800c1426', 'KBE13D03KBE13M02'),
    'DE': ('KBE38M02.bin', 'f356c2e4fb9a128c1ddf17f7166e57cb', 'KBE38D05KBE38M02'),
}
PAYLOAD = 0x400
BASE = 0x01000000


def main():
    normalized = {}
    report = {'repository_commit': 'dbe234e74df30c9ce4bdb943d7380210917987f5',
              'method': 'P = (C - K) mod 2**32, aligned little-endian words, from file offset 0x400',
              'header': 'first 1024 bytes are not decoded; their semantics are unverified', 'files': {}}
    for region, (name, md5, versions) in META.items():
        data = (REPO / '300X' / region / name).read_bytes()
        assert hashlib.md5(data).hexdigest() == md5
        end = len(data.rstrip(b'\xff'))
        assert end % 4 == 0
        key = struct.unpack_from('<I', data, 0x410)[0]
        assert all(struct.unpack_from('<I', data, i)[0] == key for i in range(0x410, 0x42c, 4))
        words = struct.unpack(f'<{(end-PAYLOAD)//4}I', data[PAYLOAD:end])
        plain = b''.join(struct.pack('<I', (word-key) & 0xffffffff) for word in words)
        assert b''.join(struct.pack('<I', (word+key) & 0xffffffff)
                        for word in struct.unpack(f'<{len(plain)//4}I', plain)) == data[PAYLOAD:end]
        assert versions.encode() in plain
        vectors = struct.unpack_from('<48I', plain)
        assert 0x20000000 <= vectors[0] <= 0x20010000
        assert all(word == 0 or (word & 1 and BASE <= word < BASE+len(plain)) for word in vectors[1:])
        # Reset handler: ldr r0, [pc, #0x1c]; blx r0; ldr r0, [pc, #0x1c]; bx r0.
        assert plain[0x148:0x150] == bytes.fromhex('0748804707480047')
        normalized[region] = plain
        (GENERATED / f'{region}_normalized.analysis.dat').write_bytes(plain)
        strings = [{'file_offset': hex(m.start()+PAYLOAD), 'payload_offset': hex(m.start()), 'value':m.group().decode()}
                   for m in re.finditer(rb'KBE[A-Z0-9]{5,}', plain)]
        report['files'][region] = {
            'source': f'300X/{region}/{name}', 'key': f'0x{key:08X}', 'non_ff_end_exclusive': hex(end),
            'normalized_payload_size': len(plain), 'ff_trailer_bytes': len(data)-end,
            'md5_matches_update_json': True, 'roundtrip_verified': True,
            'vector_table_consistent': True, 'stack_pointer': hex(vectors[0]), 'reset_handler':hex(vectors[1]),
            'version_strings': strings, 'normalized_sha256':hashlib.sha256(plain).hexdigest()}
    us, de = normalized['US'], normalized['DE']
    ops = difflib.SequenceMatcher(None, us, de, autojunk=False).get_opcodes()
    equal = sum(a1-a0 for tag,a0,a1,b0,b1 in ops if tag == 'equal')
    report['aligned_comparison'] = {
        'algorithm': 'difflib.SequenceMatcher(autojunk=False), byte sequence alignment; not a semantic function diff',
        'exact_matching_bytes': equal, 'percent_of_us_payload':100*equal/len(us),
        'percent_of_de_payload':100*equal/len(de), 'us_unmatched_bytes':len(us)-equal,
        'de_unmatched_bytes':len(de)-equal, 'payload_size_difference_bytes':len(us)-len(de)}
    report['changed_ranges'] = [
        {'kind':tag, 'US_start_file':hex(a0+PAYLOAD), 'US_end_file_exclusive':hex(a1+PAYLOAD),
         'DE_start_file':hex(b0+PAYLOAD), 'DE_end_file_exclusive':hex(b1+PAYLOAD),
         'US_length':a1-a0, 'DE_length':b1-b0, 'US_bytes':us[a0:a1].hex(' '), 'DE_bytes':de[b0:b1].hex(' ')}
        for tag,a0,a1,b0,b1 in ops if tag != 'equal']
    # One contiguous function differs substantially; the following function moves
    # by 0x104. Regions include each routine's trailing literal pool, ending at
    # the next Thumb push prologue.
    assert us[0x1388:0x138a] == de[0x1388:0x138a] == b'\xf0\xb5'
    assert us[0x172c:0x172e] == de[0x1628:0x162a] == b'\xf0\xb5'
    report['notable_function'] = {
        'US_start_file':hex(0x1388+PAYLOAD), 'US_end_file_exclusive':hex(0x172c+PAYLOAD),
        'DE_start_file':hex(0x1388+PAYLOAD), 'DE_end_file_exclusive':hex(0x1628+PAYLOAD),
        'US_size_including_literal_pool':0x172c-0x1388, 'DE_size_including_literal_pool':0x1628-0x1388,
        'interpretation':'state/flag/timer handling differs substantially; cruise-control attribution is plausible but unproven'}
    (RESULTS / 'normalized-comparison.json').write_text(json.dumps(report, indent=2), encoding='utf-8')
    print(json.dumps({k:v for k,v in report.items() if k != 'changed_ranges'}, indent=2))



if __name__ == '__main__':
    main()
