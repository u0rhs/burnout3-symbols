<sub>[Home](../../README.md) › [Reference](README.md)</sub>

# Retail function names (SLUS-21050)

**1,146 named functions in the NTSC-U retail executable**, 851 of them checked against the executable's
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

<!-- counts:start -->
| Check | Names | Meaning |
|---|---:|---|
| function start | 851 | The US address begins a function: a stack-frame `addiu $sp,…`, or the first instruction after a `jr $ra` and its delay slot |
| not verified | 295 | Named and shifted, but the address didn't pass the check; small leaf functions often fail it without being wrong |
| outside the US image | 68 | Data or BSS names beyond the executable's code |
| **total** | **1214** | |
<!-- counts:end -->

## Confirmations

- **Nahelam's own US addresses:** his ELF Code Cave notes give `CB3TrafficVehicle::StartCrashing` at
  `0x00167D10`, `::Remove` at `0x00173D30` and `::Update` at `0x00186850` in SLUS-21050. The table puts all
  three exactly there.
- **The cheat codes:** the "drive through cars" code returns from `0x001B7220` straight away. That address
  is the start of **`CB3PhysicsManager::CollideAndRespondPair`**: the vehicle collision response. The race
  timer store at `0x001D3D2C` sits in `CGtTimer::Construct`.
- **burnout3-pc's own function list:** 835 of the 851 verified names land exactly on a function start that
  [burnout3-pc](https://github.com/danielgomesvieira2000/burnout3-pc) found with its own analysis of
  SLUS-21050 (`games/burnout3/config/functions.csv`), and 1,030 of all 1,146.
- **The prototype:** Nahelam's list for the prototype executable (`DNAT_200.45.txt`, 982 names) matches
  921 names in the prototype map, with exactly the same address drift as measured from the map
  ([link map formats](../formats/codewarrior-maps.md)), which supports both lists.

## Checked against the code

Each of these names was also tested against the code of the retail and prototype executables, the same
way as the [prototype names](retail-prototype-names.md). Table:
[`function-names-check.csv`](../../data/burnout3-retail/function-names-check.csv) (`code_check` column).

<!-- check:start -->
| Result | Names |
|---|---:|
| Agrees with the prototype map's name | 627 |
| Same function; the prototype map gives another parameter list | 33 |
| The prototype map names this function differently (e.g. `Render` where the map says `_Render`) | 20 |
| A different function; the code matches the prototype map's name | 9 |
| A different function; open | 7 |
| One function off: the prototype map puts the name at a neighbouring address (the PAL to US shift) | 52 |
| Not in the prototype table; proven against its prototype function | 6 |
| Not in the prototype table; the prototype has the name, not proven | 201 |
| No prototype counterpart (e.g. names from the Burnout Revenge prototype) | 191 |
| **total** | **1,146** |
<!-- check:end -->

The 9 that the code settles: `0x00113B50` is `sceSifUnloadModule` (not `sceSifSearchModuleByAddress`),
`0x0011DE98` `cosf` (not `ceilf`), `0x0020E310` `RpSkyTexCacheGetStartAddress`, `0x002139A0`
`CGtUnicode::CopyN`, `0x00250100` `GtComms::CGtCommsDatabaseGame::RemoveEntryCore`, `0x00297930`
`_rwaVirtualVoiceSetWave`, `0x00369440` `CB3ScoreBonus::Release`, `0x00375450`
`CB3NetworkReplayBodyMessage::Prepare`, `0x0038AD80` `CB3PromptBarComponent::Prepare`. In each, the
prototype's function is the same code as the retail one, or far closer to it than the function Nahelam's
name belongs to.

Parameter lists can legitimately differ: the prototype is from June 2004, and some of Nahelam's names come
from the 2005 Burnout Revenge prototype, so either can be the retail one.

## Using the table

- Every code address in the [retail memory map](retail-memory-map.md) and in [Nahelam's mods](nahelam-mods.md)
  now names the nearest function before it (`nearest_named_function_before` in the CSVs). The address
  can still sit in an unnamed function after it.
- With these anchors, more retail functions can be named by matching prototype functions between
  them (see [decompilation](../avenues/decompilation.md)).
- The 296 classes with named retail functions include `CB3PhysicsManager` (25), `CB3CarouselComponent`
  (23), `CB3Game` (19), `CB3InputManager` (16), `CB3StreamedTrack` (15), `CB3EnvironmentManager` (15),
  `CB3ControllerMapping` (14), `CB3TrafficSystem` (14) and `CB3GraphicsManager` (14).
