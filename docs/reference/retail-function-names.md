<sub>[Home](../../README.md) › [Reference](README.md)</sub>

# Retail function names (SLUS-21050)

**1,146 named functions in the NTSC-U retail executable**, 863 of them checked against the executable's
code. These are the first function names for the stripped retail game. Table:
[`function-names.csv`](../../data/burnout3-retail/function-names.csv).

## Where the names come from

Nahelam published function names for the **PAL** retail release (SLES-52585), found with the Burnout 3
prototype map and the Burnout Revenge prototype's debug symbols
([`SLES_525.85.txt`](https://github.com/Nahelam/PS2-Game-Mods/blob/main/Burnout%203%20Takedown/Research/SLES_525.85.txt);
1,214 names; the author notes there may be mistakes). That list has no licence and is not copied here;
the US table is derived from it by [`tools/map_pal_names.py`](../../tools/map_pal_names.py).

The PAL and US executables turn out to have the same code layout, shifted in a few places:

| PAL address range | Shift to US |
|---|---|
| up to about `0x00131000` (start-up, libraries, early game code) | none |
| about `0x00131000`–`0x00162000` (frontend, profile, player car) | −0x10 |
| about `0x00162000`–`0x00265000` (traffic, physics, renderer, RenderWare, sound) | none |
| about `0x00265000`–`0x0030E000` (effects, sound managers, environment, traffic debug) | −0x70 to −0x80 |
| about `0x0030E000`–`0x00342000` (menu flow, prompts) | −0xB0 to −0x1E0 |
| about `0x00346000`–`0x003F4000` (online pages, 2D objects, stage logic, challenges) | −0x200 to −0x370 |
| about `0x003F6000` onwards (hard-coded lists, carousel, data) | −0x420 to −0x424 |

For each name, the tool takes the shift that puts the most of its 40 neighbours on function starts in
the US executable, then checks the name itself:

| Check | Names | Meaning |
|---|---:|---|
| function start | 863 | The US address begins a function (a stack-frame `addiu $sp,…` or the instruction after a `jr $ra`) |
| not verified | 283 | Named and shifted, but the address didn't pass the check; small leaf functions often fail it without being wrong |
| outside the US image | 68 | Data or BSS names beyond the executable's code |

## Confirmations

- **Nahelam's own US addresses:** his ELF Code Cave notes give `CB3TrafficVehicle::StartCrashing` at
  `0x00167D10`, `::Remove` at `0x00173D30` and `::Update` at `0x00186850` in SLUS-21050. The table puts all
  three exactly there.
- **The cheat codes:** the "drive through cars" code returns from `0x001B7220` straight away. That address
  is the start of **`CB3PhysicsManager::CollideAndRespondPair`**: the vehicle collision response. The race
  timer store at `0x001D3D2C` sits in `CGtTimer::Construct`.
- **The prototype:** Nahelam's list for the prototype executable (`DNAT_200.45.txt`, 982 names) matches
  921 names in the prototype map, with exactly the same address drift as measured from the map
  ([link map formats](../formats/codewarrior-maps.md)), which supports both lists.

## Using the table

- Every code address in the [retail memory map](retail-memory-map.md) and in [Nahelam's mods](nahelam-mods.md)
  now names the nearest function before it (`nearest_named_function_before` in the CSVs). The address
  can still sit in an unnamed function after it.
- With these anchors, more retail functions can be named by matching prototype functions between
  them (see [decompilation](../avenues/decompilation.md)).
- The 296 classes with named retail functions include `CB3PhysicsManager` (25), `CB3CarouselComponent`
  (23), `CB3Game` (19), `CB3InputManager` (16), `CB3StreamedTrack` (15), `CB3EnvironmentManager` (15),
  `CB3ControllerMapping` (14), `CB3TrafficSystem` (14) and `CB3GraphicsManager` (14).
