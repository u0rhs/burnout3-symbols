<sub>[Home](../../README.md) › [Formats](README.md)</sub>

# CodeWarrior link maps and assert files

The Burnout 3 prototype disc has one text map, three binary maps and two assert files. Read by
[`tools/export_b3maps.py`](../../tools/export_b3maps.py).

## Text map (`DNAT_200.MAP`)

CodeWarrior's linker output for `DNAT_200.45`, CRLF line endings, linked Thu 3 June 2004 19:51. Sections,
each starting with `# `:

| Section | Contents |
|---|---|
| `# Link map of ENTRYPOINT` | The reference tree from the entry point: `  N] name (type,binding) found in object`, indented by depth. Shows what pulled each symbol in |
| `# Unreferenced symbols:` | `\tname\t(object)`: symbols the linker dropped. Names of code that existed but was not linked |
| `# .main` | The layout: `  ADDRESS SIZE section  name\t(object)` |
| `# Exception index`, `# Literal`, `# .assert`, `# .heap` | Smaller tables |
| `# Memory map:` | Segment addresses |

Layout lines look like this:

```
  0018FE30 00000640 .text   CB3VehiclePhysics::CollideHingedPartWithWorld(int)	(B3VehiclePhysics.cpp)
```

Address and size are hex. Names are already demangled. The object is a source file, or
`LIBRARY.a object.o` padded to 15 characters, so some library object names are cut short
(`staticinitializ`). Each object's symbols start with a `.text  (object)` line.

Sections in the layout: `.text`, `.rodata`, `.data`, `.vtables`, `.init`, `.ctor`, `.vutext`, `.vudata`
(VU microcode), and others.

**This map is older than the executable.** `DNAT_200.45` is dated 9 June, so game code has moved. The
offset grows in steps: 0 for the first libraries, then −0xB8, −0xD0 … −0x2970 by `B3VehiclePhysics`,
−0x9990 by the renderers, −0xC670 by the network code, and −0xCE40 at the end. Libraries (RenderWare,
Sony, MSL) match exactly within each stretch. Don't use DNAT_200.MAP addresses on `DNAT_200.45` without
correcting for this. Corrected block by block, the map fits the executable: for 7,274 of 7,425 names the
map's size equals the size of the function found at the corrected address (the rest are mostly addresses
where the analysis found no function start). [`prototype-names.csv`](../../data/burnout3-retail/prototype-names.csv)
gives both addresses for 5,054 functions.

## Binary maps (`B3DEBUG.MAP`, `B3INTERN.MAP`, `B3O0PCH.MAP`)

The same information for three other builds, in a fixed-size binary format:

```
u32 version       = 1
u32 record count  (B3DEBUG: 9,488)
records of 264 bytes:
    u32 address
    u32 size
    char text[256]  "name\t(object)", NUL-terminated, rest filled with 0xCD
```

File size = 8 + 264 × count. The `0xCD` filler is the Microsoft debug heap's pattern for uninitialised
memory, so the tool that wrote these maps was a Windows debug build.

**Damage:** that tool cut each line at its first `)`. So `operator delete(void*)` lost its
`\t(MSLGCC_PS2.LIB delop.o)`, and `std::exception::what() const` lost its ` const`. The export recovers
the object by looking the name up in the other maps; about 400 functions (3,100 in `B3O0PCH`) remain
`(object unknown)`. The `const` qualifiers can't be recovered from these maps.

Section-start records (`.text`, `.data` …) mark where each section begins; there is no separate section
field.

| Map | Build | Date | Records | Functions |
|---|---|---|---:|---:|
| `B3DEBUG.MAP` | debug | 9 June 2004 | 9,488 | 8,350 |
| `B3INTERN.MAP` | internal | 2 June 2004 | 9,639 | 8,419 |
| `B3O0PCH.MAP` | unoptimised (`-O0`), precompiled headers | 9 June 2004 | 12,193 | 11,049 |

(Dates are the files' timestamps. The name `O0PCH` is read as "-O0, PCH"; that's a guess from the name.)

## Assert files (`B3DEBUG.AST`, `B3INTERN.AST`)

The debug builds kept their assert expressions in a separate file instead of in the executable: one
NUL-terminated string after another, padded to 8-byte alignment, with no header. The executable
presumably refers to them by offset. The export lists each string with its offset.

They are useful as documentation: `lnTrackCount > 0`, `lpProfile`, `!IsEffectivelyZero(lrModulus)`
name variables and fields, and say what the code expects.
