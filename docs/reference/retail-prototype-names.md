<sub>[Home](../../README.md) › [Reference](README.md)</sub>

# Retail names from the prototype (SLUS-21050)

**5,054 functions in the NTSC-U retail executable named from the June 8, 2004 prototype's link map,
2,903 of them proven against the code.** Table:
[`prototype-names.csv`](../../data/burnout3-retail/prototype-names.csv).

These are Criterion's own names: the prototype map (`DNAT_200.MAP`) names the prototype's functions, and
each retail function was matched to its prototype function. Every name was then checked against the
code of both executables, separately from the matching that produced it. Each name carries the result in
its `proof` column, so a reader can tell a proven name from a likely one.

## How sure each name is

<!-- counts:start -->
| Proof | Names | What was shown |
|---|---:|---|
| proven: same code, unique | 2,258 | The retail and prototype functions are the same code, instruction for instruction, and that code occurs only once in each executable |
| proven: same code, same callers | 102 | The same code (not unique, e.g. a small getter), and a proven function calls it in both executables |
| proven: same place between proven functions | 543 | It sits between two proven functions, and the retail and prototype hold the same functions there in the same order (source files keep their function order) |
| **proven, total** | **2,903** | |
| strong | 1,196 | The code is at least 90% alike and the functions it calls have the same names |
| likely | 447 | At least 75% alike, same called functions |
| unverified | 508 | Rewritten between June and September 2004, calls that differ, or other gaps: check before relying on it |
| **total** | **5,054** | |
<!-- counts:end -->

"The same code" ignores only what has to move between builds: call targets (compared by the name of the
function called), jump targets, and the halves of absolute and `$gp`-relative addresses. Registers,
offsets, constants and branches must be identical.

Every address also begins a function in two independent analyses of the retail executable: a Ghidra
analysis and [burnout3-pc](https://github.com/danielgomesvieira2000/burnout3-pc)'s
`games/burnout3/config/functions.csv` (5,015 of the 5,054 in burnout3-pc's list).

**Control.** Pairing each retail function with a *wrong* prototype function of the same size passes the
same-code test 67 times in 4,880, all tiny generic functions. The "unique" and "same callers" conditions
exclude exactly those: if the code is unique in the prototype, no other prototype function has it.

## What the names do not prove

- **Signatures.** The names are the prototype map's, from June 2004. Some retail functions take other
  parameters: `CB3PlayerCarPhysics::DoCrashBreaker` reads an argument register in retail that its
  prototype doesn't, and the Burnout Revenge prototype has it as `DoCrashBreaker(float, bool)`. Treat the
  parameter list as the June 2004 one.
- **Functions added after June 2004** have no prototype name and are not in the table.
- **Rewritten functions.** "Unverified" names can be wrong. Example: the button mapping patch changes the
  Boost button inside the function at `0x0012F160`, which the prototype map's order calls
  `CB3ControllerMapping::GetCameraSwitch` and Nahelam calls `GetBoost`; the patch's behaviour fits
  Nahelam's name. `CB3ControllerMapping` was reworked between June and September 2004.
- **Cut-off names.** The prototype map shortens long names. 51 were recovered in full from the map's
  mangled symbols; 23 are still cut off and say so in the `note` column.

## Columns

| Column | Meaning |
|---|---|
| `us_address` | Start of the function in SLUS-21050 |
| `size` | Its size in bytes in SLUS-21050 (from a Ghidra analysis) |
| `name` | The prototype map's name (demangled) |
| `source_file` | The prototype's source file (object) for it |
| `proof` | See above |
| `prototype_map_address` | The function's address in `DNAT_200.MAP`, as used everywhere else on this site (class pages, `DNAT_200.symbols.csv`) |
| `prototype_elf_address` | The same function in the prototype executable `DNAT_200.45`: the map address plus its block's drift ([decompilation](../avenues/decompilation.md)) |
| `nahelam_name` | Nahelam's name at this address, where it differs ([check](retail-function-names.md#checked-against-the-code)) |
| `note` | `name cut off in the prototype map` where it still is |

All 5,054 map addresses check against [`DNAT_200.symbols.csv`](../../data/burnout3-prototype/maps/DNAT_200.symbols.csv):
5,003 have exactly that name there, and the 51 recovered names start with the map's cut-off text.

## Uses

- With the [Nahelam names](retail-function-names.md), this names most of the game: 5,054 of the about 8,400
  functions a Ghidra analysis finds in the retail executable.
- Every [class page](../classes/README.md) shows each method's retail address and proof level.
- The [retail memory map](retail-memory-map.md) and [Nahelam's mods](nahelam-mods.md) say which function each
  code address is in (`in_function`, from proven and strong names only). One correction this gave: the race
  timer store at `0x001D3D2C` is inside `CGtTimer::NextFrame`, not at the end of `CGtTimer::Construct`.
- What's next: the functions added after the prototype, and parameter lists checked against the retail code.
