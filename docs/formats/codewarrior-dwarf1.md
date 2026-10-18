<sub>[Home](../../README.md) › [Formats](README.md)</sub>

# CodeWarrior PS2 DWARF 1

How the Burnout 2 prototype's debug information is laid out, as worked out from `SLUS_204.97` and read
by [`tools/dwarf1.py`](../../tools/dwarf1.py). DWARF 1 is the 1992 version of DWARF. GCC dropped it
long ago, and `llvm-dwarfdump`, `readelf --debug-dump` and Ghidra's DWARF importer only read DWARF 2 and
later, so reading it takes this reader or one like it.

## Sections

| Section | ELF type | Contents |
|---|---|---|
| `.debug` | `0x70000005` (`SHT_MIPS_DWARF`) | The debugging entries (15.3 MB in B2) |
| `.line` | `0x70000005` | Line-number tables, one per compile unit (806 KB) |
| `.mwcats` | `0xCA2A82C2` | Metrowerks' own tables (9 KB), not decoded |
| `.symtab` / `.strtab` | standard | Normal ELF symbols with mangled C++ names |

Everything is little-endian.

## Entries

`.debug` is a flat list of entries:

```
u32 length          length < 8: a null entry (pads, or ends a list of children); skip `length` bytes (min 4)
u16 tag
attributes until offset + length:
    u16 name        attribute number << 4 | form
    value           its size depends on the form
```

| Form (low 4 bits) | Value |
|---|---|
| `1` ADDR | u32 address |
| `2` REF | u32 offset of another entry in `.debug` |
| `3` BLOCK2 | u16 length + bytes |
| `4` BLOCK4 | u32 length + bytes |
| `5` DATA2 | u16 |
| `6` DATA4 | u32 |
| `7` DATA8 | u64 |
| `8` STRING | NUL-terminated |

**Tree:** every entry carries `AT_sibling` (`0x0012`), the offset of the next entry at its level. If
the sibling is further away than the next entry, the entries in between are its children; a null entry
ends each child list. Compile units are the top level.

## Tags seen

| Tag | Name | Count in B2 | Notes |
|---|---|---:|---|
| `0x0011` | compile_unit | 2,591 | For 289 source files: CodeWarrior writes several units per file |
| `0x0002` | class_type | 22,950 | Repeated in every unit that includes the header |
| `0x0013` | structure_type | 3,131 | |
| `0x0017` | union_type | 150 | |
| `0x0004` | enumeration_type | 6,018 | Values in `AT_element_list` |
| `0x000d` | member | 206,901 | Data members only |
| `0x001c` | inheritance | 1,367 | Base class, with its offset |
| `0x0001` | array_type | 24,833 | |
| `0x0015` | subroutine_type | 3,568 | Function pointer types; parameters as children |
| `0x0006` | global_subroutine | 1,877 | Functions with external linkage |
| `0x0014` | subroutine | 432 | `static` functions |
| `0x0005` | formal_parameter | 11,934 | |
| `0x000c` | local_variable | 15,998 | Also used at unit level for file statics |
| `0x0007` | global_variable | 2,117 | |
| `0x000b` | lexical_block | 2,309 | Scopes inside functions |

**Not present:** typedefs (`0x0016`), and member functions inside classes. Methods only show up as
functions with a mangled name (below).

## Attributes seen

