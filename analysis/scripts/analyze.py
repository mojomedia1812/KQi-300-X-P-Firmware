"""Reproducible, read-only byte comparison of the two supplied firmware files."""
from collections import Counter
import csv
import hashlib
import json
import math
from pathlib import Path
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
REPO = ROOT.parent
RESULTS = ROOT / 'results'
RESULTS.mkdir(exist_ok=True)
FILES = {'US': REPO / '300X/US/KBE13M02.bin', 'DE': REPO / '300X/DE/KBE38M02.bin'}


def entropy(data):
    # Avoid platform-specific last-bit differences between libm implementations.
    return round(-sum((n / len(data)) * math.log2(n / len(data)) for n in Counter(data).values()), 10) if data else 0


def ranges(indices):
    out = []
    for i in indices:
        if out and i == out[-1][1] + 1:
            out[-1][1] = i
        else:
            out.append([i, i])
    return out


def main():
    inputs = {key: path.read_bytes() for key, path in FILES.items()}
    us, de = inputs['US'], inputs['DE']
    diffs = [i for i in range(min(len(us), len(de))) if us[i] != de[i]]
    runs = ranges(diffs)
    report = {'files': {}, 'same_length': len(us) == len(de), 'different_bytes': len(diffs),
              'identical_bytes': min(len(us), len(de)) - len(diffs),
              'different_percent': 100 * len(diffs) / max(len(us), len(de)),
              'different_runs': len(runs), 'first_difference': hex(diffs[0]) if diffs else None,
              'last_difference': hex(diffs[-1]) if diffs else None}
    for key, data in inputs.items():
        ascii_strings = [{'offset': hex(m.start()), 'value': m.group().decode('ascii')} for m in re.finditer(rb'[\x20-\x7e]{5,}', data)]
        wide_strings = [{'offset': hex(m.start()), 'value': m.group().decode('utf-16le')} for m in re.finditer(rb'(?:[\x20-\x7e]\x00){5,}', data)]
        report['files'][key] = {'path': FILES[key].relative_to(REPO).as_posix(), 'size': len(data),
                                'sha256': hashlib.sha256(data).hexdigest(), 'md5': hashlib.md5(data).hexdigest(),
                                'git_blob_sha1': hashlib.sha1(f'blob {len(data)}\0'.encode() + data).hexdigest(),
                                'entropy': entropy(data), 'first_128': data[:128].hex(' '), 'last_128': data[-128:].hex(' '),
                                'first_16_words_le': [hex(x) for x in struct.unpack_from('<16I', data)],
                                'byte_counts': {'00': data.count(0), 'ff': data.count(255)},
                                'ascii_strings': ascii_strings, 'utf16le_strings': wide_strings}
    report['runs'] = [{'start': hex(a), 'end_inclusive': hex(b), 'length': b - a + 1,
                       'US': us[a:b+1].hex(' '), 'DE': de[a:b+1].hex(' ')} for a, b in runs]
    report['blocks_256'] = [{'offset': hex(i), 'different_bytes': sum(a != b for a, b in zip(us[i:i+256], de[i:i+256])),
                            'US_entropy': entropy(us[i:i+256]), 'DE_entropy': entropy(de[i:i+256])}
                           for i in range(0, max(len(us), len(de)), 256)]
    equal_runs = ranges([i for i in range(min(len(us), len(de))) if us[i] == de[i]])
    report['largest_identical_runs'] = [{'start': hex(a), 'end_inclusive': hex(b), 'length': b-a+1}
                                       for a, b in sorted(equal_runs, key=lambda x: x[1]-x[0], reverse=True)[:20]]
    (RESULTS / 'comparison.json').write_text(json.dumps(report, indent=2, ensure_ascii=False), encoding='utf-8')
    with (RESULTS / 'byte-differences.csv').open('w', newline='', encoding='utf-8-sig') as f:
        writer = csv.writer(f, delimiter=';', lineterminator='\n')
        writer.writerow(['Offset_hex', 'Offset_decimal', 'US_hex', 'DE_hex'])
        writer.writerows((f'0x{i:06X}', i, f'{us[i]:02X}', f'{de[i]:02X}') for i in diffs)
    print(json.dumps({k:v for k,v in report.items() if k not in ['files', 'runs', 'blocks_256']}, indent=2))


if __name__ == '__main__':
    main()
