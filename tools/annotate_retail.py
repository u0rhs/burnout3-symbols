"""Refresh everything that is derived from the retail function names (data/burnout3-retail/function-names.csv):

  - the nearest_named_function_before column of memory-map.csv and nahelam-mods.csv
  - the "Every mod" table of docs/reference/nahelam-mods.md (between its table markers)
  - the counts on docs/reference/retail-function-names.md (between its count markers)

    python3 tools/annotate_retail.py            (from the repository root; run by tools/rebuild.sh)
"""
import bisect
import collections
import csv
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
R = os.path.join(ROOT, 'data', 'burnout3-retail')
CODE_END = 0x003D4000          # end of the code in SLUS_210.50; data addresses get no function

GROUPS = [
    ('Development and debug', ['Development menu', 'Car Viewer', 'Debug: body hulls', 'Debug: collision world',
                               'Debug: intervals', 'Debug: near miss', 'Debug: traffic lanes',
                               'Debug: traffic spatial triggers', 'Draw checkpoints', "Show AI drivers' names",
                               'Pause gameplay', 'AI drives the player car', 'Force LOD']),
    ('Crashes and physics', ['Crash Breaker Expansion', 'Crash Breaker in all modes', 'Crash on demand',
                             'Crazy AI Physics', 'Deformation scale', 'Drive through walls', 'Kamikaze traffic, clean',
                             'Moon jump', 'No crash camera']),
    ('Race rules and modes', ['Standing start', 'Road Rage AI in races', 'Burnout points in Road Rage',
                              'Road Rage rivals number', 'Road Rage time limit', 'Props in Road Rage',
                              "Choose rivals' cars", 'Heavyweights always available', 'No automatic event ending',
                              'No idle check', 'Traffic seed', 'Disable traffic', 'Tuk-tuks everywhere',
                              'Manual transmission', 'Horn', 'Headlights while honking', 'Permanent headlights']),
    ('HUD and display', ['Disable HUD', 'Lap timer in races', 'Lap timer in Road Rage', 'Race distance counter',
                         'Race distance counter (widescreen)', 'Speedometer in km/h', 'Third-person rear view',
                         'Partial mirror mode', 'Vertical split screen', 'Graphics', 'Glass cars', 'Chrome vehicles',
                         'Extra particles (full)', 'Extra particles (partial)']),
    ('Start-up, sound and online', ['Boot Boost', 'Single Event DJ', 'No vehicle sounds', 'Online']),
]


def load_names():
    rows = [r for r in csv.DictReader(open(os.path.join(R, 'function-names.csv'))) if r['us_address']]
    names = sorted((int(r['us_address'], 16), r['name']) for r in rows)
    return names, rows


def nearest(names, addrs, a):
    if not (0x100000 <= a < CODE_END):
        return ''
    i = bisect.bisect_right(addrs, a) - 1
    if i < 0 or a - names[i][0] >= 0x4000:
        return ''
    return names[i][1]


def annotate(path, names, addrs, code_only):
    rows = list(csv.DictReader(open(path)))
    fields = list(rows[0].keys())
    for r in rows:
        try:
            a = int(r['address'], 16)
        except ValueError:
            a = 0
        r['nearest_named_function_before'] = nearest(names, addrs, a) if not code_only(r, a) is False else ''
    with open(path, 'w', newline='') as fh:
        w = csv.DictWriter(fh, fieldnames=fields)
        w.writeheader()
        w.writerows(rows)
    return rows


def replace_between(path, start, end, text):
    s = open(path).read()
    if start not in s or end not in s:
        raise SystemExit('%s: markers %s / %s missing' % (path, start, end))
    s = re.sub(re.escape(start) + r'.*?' + re.escape(end), lambda m: start + '\n' + text + '\n' + end, s, flags=re.S)
    open(path, 'w').write(s)


def mods_table(rows):
    by = collections.OrderedDict()
    for r in rows:
        by.setdefault(r['mod'], []).append(r)
    L = []
    for title, mods in GROUPS:
        L += ['### %s' % title, '', '| Mod | What it does | US addresses changed |', '|---|---|---|']
        for m in mods:
            if m not in by:
                continue
            rs = by[m]
            key = [r for r in rs if not r['area']]
            cave = len(rs) - len(key)
            parts = []
            for r in key[:4]:
                f = r['nearest_named_function_before']
                parts.append('`%s`%s' % (r['address'], ' (after `%s`)' % f.split('(')[0] if f else ''))
            if len(key) > 4:
                parts.append('+%d more' % (len(key) - 4))
            if cave:
                parts.append('%d words of new code' % cave)
            L.append('| [%s](%s) | %s | %s |' % (m, rs[0]['file'], rs[0]['what'], '<br>'.join(parts)))
        L.append('')
    missing = [m for m in by if not any(m in g[1] for g in GROUPS)]
    if missing:
        raise SystemExit('mods without a group: %s' % missing)
    return '\n'.join(L)


def main():
    names, rows = load_names()
    addrs = [a for a, _ in names]
    annotate(os.path.join(R, 'memory-map.csv'), names, addrs,
             lambda r, a: r['width'] in ('instruction', 'hook', 'code cave') or a < 0x400000)
    mods = annotate(os.path.join(R, 'nahelam-mods.csv'), names, addrs, lambda r, a: True)
    replace_between(os.path.join(ROOT, 'docs', 'reference', 'nahelam-mods.md'),
                    '<!-- mods-table:start -->', '<!-- mods-table:end -->', mods_table(mods))
    c = collections.Counter(r['check'] for r in csv.DictReader(open(os.path.join(R, 'function-names.csv'))))
    total = sum(c.values())
    replace_between(os.path.join(ROOT, 'docs', 'reference', 'retail-function-names.md'),
                    '<!-- counts:start -->', '<!-- counts:end -->',
                    '| Check | Names | Meaning |\n|---|---:|---|\n'
                    '| function start | %d | The US address begins a function: a stack-frame `addiu $sp,…`, or the first '
                    'instruction after a `jr $ra` and its delay slot |\n'
                    '| not verified | %d | Named and shifted, but the address didn\'t pass the check; small leaf functions '
                    'often fail it without being wrong |\n'
                    '| outside the US image | %d | Data or BSS names beyond the executable\'s code |\n'
                    '| **total** | **%d** | |' % (c['function start'], c['not verified'], c['outside the US image'], total))
    print('annotated; names:', dict(c))


if __name__ == '__main__':
    main()
