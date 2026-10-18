"""Demangler for Metrowerks CodeWarrior (cfront/ARM-style) C++ names.

    Init__15CVehiclePhysicsFv             -> CVehiclePhysics::Init()
    __ct__9CGameDataFPC8CCarData          -> CGameData::CGameData(const CCarData*)
    __vt__11CScreenFade                   -> CScreenFade::__vtable

demangle() returns None when the name is not a mangled C++ name, so callers can
fall back to the raw symbol.
"""

OPERATORS = {
    'nw': 'operator new', 'nwa': 'operator new[]', 'dl': 'operator delete', 'dla': 'operator delete[]',
    'pl': 'operator+', 'mi': 'operator-', 'ml': 'operator*', 'dv': 'operator/', 'md': 'operator%',
    'er': 'operator^', 'ad': 'operator&', 'or': 'operator|', 'co': 'operator~', 'nt': 'operator!',
    'as': 'operator=', 'lt': 'operator<', 'gt': 'operator>', 'apl': 'operator+=', 'ami': 'operator-=',
    'amu': 'operator*=', 'adv': 'operator/=', 'amd': 'operator%=', 'aer': 'operator^=', 'aad': 'operator&=',
    'aor': 'operator|=', 'ls': 'operator<<', 'rs': 'operator>>', 'als': 'operator<<=', 'ars': 'operator>>=',
    'eq': 'operator==', 'ne': 'operator!=', 'le': 'operator<=', 'ge': 'operator>=', 'aa': 'operator&&',
    'oo': 'operator||', 'pp': 'operator++', 'mm': 'operator--', 'cm': 'operator,', 'rm': 'operator->*',
    'rf': 'operator->', 'cl': 'operator()', 'vc': 'operator[]',
}

BUILTIN = {
    'v': 'void', 'c': 'char', 's': 'short', 'i': 'int', 'l': 'long', 'x': 'long long', 'f': 'float',
    'd': 'double', 'r': 'long double', 'b': 'bool', 'w': 'wchar_t', 'e': '...',
}


class _Fail(Exception):
    pass


class _P:
    def __init__(self, s):
        self.s, self.i = s, 0

    def peek(self, n=1):
        return self.s[self.i:self.i + n]

    def take(self, n=1):
        if self.i + n > len(self.s):
            raise _Fail
        r = self.s[self.i:self.i + n]
        self.i += n
        return r

    def number(self):
        j = self.i
        while self.i < len(self.s) and self.s[self.i].isdigit():
            self.i += 1
        if j == self.i:
            raise _Fail
        return int(self.s[j:self.i])

    def done(self):
        return self.i >= len(self.s)


def _qualified(p):
    """A class name: <len><name> or Q<n><len><name>... ; returns 'A::B'."""
    if p.peek() == 'Q':
        p.take()
        if p.peek() == '_':
            p.take()
            n = p.number()
            if p.take() != '_':
                raise _Fail
        else:
            n = int(p.take())
        return '::'.join(_name(p) for _ in range(n))
    return _name(p)


def _name(p):
    n = p.number()
    name = p.take(n)
    if not name:
        raise _Fail
    return name


def _type(p, args):
    """Returns a declarator template: a string with '%s' where the declarator goes."""
    quals = []
    while p.peek() in ('C', 'V'):
        quals.append('const' if p.take() == 'C' else 'volatile')
    q = ' '.join(quals)
    c = p.peek()
    if c in ('P', 'R'):
        p.take()
        inner = _type(p, args)
        sym = '*' if c == 'P' else '&'
        if q:
            sym += ' ' + q + ' '
        return _wrap(inner, sym)
    if c == 'A':
        p.take()
        n = p.number()
        if p.take() != '_':
            raise _Fail
        inner = _type(p, args)
        return _prefix(q, inner.replace('%s', '%s[' + str(n) + ']', 1))
    if c == 'F':
        p.take()
        params = _params(p, stop='_')
        if p.peek() == '_':
            p.take()
            ret = _type(p, args)
        else:
            ret = 'void %s'
        return ret.replace('%s', '%s(' + params + ')', 1)
    if c == 'M':
        p.take()
        cls = _qualified(p)
        inner = _type(p, args)
        return _wrap(inner, cls + '::*')
    sign = ''
    if c in ('U', 'S'):
        sign = 'unsigned ' if p.take() == 'U' else 'signed '
        c = p.peek()
    if c in BUILTIN:
        p.take()
        base = sign + BUILTIN[c]
    elif c.isdigit() or c == 'Q':
        base = _qualified(p)
    else:
        raise _Fail
    return (q + ' ' if q else '') + base + ' %s'


def _prefix(q, t):
    return (q + ' ' + t) if q else t


def _wrap(inner, sym):
    # pointer/reference to array or function needs parentheses
    head, _, tail = inner.partition('%s')
    if tail.startswith('(') or tail.startswith('['):
        return head + '(' + sym + '%s)' + tail
    return head + sym + '%s' + tail


def _params(p, stop=None):
    args = []
    while not p.done() and p.peek() != stop:
        c = p.peek()
        if c == 'T':          # repeat a previous argument
            p.take()
            idx = int(p.take())
            args.append(args[idx - 1])
            continue
        if c == 'N':          # N<count><index>
            p.take()
            cnt, idx = int(p.take()), int(p.take())
            args.extend([args[idx - 1]] * cnt)
            continue
        args.append(_type(p, args))
    if args == ['void %s']:
        return ''
    return ', '.join(_fmt(a) for a in args)


def _fmt(t):
    return t.replace(' %s', '').replace('%s', '').strip()


def _special(base, cls):
    if base == '__ct':
        return cls.split('::')[-1]
    if base == '__dt':
        return '~' + cls.split('::')[-1]
    if base.startswith('__op'):
        return None
    if base.startswith('__') and base[2:] in OPERATORS:
        return OPERATORS[base[2:]]
    return base


def demangle(sym):
    if '__' not in sym[1:] or sym.startswith('@'):
        return None
    for prefix, label in (('__vt__', '__vtable'), ('__RTTI__', '__RTTI')):
        if sym.startswith(prefix):
            try:
                p = _P(sym[len(prefix):])
                cls = _qualified(p)
                if p.done():
                    return cls + '::' + label
            except (_Fail, ValueError):
                return None
    start = 1
    while True:
        k = sym.find('__', start)
        if k < 0:
            return None
        r = _try(sym[:k], sym[k + 2:])
        if r:
            return r
        start = k + 1


def _try(base, rest):
    if not base:
        return None
    try:
        p = _P(rest)
        cls = None
        if p.peek().isdigit() or p.peek() == 'Q':
            cls = _qualified(p)
        const = False
        if p.peek() == 'C':
            p.take()
            const = True
        if p.done():
            if cls is None:
                return None
            return cls + '::' + base   # static data member
        if p.take() != 'F':
            return None
        params = _params(p)
        if not p.done():
            return None
        if base.startswith('__op') and cls is not None:
            q = _P(base[4:])
            name = 'operator ' + _fmt(_type(q, []))
        else:
            name = _special(base, cls) if cls else (OPERATORS.get(base[2:], base) if base.startswith('__') else base)
        if name is None:
            return None
        full = (cls + '::' + name) if cls else name
        return full + '(' + params + ')' + (' const' if const else '')
    except (_Fail, ValueError, IndexError):
        return None


if __name__ == '__main__':
    import sys
    for s in sys.argv[1:]:
        print(s, '->', demangle(s))
