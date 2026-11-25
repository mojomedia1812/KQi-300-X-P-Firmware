"""Check firmware identities, self-hosted descriptors, and local Markdown links."""
import hashlib
import json
from pathlib import Path
import re
from urllib.parse import unquote, urlsplit

ROOT = Path(__file__).resolve().parents[2]
CANONICAL = 'https://github.com/mojomedia1812/KQi-300-X-P-Firmware'


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
    for path in sorted(ROOT.rglob('*.md')):
        if any(part in ('.git', '.venv', 'generated') for part in path.relative_to(ROOT).parts):
            continue
        text = path.read_text(encoding='utf-8')
        assert not re.search(r'[A-Za-z]:[\\/](?:Users|_codex)[\\/]', text), path
        for target in re.findall(r'(?<!!)\[[^\]]+\]\(([^\s)]+)\)', text):
            url = urlsplit(target)
            if url.netloc == 'github.com':
                assert target.startswith(CANONICAL + '/') or target == CANONICAL, (path, target)
            if url.scheme or target.startswith('#'):
                continue
            resolved = (path.parent / unquote(url.path)).resolve()
            assert resolved.is_relative_to(ROOT.resolve()), (path, target)
            assert resolved.exists(), (path, target)
    print('All local Markdown link targets exist; no obsolete repository or local host paths found')


if __name__ == '__main__':
    main()
