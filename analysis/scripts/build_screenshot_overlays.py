"""Build self-contained SVG tap guides around the reviewed screenshot files.

The source PNGs are embedded as-is. This script adds only SVG geometry, never
repaints a screenshot. Two source PNGs were separately anonymized; see manifest.
"""
import base64
import hashlib
import html
import json
from pathlib import Path
import struct

ROOT = Path(__file__).resolve().parents[2]
ASSETS = ROOT / 'docs/assets/niu-patch'

# Coordinates use the 1080 x 2400 device reference frame. Rectangle = tappable
# control; arrow ends inside that control; numbered badge remains outside it.
FIGURES = [
    ('00-open', '00-app-info.png', 'NIU Patch in Android öffnen', [
        (1, [24, 2090, 330, 170], [188, 2144], [410, 2030]),
    ]),
    ('01-home', '01-home.png', 'Profilbereich Ich öffnen', [
        (2, [744, 2088, 310, 170], [900, 2130], [930, 2000]),
    ]),
    ('02-profile', '02-profile-anonymized.png', 'Einstellungen oder Fahrzeugverwaltung öffnen', [
        (3, [23, 92, 146, 124], [96, 154], [240, 154]),
        (9, [51, 1152, 978, 281], [900, 1290], [965, 1520]),
    ]),
    ('03-settings', '03-settings.png', 'Über öffnen', [
        (4, [51, 1452, 978, 141], [540, 1520], [730, 1680]),
    ]),
    ('04-keys', '04-manual.png', 'Bluetooth-Schlüssel kopieren', [
        (5, [355, 1397, 371, 135], [710, 1465], [865, 1465]),
    ]),
    ('05-save-link', '05-link.png', 'JSON-Adresse einfügen, speichern und zurückkehren', [
        (6, [162, 677, 757, 152], [890, 805], [995, 750]),
        (7, [416, 829, 248, 135], [640, 898], [825, 898]),
        (8, [20, 103, 369, 135], [370, 171], [520, 171]),
    ]),
    ('06-firmware-entry', '06-manage-anonymized.png', 'Firmwareaktualisierung öffnen', [
        (10, [51, 520, 978, 127], [980, 585], [865, 712]),
    ]),
    ('07-clear-source', '04-manual.png', 'Manuelle Update-Quelle nach Abschluss entfernen', [
        (11, [162, 677, 757, 152], [890, 805], [995, 750]),
        (12, [416, 829, 248, 135], [640, 898], [825, 898]),
        (13, [20, 103, 369, 135], [370, 171], [520, 171]),
    ]),
]


def main():
    manifest = json.loads((ASSETS / 'manifest.json').read_text(encoding='utf-8'))
    outputs = []
    for name, source, title, markers in FIGURES:
        raw = (ASSETS / 'screens' / source).read_bytes()
        assert raw.startswith(b'\x89PNG\r\n\x1a\n')
        width, height = struct.unpack('>II', raw[16:24])
        identity = manifest['screenshots'][source]
        assert hashlib.sha256(raw).hexdigest() == identity['sha256'], source
        assert [width, height] == identity['dimensions'], source
        svg = [
            '<svg xmlns="http://www.w3.org/2000/svg" width="432" height="960" '
            'viewBox="0 0 1080 2400" role="img" aria-labelledby="title desc">',
            f'<title id="title">{html.escape(title)}</title>',
            '<desc id="desc">Orange Rahmen zeigen die Bedienelemente. '
            'Die Pfeilspitze zeigt eine Stelle innerhalb des Tippbereichs. '
            'Nummern gehören zur Bildfolge in der Anleitung.</desc>',
            '<defs><marker id="arrow" markerWidth="5" markerHeight="5" '
            'refX="4" refY="2.5" orient="auto"><path d="M0 0 L5 2.5 L0 5 Z" '
            'fill="#ff7a00"/></marker></defs>',
            '<image width="1080" height="2400" preserveAspectRatio="none" '
            f'href="data:image/png;base64,{base64.b64encode(raw).decode()}"/>',
        ]
        for number, rect, target, badge in markers:
            x, y, w, h = rect
            tx, ty = target
            bx, by = badge
            svg += [
                f'<rect x="{x}" y="{y}" width="{w}" height="{h}" rx="16" '
                'fill="none" stroke="#fff" stroke-width="14"/>',
                f'<rect x="{x}" y="{y}" width="{w}" height="{h}" rx="16" '
                'fill="none" stroke="#ff7a00" stroke-width="8"/>',
                f'<path d="M{bx} {by} L{tx} {ty}" fill="none" '
                'stroke="#fff" stroke-width="15"/>',
                f'<path d="M{bx} {by} L{tx} {ty}" fill="none" '
                'stroke="#ff7a00" stroke-width="8" marker-end="url(#arrow)"/>',
                f'<circle cx="{bx}" cy="{by}" r="43" fill="#ff7a00" '
                'stroke="#fff" stroke-width="6"/>',
                f'<text x="{bx}" y="{by + 14}" text-anchor="middle" '
                'font-family="Arial,sans-serif" font-weight="700" font-size="40" '
                f'fill="#111">{number}</text>',
            ]
        svg += ['</svg>', '']
        path = ASSETS / f'{name}.svg'
        path.write_text('\n'.join(svg), encoding='utf-8', newline='\n')
        outputs.append(path.name)
    print('Built screenshot overlays:', ', '.join(outputs))


if __name__ == '__main__':
    main()
