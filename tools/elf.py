"""Minimal reader for the little-endian MIPS ELF files on the Burnout discs."""
import struct

SYM_TYPES = {0: 'notype', 1: 'object', 2: 'func', 3: 'section', 4: 'file'}
SYM_BINDS = {0: 'local', 1: 'global', 2: 'weak'}


class Elf:
    def __init__(self, path):
        self.path = path
        self.data = d = open(path, 'rb').read()
        if d[:4] != b'\x7fELF':
            raise ValueError('not an ELF file: %s' % path)
        self.entry, = struct.unpack_from('<I', d, 0x18)
        shoff, = struct.unpack_from('<I', d, 0x20)
        shentsize, shnum, shstrndx = struct.unpack_from('<HHH', d, 0x2E)
        raw = [struct.unpack_from('<IIIIIIIIII', d, shoff + i * shentsize) for i in range(shnum)] if shoff else []
        self.sections = []
        strtab_off = raw[shstrndx][4] if raw else 0
        for i, s in enumerate(raw):
            name = d[strtab_off + s[0]:d.index(b'\0', strtab_off + s[0])].decode('latin1') if raw else ''
            self.sections.append(dict(index=i, name=name, type=s[1], flags=s[2], addr=s[3],
                                      offset=s[4], size=s[5], link=s[6], info=s[7]))
        self.by_name = {s['name']: s for s in self.sections if s['name']}

    def section_data(self, name):
        s = self.by_name.get(name)
        if not s:
            return None
        return self.data[s['offset']:s['offset'] + s['size']]

    def symbols(self):
        sy, st = self.by_name.get('.symtab'), self.by_name.get('.strtab')
        if not sy or not st or sy['size'] <= 16:
            return []
        d, out = self.data, []
        for i in range(sy['size'] // 16):
            n, value, size, info, other, shndx = struct.unpack_from('<IIIBBH', d, sy['offset'] + i * 16)
            name = d[st['offset'] + n:d.index(b'\0', st['offset'] + n)].decode('latin1')
            if not name and value == 0 and size == 0:
                continue
            sec = self.sections[shndx]['name'] if 0 < shndx < len(self.sections) else \
                {0: 'UND', 0xfff1: 'ABS', 0xfff2: 'COMMON'}.get(shndx, hex(shndx))
            out.append(dict(name=name, addr=value, size=size, type=SYM_TYPES.get(info & 0xf, str(info & 0xf)),
                            bind=SYM_BINDS.get(info >> 4, str(info >> 4)), section=sec))
        return out
