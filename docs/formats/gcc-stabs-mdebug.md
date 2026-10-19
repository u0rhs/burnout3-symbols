<sub>[Home](../../README.md) › [Formats](README.md)</sub>

# GCC stabs in `.mdebug` (Burnout Revenge)

The Burnout Revenge July 14, 2005 PS2 prototype (`SLUS_212.42`) was compiled with SN Systems' GCC 2.x, which
writes its debug information as **stabs** strings packed into an ECOFF symbol table in the `.mdebug` section
(99 MB here). Read by [`tools/stabs.py`](../../tools/stabs.py); exported by
[`tools/export_revenge.py`](../../tools/export_revenge.py) ([data](../../data/burnout-revenge-prototype/README.md)).

## The container

`.mdebug` starts with the ECOFF symbolic header (`HDRR`, magic `0x7009`): 23 counts and file offsets, among
them the file descriptors (`cbFdOffset`, `ifdMax` = 1,129 here), the local symbols (`cbSymOffset`, 1.5 million)
and the local string table (`cbSsOffset`, 83 MB). The offsets are relative to the start of the ELF file.

| Record | Size | Fields used |
|---|---:|---|
| File descriptor (FDR) | 72 | `adr` (first address), `rss` (its file name, in its string base), `issBase` (its strings), `isymBase` + `csym` (its symbols) |
| Local symbol (SYMR) | 12 | `iss` (string, relative to the file's `issBase`), `value`, and a 32-bit word: `st` (6 bits), `sc` (5), reserved (1), `index` (20) |

A symbol carries a stab when `index & 0xFFF00 == 0x8F300`; the stab type is `index − 0x8F300`. A string that
ends in a backslash continues in the next stab.

## Stab types

| Type | Name | String | Value |
|---|---|---|---|
| `0x64` | N_SO | source file | its first address |
| `0x84` | N_SOL | included file | address |
| `0x80` | N_LSYM | a type (`Name:t…` typedef, `Name:T…` struct/enum tag) or a stack local | stack offset |
| `0x20` | N_GSYM | global variable `name:G<type>` | 0 (the symbol table has the address) |
| `0x26`, `0x28` | N_STSYM, N_LCSYM | file-static variable `name:S<type>` / `name:V<type>` | address |
| `0x24` | N_FUN | function `mangled:F<return type>` (`f`: static), then an N_FUN with an empty string | start; the second one: the size. **−1: the linker dropped the function** |
| `0xA0` | N_PSYM | stack parameter `name:p<type>` | stack offset |
| `0x40` | N_RSYM | register parameter `name:P<type>` or register local `name:r<type>` | register number |
| `0xC0`, `0xE0` | N_LBRAC, N_RBRAC | scope begin / end | address |

## Types

Every source file numbers its types itself (1, 2, … — no `(file,number)` pairs in this build), so a type
number means something only within its file. `N=` defines type N; a bare `N` refers to it, possibly before
the definition in the same file.

| Definition | Meaning |
|---|---|
| `r<type>;<lo>;<hi>;` | a basic type (its name comes from the typedef that defines it: `int:t1=r1;…`) |
| `N` (with `N=N`) | `void` |
| `*T`, `&T`, `kT`, `BT`, `fT` | pointer, reference, const, volatile, function returning T |
| `ar<index type>;<lo>;<hi>;T` | array |
| `xs<name>:` / `xu` / `xe` | forward reference to a struct / union / enum |
| `e<name>:<value>,…;` | enum |
| `@s<bits>;T` | T with a size attribute (`bool:t21=@s8;-16;`) |
| `s<size>` / `u<size>` | struct / union, see below |
| `##T;` / `#<class>,<return>,<args>…;` | method type (return type only / full) |

**Structs and classes:** `s<size in bytes>`, then optionally `!<n>,` and n base classes
`<virtual><access><bit offset>,<type>;`, then the fields and methods, then `;`, then optionally `~%<type>;`
(the class holding the vtable pointer).

- Field: `name:[/<access>]<type>,<bit offset>,<bits>;`. Access: 0 private, 1 protected, 2 public. The vtable
  pointer is `$vf<type number>:<type>,<bit offset>;` (no size); the export calls it `__vptr`.
- Static member: `name:[/<access>]<type>:<physical name>;`.
- Method: `name::` then one or more overloads `<method type>:<argument encoding>;<access><modifier><kind>`,
  ending in `;`. Modifier: `A` normal, `B` const, `C` volatile, `D` const volatile. Kind: `.` normal,
  `?` static, `*<vtable index>;<class>;` virtual. The argument encoding is GCC 2's mangling of the parameter
  types (`P10CGtTexture` = `CGtTexture *`).

## GCC 2 mangling, compared with CodeWarrior's

The same cfront-style scheme as CodeWarrior ([demangling](codewarrior-demangling.md)) with two differences:
GCC writes a method as `name__<class><args>` (CodeWarrior: `name__<class>F<args>`) and a const method as
`name__C<class><args>` (CodeWarrior: `<class>CF`). `G` marks a class type passed by value (`GQ29GtMathPs26CGtV4d`).
`tools/export_revenge.py` rewrites these and uses the CodeWarrior demangler. Example:
`GetStringWidth__C9CGt2dFontPCUs` = `CGt2dFont::GetStringWidth(const unsigned short *) const`.

## Notes

- The debug information drops `const` on pointer parameters (`lpString:P1093` with `1093=*1058`, plain
  `GtUTF16 *`); the mangled name keeps it. The export takes parameter types from the mangled name and names
  from the debug information when their counts agree.
- Anonymous structs and unions are defined inline in the member that uses them; the export writes them
  inline too (`union { … } uuid`). Their generated copy constructors (`$_168`) are left out.
- Typedef names are kept as written (`RwUInt32`, `RwReal`, `GtUTF16`).
- Line numbers are in the debug information as `$LM` labels; they are not exported yet.
- `.stab` (a separate, small section) holds the VU microcode sources (`*.dsm`) and their lines.
