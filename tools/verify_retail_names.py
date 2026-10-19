"""Check retail function names against the code: how sure is each name in prototype-names.csv, and how do
Nahelam's names in function-names.csv compare? Writes the `proof` column and function-names-check.csv.

    python3 tools/verify_retail_names.py <SLUS_210.50> <DNAT_200.45> [--starts functions.csv] [--compare] [--control]

  SLUS_210.50   the NTSC-U retail executable (your own disc)
  DNAT_200.45   the June 8, 2004 prototype executable (your own disc)
  --starts      burnout3-pc's games/burnout3/config/functions.csv (an independent list of retail function
                starts); without it, the start check is skipped
  --compare     only report how the results compare with the files in data/burnout3-retail/, write nothing
  --control     also pair each retail function with a wrong prototype function of the same size and count
                how often the same-code test passes (and how often the wrong pair is also unique: never)

Reads data/burnout3-prototype/maps/DNAT_200.symbols.csv, data/burnout3-retail/prototype-names.csv
(names, retail addresses and sizes, prototype map and executable addresses) and function-names.csv.
Standard library only. Method and tiers: docs/reference/retail-prototype-names.md.

How a name is tested. Its retail function and its prototype function are compared instruction by
instruction with what has to move between builds masked: `jal` targets (compared by the name of the
function called), `j` targets, `lui` immediates, and the low halves of addresses (`$gp`- or `lui`-based).

  proven: same code, unique        identical, and that code occurs once in each executable
  proven: same code, same callers  identical, and a 'unique' function calls it in both executables
  proven: same place ...           between two 'unique' functions, with the same functions in the same order
                                   in both executables, and at least 60% alike
  strong / likely                  at least 90% / 75% alike, called functions agree

A called (or calling) function counts by name only when its name is also placed in retail; otherwise it
is unknown on both sides, like an unnamed retail function.
  unverified                       the rest

Function bounds. Prototype: the map's sizes, at map address + the block's drift (taken from the
prototype_map_address / prototype_elf_address pairs). Retail: prototype-names.csv sizes; other functions
end at the next known start (prototype names, Nahelam's names, --starts). Trailing zero words are ignored
when bodies are compared, so padding doesn't change a result.
"""
import argparse
import bisect
import collections
import csv
import difflib
import os
import re
import struct

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
R = os.path.join(ROOT, 'data', 'burnout3-retail')
MAP = os.path.join(ROOT, 'data', 'burnout3-prototype', 'maps', 'DNAT_200.symbols.csv')