| Attribute | Form | Meaning |
|---|---|---|
| `0x0012` sibling | REF | Next entry at this level |
| `0x0023` location | BLOCK2 | Location expression (below) |
| `0x0038` name | STRING | |
| `0x0055` fund_type | DATA2 | A fundamental type (table below) |
| `0x0063` mod_fund_type | BLOCK2 | Modifier bytes, then a u16 fundamental type |
| `0x0072` user_def_type | REF | A class, struct, enum, array or function type |
| `0x0083` mod_u_d_type | BLOCK2 | Modifier bytes, then a u32 REF |
| `0x0095` ordering | DATA2 | Array ordering |
| `0x00a3` subscr_data | BLOCK2 | Array dimensions (below) |
| `0x00b6` byte_size | DATA4 | |
| `0x00c5` / `0x00d6` | DATA2 | bit_offset / bit_size of a bit-field member |
| `0x00f4` element_list | BLOCK4 | Enum values: `i32 value, NUL-terminated name`, repeated, in source order |
| `0x0106` stmt_list | DATA4 | Offset of the unit's table in `.line` |
| `0x0111` / `0x0121` | ADDR | low_pc / high_pc of a unit, function or block |
| `0x0136` language | DATA4 | 2 = C, 4 = C++ |
| `0x0258` producer | STRING | `MW MIPS C Compiler` |
| `0x0288` | STRING | On inheritance entries, always empty; probably "public" |
| `0x02a3` return_addr | BLOCK2 | Where `$ra` was saved |
| **`0x2008`** | STRING | **Metrowerks: the mangled linker name.** On functions and globals. This is what gives a function's class |
| `0x2013`, `0x2043`–`0x2173` | BLOCK2 | Metrowerks: probably where each saved register lives (one attribute per register). Not decoded |
| `0x2303` | BLOCK2 (4 bytes) | Metrowerks, on functions. Not decoded |

## Types

**Modifiers** in `mod_fund_type` / `mod_u_d_type`: `01` pointer to, `02` reference to (`03` const and
`04` volatile exist in the format, but CodeWarrior never wrote them). They read left to right in
English: `01 01` + `char` is a pointer to a pointer to char.

**Fundamental types:**

| Code | Type | Code | Type |
|---|---|---|---|
| `0x0001` | char | `0x0009` | unsigned int |
| `0x0002` | signed char | `0x000b` | long |
| `0x0003` | unsigned char | `0x000c` | unsigned long |
| `0x0005` | short | `0x000e` | float |
| `0x0006` | unsigned short | `0x0014` | void |
| `0x0008` | int | `0x8108` | long long |
| **`0xa510`** | **u_long128** (Metrowerks; the EE's 128-bit integer, used for GIF tags and DMA packets) | `0x8208` | unsigned long long |

There is no `bool`: the C++ code's `bool`s appear as `int` or `unsigned char`, as stored.

**Arrays (`subscr_data`):** a list of items, each starting with a format byte. `0x00`–`0x07` are a
dimension: index type (u16 fundamental for formats 0–3, u32 REF for 4–7), then low and high bound, each
a 4-byte constant (or a location block when the format says so). `0x08` is followed by the element type
as one attribute (name + value). Example: `00 0a00 00000000 05000000 08 5500 0600` is
`unsigned short [6]`.

## Locations

A location is a small stack program:

| Op | Operand | Meaning |
|---|---|---|
| `0x01` REG | u32 | The value is in this register |
| `0x02` BASEREG | u32 | Push the contents of this register (used as `$sp` + offset) |
| `0x03` ADDR | u32 | Push an address |
| `0x04` CONST | u32 | Push a constant |
| `0x07` ADD | none | Add the top two |

So a member is `04 <offset> 07` (constant offset from the object), a global is `03 <address>`, a local
in a register is `01 <reg>`, and one on the stack is `02 29 04 <offset> 07`. Register numbers are MIPS
(`0`–`31`: `zero` … `ra`, `29` = `$sp`); 32 and up are probably the FPU registers. File statics that
the linker dropped have address 0.

## Line numbers (`.line`)

Per compile unit, at its `stmt_list` offset:

```
u32 length (including this header)
u32 base address
entries of 10 bytes: u32 line, u16 column (always 0xFFFF here), u32 address delta from the base
```

The B2 executable has 76,449 entries.

## Things not worked out

- The Metrowerks register attributes `0x2013`–`0x2173` and `0x2303`. Decoding them would give each
  function's stack frame layout.
- `.mwcats`.
