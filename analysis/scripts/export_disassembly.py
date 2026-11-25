"""Export the decoded Thumb stream; embedded data is also rendered as instructions."""
from pathlib import Path
from capstone import Cs, CS_ARCH_ARM, CS_MODE_THUMB, CS_MODE_MCLASS

ROOT = Path(__file__).resolve().parents[1]


def main():
    decoder = Cs(CS_ARCH_ARM, CS_MODE_THUMB | CS_MODE_MCLASS)
    decoder.skipdata = True
    for region in ('US', 'DE', 'EU'):
        data = (ROOT / 'generated' / f'{region}_normalized.analysis.dat').read_bytes()
        lines = [f'0x{address:08X} | file 0x{address-0x01000000+0x400:06X} | {mnemonic:10s} {operands}'.rstrip()
                 for address, size, mnemonic, operands in decoder.disasm_lite(data[0xc0:], 0x010000c0)]
        output = ROOT / 'evidence' / region / 'disassembly.txt'
        output.parent.mkdir(parents=True, exist_ok=True)
        output.write_text('\n'.join(lines), encoding='utf-8', newline='\n')
        print(f'{region}: {len(lines)} decoded entries')


if __name__ == '__main__':
    main()