class Elf:
    def __init__(self, path):
        d = open(path, 'rb').read()
        self.d, self.seg = d, []
        phoff, = struct.unpack_from('<I', d, 28)
        phes, phn = struct.unpack_from('<HH', d, 42)
        for i in range(phn):
            t, o, va, _, fs, _, _, _ = struct.unpack_from('<8I', d, phoff + i * phes)
            if t == 1:
                self.seg.append((va, o, fs))

    def words(self, a, n):
        for va, o, fs in self.seg:
            if va <= a and a + n <= va + fs:
                ws = list(struct.unpack_from('<%dI' % (n // 4), self.d, o + a - va))
                while ws and ws[-1] == 0:
                    ws.pop()
                return ws
        return None


# --- names: the two lists spell parameter lists differently ---------------------------------------------
TYPES = {'uint': 'unsigned int', 'ulong': 'unsigned long', 'ushort': 'unsigned short', 'uchar': 'unsigned char'}


def split_args(s):
    out, depth, cur = [], 0, ''
    for ch in s:
        depth += ch in '(<'
        depth -= ch in ')>'
        if ch == ',' and depth == 0:
            out.append(cur); cur = ''
        else:
            cur += ch
    return out + [cur]


def norm_type(t):
    t = t.strip()
    for k, v in TYPES.items():
        t = re.sub(r'\b%s\b' % k, v, t)
    m = re.match(r'^(.*?)\s+const\s*([*&]+.*)$', t)
    if m and not m.group(1).startswith('const '):
        t = 'const ' + m.group(1) + m.group(2)
    m = re.match(r'^(.*?)\s+const$', t)
    if m and not m.group(1).startswith('const '):
        t = 'const ' + m.group(1)
    return re.sub(r'\s+(?=[*&])', '', t).replace(' ', '')


def norm(n):
    """Comparable form: `char const *` = `const char*`, `ushort` = `unsigned short`, `(void)` = `()`; a
    trailing `const` is dropped (one list keeps it, the other doesn't)."""
    n = n.strip()
    i = n.find('(')
    if i < 0:
        return n
    depth = 0
    for j in range(i, len(n)):
        depth += n[j] == '('
        depth -= n[j] == ')'
        if depth == 0:
            break
    else:
        return n.replace(' ', '')               # cut off in the map
    args = n[i + 1:j].strip()
    a = [] if args in ('', 'void') else [norm_type(x) for x in split_args(args)]
    return n[:i].replace(' ', '') + '(' + ','.join(a) + ')'


# --- code comparison -----------------------------------------------------------------------------------
def target(w, base):
    return (base & 0xF0000000) | ((w & 0x3FFFFFF) << 2)


def mask(ws, base, names):
    out, lui = [], set()
    for w in ws:
        op, rs, rt = w >> 26, (w >> 21) & 31, (w >> 16) & 31
        if op == 3:
            out.append(('jal', names.get(target(w, base), '?')))
        elif op == 2:
            out.append(('j',))
        elif op == 0xF:
            lui.add(rt); out.append(('lui', rt))
        elif op in (1, 4, 5, 6, 7, 0x14, 0x15, 0x16, 0x17):
            out.append(w)                                        # branches are relative
        elif op not in (0, 0x10, 0x11, 0x12, 0x13, 0x1C) and (rs == 28 or rs in lui):
            out.append((op, rs, rt, 'imm'))                      # low half of an address
        else:
            out.append(w)
    return tuple(out)


def token(w):
    op = w >> 26
    if op in (0, 0x1C):
        return (op, w & 63)
    if op == 1:
        return (1, (w >> 16) & 31)
    if op in (0x10, 0x11, 0x12):
        return (op, (w >> 21) & 31, w & 63)
    return (op,)


def similarity(a, b):
    if len(a) * len(b) > 4e6:
        return 0.0
    return difflib.SequenceMatcher(None, [token(w) for w in a], [token(w) for w in b], autojunk=False).ratio()


def calls(ws, base):
    return [target(w, base) for w in ws if w >> 26 == 3]


NL = chr(10)


def replace_between(path, start, end, text):
    s = open(path, encoding='utf-8', newline='').read()        # keep the file's own line endings
    nl = chr(13) + NL if chr(13) + NL in s else NL
    i, j = s.index(start) + len(start), s.index(end)
    open(path, 'w', encoding='utf-8', newline='').write(s[:i] + nl + text.replace(NL, nl) + nl + s[j:])


def write_counts(proof, checks):
    """The count tables on docs/reference/retail-prototype-names.md and retail-function-names.md."""
    c = collections.Counter(proof.values())

    def n(k):
        return format(c[PROOF[k]], ',')
    proven = c[PROOF['T1a']] + c[PROOF['T1b']] + c[PROOF['T1c']]
    replace_between(os.path.join(ROOT, 'docs', 'reference', 'retail-prototype-names.md'),
                    '<!-- counts:start -->', '<!-- counts:end -->', NL.join([
        '| Proof | Names | What was shown |', '|---|---:|---|',
        '| proven: same code, unique | %s | The retail and prototype functions are the same code, instruction for '
        'instruction, and that code occurs only once in each executable |' % n('T1a'),
        '| proven: same code, same callers | %s | The same code (not unique, e.g. a small getter), and a function '
        'proven unique calls it in both executables |' % n('T1b'),
        '| proven: same place between proven functions | %s | It sits between two functions proven unique, and the '
        'retail and prototype hold the same functions there in the same order (source files keep their function '
        'order); at least 60%% alike |' % n('T1c'),
        '| **proven, total** | **%s** | |' % format(proven, ','),
        '| strong | %s | The code is at least 90%% alike and the functions it calls have the same names |' % n('T2'),
        '| likely | %s | At least 75%% alike, same called functions |' % n('T3'),
        '| unverified | %s | Rewritten between June and September 2004, calls that differ, or other gaps: check '
        'before relying on it |' % n('T4'),
        '| **total** | **%s** | |' % format(len(proof), ',')]))

    def kind(v):
        if v.startswith('agrees'):
            return 'agrees'
        if v.startswith('one function off'):
            return 'one function off'
        return v
    k = collections.Counter(kind(v) for v in checks)
    rows = [("Agrees with the prototype map's name", 'agrees'),
            ('Same function; the prototype map gives another parameter list',
             'same function, other signature in the prototype map'),
            ('The prototype map names this function differently (e.g. `Render` where the map says `_Render`)',
             'name not in the prototype map; the map names this function differently'),
            ("A different function; the code matches the prototype map's name",
             'different function: the code matches the prototype name'),
            ('A different function; open', 'different function: open'),
            ('One function off: the prototype map puts the name at a neighbouring address (the PAL to US shift)',
             'one function off'),
            ('Not in the prototype table; proven against its prototype function',
             'not in our table; proven against its prototype function (same code, unique)'),
            ('Not in the prototype table; the prototype has the name, not proven',
             'not in our table; the prototype has this name, not proven here'),
            ('No prototype counterpart (e.g. names from the Burnout Revenge prototype)', 'no prototype counterpart')]
    assert sum(k[v] for _, v in rows) == len(checks), k
    replace_between(os.path.join(ROOT, 'docs', 'reference', 'retail-function-names.md'),
                    '<!-- check:start -->', '<!-- check:end -->', NL.join(
        ['| Result | Names |', '|---|---:|'] + ['| %s | %s |' % (t, format(k[v], ',')) for t, v in rows] +
        ['| **total** | **%s** |' % format(len(checks), ',')]))


PROOF = {'T1a': 'proven: same code, unique', 'T1b': 'proven: same code, same callers',
         'T1c': 'proven: same place between proven functions', 'T2': 'strong', 'T3': 'likely', 'T4': 'unverified'}


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('retail'); ap.add_argument('prototype')
    ap.add_argument('--starts'); ap.add_argument('--compare', action='store_true')
    ap.add_argument('--control', action='store_true', help='also pair each retail function with a wrong '
                    'prototype function of the same size and count how often the same-code test passes')
    o = ap.parse_args()
    RE, EE = Elf(o.retail), Elf(o.prototype)

    pn = list(csv.DictReader(open(os.path.join(R, 'prototype-names.csv'))))
    nah = [r for r in csv.DictReader(open(os.path.join(R, 'function-names.csv'))) if r['us_address']]
    maps = [(int(r['address'], 16), int(r['size']), r['name']) for r in csv.DictReader(open(MAP))
            if r['section'] == '.text' and int(r['size']) > 0 and r['name'] != '.text']
    map_count = collections.Counter(n for _, _, n in maps)

    # prototype functions at executable addresses: map address + the drift of the nearest named pair before it
    pairs = sorted((int(r['prototype_map_address'], 16), int(r['prototype_elf_address'], 16)) for r in pn)
    pm = [m for m, _ in pairs]

    def drift(m):
        i = max(bisect.bisect_right(pm, m) - 1, 0)
        return pairs[i][1] - pairs[i][0]
    efun = {}
    for m, s, n in maps:
        efun.setdefault(m + drift(m), (s, n))
    ename = {a: n for a, (s, n) in efun.items()}
    map_size = {m: s for m, s, _ in maps}
    for r in pn:                                     # the named pairs themselves are exact
        e = int(r['prototype_elf_address'], 16)
        efun[e] = (map_size.get(int(r['prototype_map_address'], 16), 0), r['name'])
        ename[e] = r['name']

    # retail functions: known starts; sizes from prototype-names.csv, else up to the next start
    rsize = {int(r['us_address'], 16): int(r['size']) for r in pn if r['size']}
    starts = set(rsize) | {int(r['us_address'], 16) for r in nah if r['check'] == 'function start'}
    ext = None
    if o.starts:
        ext = {int(r['address'], 16) for r in csv.DictReader(open(o.starts))}
        starts |= ext
    starts = sorted(starts)
    rfun = {}
    for i, a in enumerate(starts):
        nxt = starts[i + 1] if i + 1 < len(starts) else a + 4
        rfun[a] = rsize.get(a, min(nxt - a, 0x10000))
    rname = {int(r['us_address'], 16): r['name'] for r in pn}     # called functions: the prototype names
    # a called (or calling) prototype function counts by name only if that name is also placed in retail;
    # otherwise it is unknown on both sides, like an unnamed retail function
    known = set(rname.values())
    ecname = {a: n for a, n in ename.items() if n in known}

    def body(elf, a, s):
        return elf.words(a, s) if s else None
    rbody = {a: body(RE, a, s) for a, s in rfun.items()}
    ebody = {a: body(EE, a, s) for a, (s, _) in efun.items() if s}
    rhash = collections.Counter(mask(b, a, {}) for a, b in rbody.items() if b)
    ehash = collections.Counter(mask(b, a, {}) for a, b in ebody.items() if b)
    rcall, ecall = collections.defaultdict(set), collections.defaultdict(set)
    for tab, out in ((rbody, rcall), (ebody, ecall)):
        for a, b in tab.items():
            for t in calls(b or [], a):
                out[t].add(a)

    # --- per name ---------------------------------------------------------------------------------------
    res = {}
    for r in pn:
        a, e, n = int(r['us_address'], 16), int(r['prototype_elf_address'], 16), r['name']
        rb, eb = rbody.get(a), ebody.get(e)
        x = dict(row=r, e=e, exact=False, ru=False, eu=False, sim=0.0, cs=0, cd=0, ksame=0, kdiff=0,
                 start=(a in ext) if ext is not None else True, anchor=map_count[n] == 1 or n not in map_count)
        if rb and eb:
            x['exact'] = mask(rb, a, rname) == mask(eb, e, ecname)
            x['ru'] = rhash[mask(rb, a, {})] == 1
            x['eu'] = ehash[mask(eb, e, {})] == 1
            x['sim'] = similarity(rb, eb)
            rc = collections.Counter(rname.get(t) for t in calls(rb, a)); rc.pop(None, None)
            ec = collections.Counter(ecname.get(t) for t in calls(eb, e)); ec.pop(None, None)
            x['ksame'], x['kdiff'] = sum((rc & ec).values()), sum((rc - ec).values())
        rk = collections.Counter(rname.get(c) for c in rcall.get(a, ())); rk.pop(None, None)
        ek = collections.Counter(ecname.get(c) for c in ecall.get(e, ())); ek.pop(None, None)
        x['cs'], x['cd'] = sum((rk & ek).values()), sum((rk - ek).values()) + sum((ek - rk).values())
        res[a] = x

    for a, x in res.items():
        ok_callees = x['kdiff'] == 0
        if x['exact'] and x['start'] and (x['ru'] and x['eu'] or x['cs'] > 0) and (x['cd'] == 0 or x['cs'] > 0):
            t = 'T1a' if x['ru'] and x['eu'] else 'T1b'
        elif x['start'] and x['sim'] >= 0.9 and ok_callees and (x['cs'] > 0 or x['ru'] and x['eu'] or x['ksame'] > 0):
            t = 'T2'
        elif x['start'] and x['sim'] >= 0.75 and ok_callees:
            t = 'T3'
        else:
            t = 'T4'
        if not x['anchor'] and t in ('T1a', 'T1b'):
            t = 'T2'
        if not x['anchor'] and t == 'T2' and x['sim'] < 0.95:
            t = 'T3'
        x['t'] = t

    t1a = {a: x['e'] for a, x in res.items() if x['t'] == 'T1a'}
    pa = sorted(t1a)
    rs, es = sorted(rfun), sorted(a for a in efun if efun[a][0])
    for a, x in res.items():                         # 'same place': the gap between two unique ones agrees
        if x['t'] in ('T1a', 'T1b') or not (x['anchor'] and x['start'] and x['sim'] >= 0.6):
            continue
        i = bisect.bisect_left(pa, a)
        if i == 0 or i >= len(pa):
            continue
        lo, hi = pa[i - 1], pa[i]
        elo, ehi = t1a[lo], t1a[hi]
        if not elo < x['e'] < ehi:
            continue
        rgap = rs[bisect.bisect_right(rs, lo):bisect.bisect_left(rs, hi)]
        egap = es[bisect.bisect_right(es, elo):bisect.bisect_left(es, ehi)]
        mapped = [res[g]['e'] for g in rgap if g in res]
        if len(rgap) == len(egap) and mapped == egap:
            x['t'] = 'T1c'

    for a, x in res.items():                         # 'same callers': a unique caller in both executables
        if x['t'] == 'T1b' and not any(c in t1a and t1a[c] in ecall.get(x['e'], ()) for c in rcall.get(a, ())):
            x['t'] = 'T2'
    if o.control:
        import random
        random.seed(1)
        by_size = collections.defaultdict(list)
        for ea, (s, _) in efun.items():
            if s and ebody.get(ea):
                by_size[s].append(ea)
        tests = same = same_unique = 0
        for a, x in res.items():
            s = efun.get(x['e'], (0,))[0]
            others = [b for b in by_size.get(s, []) if b != x['e']]
            if not others or not rbody.get(a):
                continue
            b = random.choice(others)
            tests += 1
            if mask(rbody[a], a, {}) == mask(ebody[b], b, {}):
                same += 1
                same_unique += ehash[mask(ebody[b], b, {})] == 1 and rhash[mask(rbody[a], a, {})] == 1
        print('control: %d wrong same-size pairs, %d pass the same-code test, %d of them also unique'
              % (tests, same, same_unique))

    proof = {a: PROOF[x['t']] for a, x in res.items()}
    old = {int(r['us_address'], 16): r['proof'] for r in pn}
    agree = sum(proof[a] == old[a] for a in proof)
    print('prototype-names.csv: %d names; %s' % (len(proof), dict(collections.Counter(proof.values()))))
    print('  same proof as the file: %d of %d' % (agree, len(proof)))
    if o.compare:
        for (was, now), k in collections.Counter((old[a], proof[a]) for a in proof if old[a] != proof[a]).most_common(12):
            print('  %5d  %s -> %s' % (k, was, now))

    # --- Nahelam's names ------------------------------------------------------------------------------
    by_name, by_head = collections.defaultdict(list), collections.defaultdict(list)
    for a, (s, n) in efun.items():
        if s:
            by_name[norm(n)].append(a)
            by_head[norm(n).split('(')[0]].append(a)
    pn_at = {int(r['us_address'], 16): r for r in pn}
    pn_by = collections.defaultdict(list)
    for r in pn:
        pn_by[norm(r['name'])].append(int(r['us_address'], 16))

    def test(ra, ea):
        rb, eb = rbody.get(ra), ebody.get(ea)
        if not rb or not eb:
            return '', 0.0
        if mask(rb, ra, {}) == mask(eb, ea, {}):
            return ('exact-unique' if ehash[mask(eb, ea, {})] == 1 and rhash[mask(rb, ra, {})] == 1 else 'exact'), 1.0
        return 'sim', similarity(rb, eb)
    out = []
    for r in nah:
        a, n = int(r['us_address'], 16), norm(r['name'])
        p = pn_at.get(a)
        cand = by_name.get(n) or by_head.get(n.split('(')[0], [])
        best = max(((ea,) + test(a, ea) for ea in cand), key=lambda t: t[2], default=None)
        if p is None and n in pn_by:
            v = 'one function off: the prototype map puts this name at ' + ' '.join('0x%08X' % b for b in pn_by[n])
        elif p and norm(p['name']) == n:
            v = 'agrees (%s)' % proof[a]
        elif p and best and best[0] == int(p['prototype_elf_address'], 16):
            v = 'same function, other signature in the prototype map'
        elif p and not cand:
            v = 'name not in the prototype map; the map names this function differently'
        elif p:
            mine = res[a]
            theirs = best[2] if best else 0.0
            favoured = (mine['exact'] and not (best and best[1].startswith('exact'))) or \
                (1.0 if mine['exact'] else mine['sim']) - theirs >= 0.5
            v = 'different function: the code matches the prototype name' if favoured else 'different function: open'
        elif best and best[1] == 'exact-unique':
            v = 'not in our table; proven against its prototype function (same code, unique)'
        elif cand:
            v = 'not in our table; the prototype has this name, not proven here'
        else:
            v = 'no prototype counterpart'
        out.append({'us_address': r['us_address'], 'nahelam_name': r['name'], 'code_check': v,
                    'prototype_name': p['name'] if p else '', 'prototype_proof': proof.get(a, '')})
    oldc = {r['us_address']: r['code_check'] for r in csv.DictReader(open(os.path.join(R, 'function-names-check.csv')))}
    same = sum(oldc.get(x['us_address']) == x['code_check'] for x in out)
    print('function-names-check.csv: %d names; same result as the file: %d' % (len(out), same))
    if o.compare:
        for (was, now), k in collections.Counter((oldc.get(x['us_address']), x['code_check']) for x in out
                                                 if oldc.get(x['us_address']) != x['code_check']).most_common(8):
            print('  %5d  %s -> %s' % (k, was, now))
        return

    for r in pn:
        r['proof'] = proof[int(r['us_address'], 16)]
    with open(os.path.join(R, 'prototype-names.csv'), 'w', newline='') as fh:
        w = csv.DictWriter(fh, fieldnames=list(pn[0]), lineterminator='\n'); w.writeheader(); w.writerows(pn)
    with open(os.path.join(R, 'function-names-check.csv'), 'w', newline='') as fh:
        w = csv.DictWriter(fh, fieldnames=list(out[0]), lineterminator='\n'); w.writeheader(); w.writerows(out)
    write_counts(proof, [x['code_check'] for x in out])
    print('written')


if __name__ == '__main__':
    main()
