"""Check firmware identities, self-hosted descriptors, and local Markdown links."""
import hashlib
import json
from pathlib import Path
import re
import struct
from urllib.parse import unquote, urlsplit

ROOT = Path(__file__).resolve().parents[2]
CANONICAL = 'https://github.com/mojomedia1812/KQi-300-X-P-Firmware'
# External repositories are cited only as reviewed sources on this evidence page.
# Firmware descriptors and all operational download links remain self-hosted.
REVIEWED_SOURCE_LINKS = {
    'https://github.com/hjcday/KQi-300-X-P-Firmware',
    'https://github.com/jerridev/300X-US',
    'https://github.com/Laufbursche42/niu-update',
}


def main():
    manifest = json.loads((ROOT / 'analysis/manifest.json').read_text(encoding='utf-8'))
    assert manifest['repository'] == CANONICAL
    for identity in manifest['firmware_files']:
        region = identity['region']
        source = ROOT / identity['path']
        data = source.read_bytes()
        descriptor = json.loads((ROOT / f'300X/{region}/update.json').read_text(encoding='utf-8'))
        assert len(descriptor['data']['items']) == 1
        item = descriptor['data']['items'][0]
        expected_url = f'{CANONICAL}/raw/refs/heads/main/{identity["path"]}'
        assert item['url'] == identity['url'] == expected_url
        assert item['devicetype'] == 'FOC'
        assert item['version'] == identity['version']
        assert len(data) == int(item['size']) == identity['size']
        assert hashlib.md5(data).hexdigest() == item['md5'] == identity['md5']
        assert hashlib.sha256(data).hexdigest() == identity['sha256']
        assert hashlib.sha1(f'blob {len(data)}\0'.encode()+data).hexdigest() == identity['git_blob_sha1']
        print(f'{region}: original binary, descriptor size, hashes and canonical URL verified')
    image_root = ROOT / 'docs/assets/niu-patch'
    image_manifest = json.loads((image_root / 'manifest.json').read_text(encoding='utf-8'))
    assert len(image_manifest['annotated_exports']) == 8
    image_files = {
        **{f'screens/{name}': entry for name, entry in image_manifest['screenshots'].items()},
        **image_manifest['annotated_exports'],
    }
    for name, identity in image_files.items():
        data = (image_root / name).read_bytes()
        assert data.startswith(b'\x89PNG\r\n\x1a\n'), name
        assert hashlib.sha256(data).hexdigest() == identity['sha256'], name
        assert list(struct.unpack('>II', data[16:24])) == identity['dimensions'], name
    print('Public screenshot sources and eight annotated PNG exports verified')
    for path in sorted(ROOT.rglob('*.md')):
        if any(part in ('.git', '.venv', 'generated') for part in path.relative_to(ROOT).parts):
            continue
        text = path.read_text(encoding='utf-8')
        assert not re.search(r'[A-Za-z]:[\\/](?:Users|_codex)[\\/]', text), path
        targets = re.findall(r'\[[^\]]+\]\(([^\s)]+)\)', text)
        targets += re.findall(r'\b(?:src|href)="([^"\s]+)"', text)
        for target in targets:
            url = urlsplit(target)
            if url.netloc == 'github.com':
                reviewed_source = (path == ROOT / 'docs/niu-patch-quellen.md'
                                   and target in REVIEWED_SOURCE_LINKS)
                assert (target.startswith(CANONICAL + '/') or target == CANONICAL
                        or reviewed_source), (path, target)
            if url.scheme or target.startswith('#'):
                continue
            resolved = (path.parent / unquote(url.path)).resolve()
            assert resolved.is_relative_to(ROOT.resolve()), (path, target)
            assert resolved.exists(), (path, target)
    print('Markdown links verified; external GitHub citations limited to reviewed-source page')


if __name__ == '__main__':
    main()
