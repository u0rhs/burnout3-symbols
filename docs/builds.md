<sub>[Home](../README.md)</sub>

# Builds

The three builds this documentation is made from, and what each one provides. File hashes:
[reference/hashes.md](reference/hashes.md).

## At a glance

| | Burnout 2 prototype | Burnout 3 prototype | Burnout 3 retail |
|---|---|---|---|
| Executable | `SLUS_204.97` (19.1 MB) | `DNAT_200.45` (3.4 MB) | `SLUS_210.50` (4.1 MB) |
| Date | 29 July 2002 | linked June 2004; disc dated 20 July 2004 | files dated up to 29 July 2004 |
| Compiler | MW MIPS C Compiler 2.4.1.01 | the same | the same |
| Symbols | **full symbol table** (12,023) | stripped; **four link maps** | stripped |
| Debug info | **DWARF 1**: types, parameters, locals, lines | assert strings of two debug builds | none |
| Code and data loaded | 2.1 MB | 3.4 MB | 4.1 MB |
| Region | NTSC-U (`SLUS-20497`) | NTSC, nine-language menu | NTSC-U (`SLUS-21050`) |
| Exports | [data/burnout2-prototype](../data/burnout2-prototype/README.md) | [data/burnout3-prototype](../data/burnout3-prototype/README.md) | [data/burnout3-retail](../data/burnout3-retail/README.md) |

All three were built with the same compiler. Shared code (RenderWare, Criterion's libraries) therefore
compiles to nearly identical bytes, which helps match functions across builds; and a matching
decompilation needs exactly that compiler.

## Burnout 2 prototype (29 July 2002)

- A preview build (`Burnout 2 For Preview Only 29-7-02.iso`).
- `SLUS_204.97` keeps its symbol table, DWARF 1 debug information, line tables and relocations
  (`.relmain`). It is the only build with **types**.
- 289 source files under `I:\Burnout 2 Code\gamesource\` (`Game`, `Hud`, `Menu`, `Physics`, `Race`,
  `Render`, `Sound`, `Toolkits`), plus `GameShared` and RenderWare.
- IOP modules with debug info: Criterion's streaming (`B2STREAM`), file system (`GTFS*`), i.LINK
  (`B2ILINK`) and `B2DIST`; text link maps of three of them.
- **Use for Burnout 3:** class layouts, enums, parameter names and source structure of the code that
  Burnout 3 grew from ([class ancestors](reference/class-ancestors.md),
  [function lineage](reference/function-lineage.md)), and RenderWare's types and signatures
  ([RenderWare API](reference/renderware-api.md)).

## Burnout 3 prototype (June 2004)

- Boots `DNAT_200.45` (`SYSTEM.CNF`) and shows a language menu (`MESSAGE.TXT`: Japanese, English,
  French, Italian, Spanish, German, Portuguese, Dutch, Korean). Contains demo-disc code, the online
  modes and debug managers.
- The executable is stripped, but the disc has:
  - `DNAT_200.MAP`: the text link map, linked 3 June 2004. **Six days older than the executable**, so
    game-code addresses drift by up to −0xCE40; libraries match ([format](formats/codewarrior-maps.md)).
  - `B3DEBUG.MAP` (9 June), `B3INTERN.MAP` (2 June), `B3O0PCH.MAP` (9 June): binary maps of builds whose
    executables are not on the disc.
  - `B3DEBUG.AST`, `B3INTERN.AST`: assert expressions of the debug builds.
  - `VALUEDB/VDB.XML`: the tuning database ([value database](reference/value-database.md)).
- 595 game source files (`B3*.cpp`, `Gt*.cpp`), 890 classes with methods, 312 vtables, 22 VU microcode programs (plus RenderWare's own).
- IOP modules with symbols; `B3ROUTE.IRX` and `RWSCOMMS.IRX` with debug info.
  `B3ROUTE.IRX`'s debug info gives Burnout 3's source tree root: `projects\CG1Code\GameSource\`
  (its own file is `Sound\IOP\b3distrouter\`). `RWSCOMMS.IRX` is RenderWare Studio's console comms
  server (`RWStudio\console\…\commsserver\psx`).

## Burnout 3 retail (NTSC-U, SLUS-21050)

- Fully stripped: no symbols, and a single program segment with no section headers separating code
  from data.
- PCSX2 identifies the executable by CRC `BEBF8793`.
- Names have to be carried over from the prototype ([decompilation](avenues/decompilation.md)).
- About 150 retail addresses are already known from cheat codes and PCSX2 patches: the save profile,
  race state, tuning values, display and HUD layout, controls and several code locations
  ([retail memory map](reference/retail-memory-map.md)).
  Nahelam's list covers the PAL release, SLES-52585 ([related resources](related-projects.md)).
- Exported here: the file list, strings with addresses, and the decoded value database.

## How they relate

```
Burnout 2 prototype ──(types, layouts, parameter names, source structure)──▶ hints for Burnout 3 classes
Burnout 3 prototype ──(names and addresses from four maps)──▶ carried over to ──▶ Burnout 3 retail
```

- **Burnout 2 → 3:** 62 Burnout 3 classes have a likely Burnout 2 ancestor
  ([class ancestors](reference/class-ancestors.md)); 704 functions have a Burnout 2 counterpart
  ([function lineage](reference/function-lineage.md)). Expect fields added and moved.
- **Prototype → retail:** about six weeks apart. Most functions survive; retail has about 0.7 MB more
  code and data, and 1,949 of the 3,045 shared tuning values changed.
