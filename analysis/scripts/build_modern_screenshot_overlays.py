"""Rebuild SVG tap markers over the reviewed 5.12.2 screenshots.

Only geometry is added. The two anonymized source PNGs are documented in the
manifest; private original screenshots and UI dumps are never inputs here.
"""
import base64
import hashlib
import html
import json
from pathlib import Path
import struct

ROOT = Path(__file__).resolve().parents[2]
ASSETS = ROOT / 'docs/assets/niu-patch-5.12.2'


def build():
    manifest = json.loads((ASSETS / 'manifest.json').read_text(encoding='utf-8'))
    for figure in manifest['figures']:
        source = figure['source']
        raw = (ASSETS / 'screens' / source).read_bytes()
        identity = manifest['screenshots'][source]
        assert hashlib.sha256(raw).hexdigest() == identity['sha256'], source
        assert list(struct.unpack('>II', raw[16:24])) == identity['dimensions'], source
        svg = [
            '<svg xmlns="http://www.w3.org/2000/svg" width="1260" height="2400" '
            'viewBox="0 0 1260 2400" role="img" aria-labelledby="title desc">',
            f'<title id="title">{html.escape(figure["title"])}</title>',
            '<desc id="desc">Echte App-Aufnahme. Orange Rahmen und Pfeile: '
            'auf die Pfeilspitze tippen. Grüne Rahmen: Status lesen, nicht tippen. '
            'Die nummerierte Aktion wird im Bildtext erklärt.</desc>',
            '<defs><marker id="arrow" markerWidth="5" markerHeight="5" '
            'refX="4" refY="2.5" orient="auto"><path d="M0 0 L5 2.5 L0 5 Z" '
            'fill="#f97300"/></marker></defs>',
            '<rect width="1260" height="2400" fill="#fff"/>',
            '<image width="1080" height="2400" preserveAspectRatio="none" '
            f'href="data:image/png;base64,{base64.b64encode(raw).decode()}"/>',
        ]
        for status in figure.get('status', []):
            x, y, width, height = status
            svg += [f'<rect x="{x}" y="{y}" width="{width}" height="{height}" '
                    'rx="14" fill="none" stroke="#168447" stroke-width="8"/>']
        for marker in figure.get('markers', []):
            number = marker['number']
            x, y, width, height = marker['rect']
            tx, ty = marker['target']
            assert x <= tx <= x + width and y <= ty <= y + height
            if 'observed_tap_bounds' in marker:
                left, top, right, bottom = marker['observed_tap_bounds']
                assert left <= tx <= right and top <= ty <= bottom
            svg += [
                f'<rect x="{x}" y="{y}" width="{width}" height="{height}" '
                'rx="14" fill="none" stroke="#fff" stroke-width="14"/>',
                f'<rect x="{x}" y="{y}" width="{width}" height="{height}" '
                'rx="14" fill="none" stroke="#f97300" stroke-width="8"/>',
                f'<path d="M1180 {ty} L{tx} {ty}" fill="none" stroke="#fff" stroke-width="15"/>',
                f'<path d="M1180 {ty} L{tx} {ty}" fill="none" stroke="#f97300" '
                'stroke-width="8" marker-end="url(#arrow)"/>',
                f'<circle cx="1180" cy="{ty}" r="40" fill="#f97300" stroke="#fff" stroke-width="6"/>',
                f'<text x="1180" y="{ty+15}" text-anchor="middle" font-family="Arial,sans-serif" '
                f'font-size="43" font-weight="700" fill="#111">{number}</text>',
            ]
        svg += ['</svg>', '']
        (ASSETS / (figure['name'] + '.svg')).write_text('\n'.join(svg), encoding='utf-8', newline='\n')
    print(f'Built {len(manifest["figures"])} current screenshot overlays; original pixels embedded unchanged.')


if __name__ == '__main__':
    build()
