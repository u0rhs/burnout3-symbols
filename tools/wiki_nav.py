"""Put a navigation line at the top of every documentation page: Home › section.

    python3 tools/wiki_nav.py            (from the repository root; run last by tools/rebuild.sh)

The line is `<sub>[Home](…/README.md) › [Section](…)</sub>`. An existing navigation line (one starting
with `<sub>[Home]`) is replaced, so running it again changes nothing.
"""
import os

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SECTIONS = {
    'docs/systems': 'Game systems',
    'docs/classes': 'Classes',
    'docs/reference': 'Reference',
    'docs/formats': 'Formats',
    'docs/avenues': 'Uses',
    'data': 'Data',
    'tools': 'Tools',
}
SKIP_DIRS = {'source_outline', 'disc', 'maps', 'modules', 'SLUS_204.97', 'strings', 'vdb'}


def nav_for(path):
    rel_dir = os.path.relpath(os.path.dirname(path), ROOT).replace(os.sep, '/')
    home = os.path.relpath(os.path.join(ROOT, 'README.md'), os.path.dirname(path)).replace(os.sep, '/')
    parts = ['[Home](%s)' % home]
    for sec, title in SECTIONS.items():
        if rel_dir == sec or rel_dir.startswith(sec + '/'):
            idx = os.path.join(ROOT, sec, 'README.md')
            if os.path.abspath(path) != os.path.abspath(idx) and os.path.exists(idx):
                parts.append('[%s](%s)' % (title, os.path.relpath(idx, os.path.dirname(path)).replace(os.sep, '/')))
            break
    return '<sub>' + ' › '.join(parts) + '</sub>'


def main():
    n = 0
    for top in ('docs', 'data', 'tools'):
        for dp, dn, fn in os.walk(os.path.join(ROOT, top)):
            dn[:] = [d for d in dn if d not in SKIP_DIRS]
            for f in fn:
                if not f.endswith('.md'):
                    continue
                p = os.path.join(dp, f)
                text = open(p).read()
                lines = text.split('\n')
                if lines and lines[0].startswith('<sub>[Home]'):
                    lines = lines[2:] if len(lines) > 1 and lines[1] == '' else lines[1:]
                new = nav_for(p) + '\n\n' + '\n'.join(lines)
                if new != text:
                    with open(p, 'w') as fh:
                        fh.write(new)
                    n += 1
    print('navigation updated on', n, 'pages')


if __name__ == '__main__':
    main()
