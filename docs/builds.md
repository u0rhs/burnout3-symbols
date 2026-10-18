<sub>[Home](../README.md)</sub>

# Builds

The builds this documentation is made from, and what each one provides. File hashes:
[reference/hashes.md](reference/hashes.md).

## At a glance

| | Burnout 2 prototype | Burnout 3 prototype | Burnout 3 retail |
|---|---|---|---|
| Executable | `SLUS_204.97` (19.1 MB) | `DNAT_200.45` (3.4 MB) | `SLUS_210.50` (4.1 MB) |
| Date | 29 July 2002 | 8 June 2004 (map linked 3 June) | final build 29 July 2004 |
| Source | [Hidden Palace](https://hiddenpalace.org/Burnout_2:_Point_of_Impact_(Jul_29,_2002_prototype)) | [Hidden Palace](https://hiddenpalace.org/Burnout_3:_Takedown_(Jun_8,_2004_prototype)) | retail disc |
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

## Burnout 3 prototype (8 June 2004)

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

## Burnout 3 review builds (20 July 2004)

Two review discs from nine days before the final US build. Both are documented here, but **neither has
symbols**: their executables are stripped exactly like retail (an empty symbol table, no debug sections,
and no class or function names anywhere in the binary), and they carry no link maps or assert files. The
only symbol table on either disc belongs to Sony's DNAS module (`NETWORK/DNAS_*.ELF`), not to the game.

| | US review (11:11) | PAL review (11:14) |
|---|---|---|
| Hidden Palace | [Jul 20, 2004 11.11 prototype](https://hiddenpalace.org/Burnout_3:_Takedown_(Jul_20,_2004_11.11_prototype)) | [Jul 20, 2004 11.14 prototype](https://hiddenpalace.org/Burnout_3:_Takedown_(Jul_20,_2004_11.14_prototype)) |
| Disc label | *Burnout 3 Takedown Print Reviews Only Alpha 1 07-18-2004* | *Reviewable 105263 PAL1EXT UK-0000000105263-089* |
| Executable | `SLUS_210.50`, 3,873,880 bytes, stripped | `SLES_525.84`, 3,873,624 bytes, stripped |
| Files | 791, dated up to 21 July 2004 | 831 |
| Compiler | MW MIPS C Compiler 2.4.1.01 | the same |
| Exports | [data/burnout3-review-us-2004-07-20](../data/burnout3-review-us-2004-07-20/README.md) | [data/burnout3-review-pal-2004-07-20](../data/burnout3-review-pal-2004-07-20/README.md) |

What they add:

- **The last nine days of tuning.** Their value databases are identical to each other, and **34 values
  changed between them and retail** ([value database](reference/value-database.md#across-the-builds)).
- **A stepping stone between prototype and retail.** The US review executable is the same program as
  retail, 200 KB smaller. Retail names do not carry over to it with the simple shift used for PAL
  (only about 180 of 851 check out), so naming it needs real function matching
  ([open questions](open-questions.md)).
- Strings with addresses and executable headers, like the other discs ([disc contents](discs.md)).

## Burnout 3 retail (NTSC-U, SLUS-21050)

- Fully stripped: no symbols, and a single program segment with no section headers separating code
  from data.
- PCSX2 identifies the executable by CRC `BEBF8793`.
- Names have to be carried over from the prototype ([decompilation](avenues/decompilation.md)).
- **1,146 retail functions are named** (851 verified), from Nahelam's PAL names: the PAL and US
  executables share their code layout with small shifts ([retail function names](reference/retail-function-names.md)).
- About 150 retail addresses are already known from cheat codes and PCSX2 patches: the save profile,
  race state, tuning values, display and HUD layout, controls and several code locations
  ([retail memory map](reference/retail-memory-map.md)).
  Nahelam's list covers the PAL release, SLES-52585 ([related resources](related-projects.md)).
- Exported here: the file list, strings with addresses, and the decoded value database.

## Provenance

All the prototypes are from [Hidden Palace](https://hiddenpalace.org).

| | Burnout 3 prototype | Burnout 3 US review | Burnout 3 PAL review | Burnout 2 prototype |
|---|---|---|---|---|
| Hidden Palace page | [Jun 8, 2004 prototype](https://hiddenpalace.org/Burnout_3:_Takedown_(Jun_8,_2004_prototype)) | [Jul 20, 2004 11.11 prototype](https://hiddenpalace.org/Burnout_3:_Takedown_(Jul_20,_2004_11.11_prototype)) | [Jul 20, 2004 11.14 prototype](https://hiddenpalace.org/Burnout_3:_Takedown_(Jul_20,_2004_11.14_prototype)) | [Jul 29, 2002 prototype](https://hiddenpalace.org/Burnout_2:_Point_of_Impact_(Jul_29,_2002_prototype)) |
| Build | 8 June 2004, 18:20:40, "Preview" | 20 July 2004, 11:11:00, "Review" | 20 July 2004, 11:14:24, "Alpha 1" | 29 July 2002, "Preview" |
| Disc label | *For Preview Only Pre-Alpha 1 6-07-2004* | *Print Reviews Only Alpha 1 07-18-2004* | *Reviewable 105263 PAL1EXT* | *Burnout 2 For Preview Only 29-7-02* |
| Released | 20 March 2021, Project Deluge (research by Nex; anonymous donor) | 20 March 2021, Project Deluge (research by ehw and Zoda-Y13; anonymous donor) | 15 August 2020, by Daniel B | 22 December 2023, by Daniel B |
| Media | CD-R (CloneCD) | DVD-R (CloneCD) | DVD-R | DVD-R |
| Image SHA-1 | `308f9dbd37e881be3c7a5cab5fc722a6c1ace6e0` | `ef7a1a5352af4fee365efe239528aa74e1ef0e0d` | `d2a00949c411ace54b673fae12abdefed7fe8aeb` | not hashed |
| Matches Hidden Palace | yes | yes | Hidden Palace lists no hash | — |
| Used for | **all the Burnout 3 symbols**: the four link maps and two assert files | disc listing, strings, value database | disc listing, strings, value database | symbols and debug information |

**Verified:** the Jun 8 disc image's SHA-1 matches Hidden Palace's, and its `DNAT_200.45`, all four maps,
both assert files, `SYSTEM.CNF` and `VALUEDB/VDB.XML` are byte-identical to the files this repository's
exports were made from. Hidden Palace's own notes on that build describe the map file and "leftovers from
removed .elf files from internal and debug builds". Their notes on the Burnout 2 build: "Executable
contains Symbols." All hashes: [reference/hashes.md](reference/hashes.md).

## How they relate

```
Burnout 2 prototype ──(types, layouts, parameter names, source structure)──▶ hints for Burnout 3 classes
Burnout 3 prototype ──(names and addresses from four maps)──▶ carried over to ──▶ Burnout 3 retail
Burnout 3 review builds (20 July) ──(no symbols; 34 tuning values from final)──▶ Burnout 3 retail
```

- **Burnout 2 → 3:** 62 Burnout 3 classes have a likely Burnout 2 ancestor
  ([class ancestors](reference/class-ancestors.md)); 704 functions have a Burnout 2 counterpart
  ([function lineage](reference/function-lineage.md)). Expect fields added and moved.
- **Prototype → retail:** about six weeks apart. Most functions survive; retail has about 0.7 MB more
  code and data, and 1,949 of the 3,045 shared tuning values changed.
