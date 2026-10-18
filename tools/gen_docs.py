"""Generate the data-driven pages of docs/: one page per game system, the class lineage table and the hashes.

    python3 tools/gen_docs.py            (from the repository root)

Hand-written pages in docs/ are left alone; this only rewrites docs/systems/ and docs/reference/.
Re-run it after re-exporting the data.
"""
import csv
import os
import re
import urllib.parse
from collections import defaultdict, Counter

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
B2 = os.path.join(ROOT, 'data', 'burnout2-prototype', 'SLUS_204.97')
B3 = os.path.join(ROOT, 'data', 'burnout3-prototype', 'maps')
DOCS = os.path.join(ROOT, 'docs')
MAPS = ['DNAT_200', 'B3DEBUG', 'B3INTERN', 'B3O0PCH']

# (slug, title, B3 source-file pattern, B2 outline folders/patterns, what the area covers)
SYSTEMS = [
    ('network-online', 'Network and online', r'^B3Network|^B3Online|^B3DemoOnline|CreateAccount|^B3DNAS|^B3Buddy|^B3Chat|'
     r'^B3SharedLogin|VoIP|^Gt(Network|Lobby|Buddies|NATData|PS2LibNet|Headset|LogitechHeadset|SyncTime|Comms)',
     [], 'Online play over the PS2 network adaptor: EA\'s lobby (DirtySock), buddies, accounts, rankings, '
         'the network messages the race sends, voice chat, and the online versions of each game mode.'),
    ('demo-builds', 'Demo-disc code', r'^B3Demo|^B3MSDemo|^B3OPMDemo|^B3CrashDemo', [],
     'Code for the magazine and kiosk demo versions (title screen, attract loop, restricted menus, '
     'the NFSU2 and marketing videos). Linked into the prototype, so it may also be in retail.'),
    ('audio', 'Audio and music', r'^B3Sound|^GtSound', [r'Sound/', r'rwaudio/'],
     'Engine, skid, scrape, traffic and crash sounds, Doppler and the listener, the sound banks and voices, '
     'streamed music: EA Trax, the radio, playlists and the custom soundtrack.'),
    ('hud', 'HUD', r'^B3HUD', [r'Hud/'],
     'Everything drawn over the race: speedometer, boost bar, position, lap and timers, takedown counter, '
     'crash score and combo, messages.'),
    ('ui-2d', '2D graphics and UI toolkit', r'^Gt2d|2dObject$|^B32dObject', [r'Render/2d/'],
     'Criterion\'s 2D scene system that menus and the HUD are built from: fonts, text, images, panels, '
     'boxes, tables, vignettes, video images.'),
    ('frontend', 'Frontend and menus', r'Page$|State$|Component$|^B3Menu|^B3FrontEnd|^B3Strings|^B3MyBurnout|'
     r'^B3PlayVideo|^B3SplashScreen', [r'Menu/'],
     'The menu screens and their flow: each screen is a Page (what is drawn) plus a State (the logic), '
     'driven by a menu state machine. Car, track and event select, My Burnout, settings, rewards, results.'),
    ('rendering', 'Rendering', r'Renderer|Render(PS2)?$|^B3Bloom|Blur|^B3Fog|^B3Im3D|^B3GraphicsManager|'
     r'TextureCache|^GtTexture|^B3TextureCollection|^B3Shadows|^B3TrackMaterial|^B3VehicleReflectivity|'
     r'^B3Viewport|^GtViewport|^GtCameraFrustum|^GtFrustum|^GtWideLine|^B3DebugMipMaps|^GtScreenCentre',
     [r'Render/(?!2d)'],
     'The PS2-side drawing: track, vehicle, sky, sun, coronas, particles, sparks, debris, shadows, trails '
     'and scrapes; bloom, blur and fog; textures and the texture cache. Most of these hand work to the '
     'VU1 microcode listed in the renderer overview.'),
    ('vehicles-physics', 'Vehicles, physics and collision', r'Physics|ConvexHull|^B3CollidingBody|^B3BoundingBox|'
     r'^B3Transmission|^B3VehicleDeform|^B3BodyPart|^B3RumbleAttribs|^GtCollision|^GtIntersection|'
     r'^GtSphereTree|^GtPolygonSoup|^GtSimpleOrientedBox|^B3RaceCar$|^B3PlayerCar$|^B3NetworkCar$',
     [r'Physics/'],
     'Car handling, suspension, wheels, transmission, deformation and parts coming off, collision shapes '
     'and world collision, props.'),
    ('ai', 'AI drivers', r'^B3AI', [r'AI'],
     'The rival drivers: their driving, lanes, avoidance, aggression and target selection.'),
    ('traffic', 'Traffic', r'^B3Traffic|^B3StopJunction', [r'Traffic'],
     'The civilian traffic: lanes, junctions and lights, valves and splitters that spawn vehicles, '
     'traffic physics and loading.'),
    ('crash-scoring', 'Crashes, takedowns and scoring', r'^(?!B3PlayerCamera)\w*Crash(?!.*(Page|State)$)|Takedown|^B3Burn$|'
     r'^B3Score|^B3Explosion|^B3Challenge|Challenge$|^B3Records$',
     [r'Crash', r'Score', r'Burn'],
     'Crash mode (pickups, ramps, the crash camera and presentation directors, crash analysis), takedowns, '
     'boost (Burn), scores, bonuses and challenges.'),
    ('cameras-replay', 'Cameras and replays', r'Camera|Behaviour|Replay', [r'Camera', r'Replay', r'Ghost'],
     'The player cameras (in-game, intro, crash, replay, debug) and the behaviours that move them, '
     'and the replay system.'),
    ('game-flow', 'Game flow, modes and race logic', r'^B3Game|GameMode|Stage|Logic$|^B3Player$|^B3RacePosition|'
     r'^B3StartPoint|^B3StartFinish|^B3SplitTime|^B3WrongWay|^B3SpatialTrigger|^B3World|^B3EndOfRace|'
     r'^B3EventState|^B3Settings$', [r'Game/', r'Race/'],
     'How a session runs: the game object, its modes and stages (one player, split screen, online), the '
     'logic class for each event type (race, Road Rage, Burning Lap, Eliminator, Crash), race positions, '
     'checkpoints and the world.'),
    ('progression-saves', 'Progression, profiles and saves', r'Profile|Progression|^B3Records|MemoryCard|'
     r'AutoSave|^B3HardCoded|^B3Award|^GTMemoryDevice', [r'Profile', r'Championship', r'Records', r'Progression'],
     'The World Tour, unlocks and rewards, records, the profile and memory card saving, and the hard-coded '
     'lists of tracks, events, vehicles, cheats, trophies and headlines.'),
    ('tracks-streaming', 'Tracks, world and streaming', r'Track|Stream|^B3Environment|^B3PropManager|'
     r'^B3AsyncDataLoader|^B3DataLists|^GtFileSystem|^GtVideoDecoder', [r'Toolkits/', r'GameShared/'],
     'Loading and streaming the tracks around the car, static and streamed track data and collision, '
     'environments (weather, time of day), props, the DVD file system and video playback.'),
    ('effects', 'Effects', r'Effect|^B3Scrape|^B3Trail|^B3Explosion', [r'Effect'],
     'Effect management: boost effects, scrapes and trails (their rendering is in Rendering).'),
    ('core-platform', 'Core, memory, input and platform', r'.', [],
     'Startup, memory managers, input devices and controller mapping, timers, threads, containers, '
     'hashing, debugging and performance monitors, and the PS2 runtime glue.'),
]


# systems that the retail memory map has addresses for
RETAIL_MAP_SECTIONS = {
    'progression-saves': 'the save profile: medals, trophies, signature takedowns, headlines, garage, unlocks',
    'game-flow': 'the simulation time step, lap, score',
    'crash-scoring': 'crash tuning values, Crash Breaker code, score',
    'cameras-replay': 'the chase camera distance, crash camera border, replay bars',
    'core-platform': 'pad 1 buttons and the button mapping code',
    'hud': 'HUD position, width and corners, the HUD render code',
    'frontend': 'menu layout, borders, loading screen, car select overlay',
    'ui-2d': 'the 2D layout values the widescreen patch changes',
    'vehicles-physics': 'the selected vehicle ID, collision code, boost values',
    'rendering': 'field of view and aspect ratio, the widescreen flag',
    'tracks-streaming': 'the frontend globe',
}


def link(path, frm):
    rel = os.path.relpath(path, frm)
    return urllib.parse.quote(rel.replace(os.sep, '/'))


def class_of(name):
    head = name.split('(', 1)[0]
    depth, cut = 0, -1
    for i, ch in enumerate(head):
        if ch == '<':
            depth += 1
        elif ch == '>':
            depth -= 1
        elif depth == 0 and head[i:i + 2] == '::':
            cut = i
    return head[:cut] if cut > 0 else None


def load_maps():
    funcs = {}   # map -> list of rows
    for m in MAPS:
        rows = []
        for r in csv.DictReader(open(os.path.join(B3, m + '.symbols.csv'))):
            if r['section'] in ('.text', '.init') and int(r['size']) > 0 and not r['name'].startswith('.'):
                rows.append(r)
        funcs[m] = rows
    return funcs


def load_b2_types():
    t = open(os.path.join(B2, 'types.h')).read()
    out = {}
    for m in re.finditer(r'// declared in (\d+) file\(s\), e\.g\. (.*?)(?:  // VARIANT.*)?\n(class|struct|union) (\w+)[^\n]*// size (0x[0-9A-F]+)', t):
        out.setdefault(m[4], dict(size=m[5], file=m[2], kind=m[3]))
    return out


def b2_name(cls):
    # CB3VehiclePhysics -> CVehiclePhysics; CGtFoo -> CGtFoo / CFoo
    cands = []
    if cls.startswith('CB3'):
        cands.append('C' + cls[3:])
    cands.append(cls)
    if cls.startswith('CGt'):
        cands.append('C' + cls[3:])
    return cands


def main():
    funcs = load_maps()
    b2types = load_b2_types()

    # object -> system
    objs = Counter()
    size = Counter()
    first = {}
    lib_of = {}
    for r in funcs['DNAT_200']:
        o = r['object']
        objs[o] += 1
        size[o] += int(r['size'])
        a = int(r['address'], 16)
        first[o] = min(first.get(o, a), a)
        lib_of[o] = r['library']
    sys_of = {}
    for o in objs:
        base = re.sub(r'\.(cpp|c|s|obj|o)$', '', o)
        if lib_of[o]:
            sys_of[o] = 'libraries'
            continue
        for slug, title, pat, _, _ in SYSTEMS:
            if re.search(pat, base):
                sys_of[o] = slug
                break

    # class -> methods per map, and its home object (where most of its DNAT methods are)
    methods = defaultdict(lambda: defaultdict(dict))
    home_votes = defaultdict(Counter)
    for m in MAPS:
        for r in funcs[m]:
            c = class_of(r['name'])
            if not c:
                continue
            methods[c][r['name']][m] = int(r['address'], 16)
            if r['object'] and r['object'] != '(object unknown)':
                home_votes[c][r['object']] += 3 if m == 'DNAT_200' else 1
    home = {c: v.most_common(1)[0][0] for c, v in home_votes.items() if v}

    os.makedirs(os.path.join(DOCS, 'systems'), exist_ok=True)
    os.makedirs(os.path.join(DOCS, 'reference'), exist_ok=True)
    sysdir = os.path.join(DOCS, 'systems')
    b2_outline = os.path.join(B2, 'source_outline')
    b2_files = []
    for dp, dn, fn in os.walk(b2_outline):
        for f in fn:
            b2_files.append(os.path.join(dp, f))

    index_rows = []
    for slug, title, pat, b2pats, about in SYSTEMS:
        files = sorted([o for o in objs if sys_of.get(o) == slug], key=lambda o: first[o])
        classes = sorted([c for c in methods if home.get(c) in files],
                         key=lambda c: (files.index(home[c]), c.lower()))
        nfunc = sum(objs[o] for o in files)
        nbytes = sum(size[o] for o in files)
        index_rows.append((slug, title, len(files), len(classes), nfunc, nbytes))
        p = os.path.join(sysdir, slug + '.md')
        L = ['# %s' % title, '',
             '> Generated by `tools/gen_docs.py` from the Burnout 3 prototype maps and the Burnout 2 debug info. '
             'Re-running it rewrites everything except the [Notes](#notes) section at the bottom, which is kept.', '',
             about, '',
             ] + (['**Retail addresses:** the [retail memory map](../reference/retail-memory-map.md) has %s.'
                   % RETAIL_MAP_SECTIONS[slug], ''] if slug in RETAIL_MAP_SECTIONS else []) + [
             '**In the B3 prototype (DNAT_200 build):** %d source files, %d classes with methods, %d functions, '
             '%s bytes of code.' % (len(files), len(classes), nfunc, format(nbytes, ',')), '']
        L += ['## Source files', '',
              'In link order, with addresses in the DNAT_200 build. Full symbol lists: '
              '[DNAT_200.symbols.txt](%s) (search for `==== <file>`).' %
              link(os.path.join(B3, 'DNAT_200.symbols.txt'), sysdir), '',
              '| File | Functions | Code bytes | First function |', '|---|---:|---:|---|']
        for o in files:
            L.append('| `%s` | %d | %s | `0x%08X` |' % (o, objs[o], format(size[o], ','), first[o]))
        L += ['', '## Classes', '',
              'Each class with its method count, its probable Burnout 2 counterpart (same name without `B3`) '
              'and that class\'s size there. Method addresses for all four builds are in '
              '[classes.txt](%s); open a list below for the DNAT_200 addresses.' %
              link(os.path.join(B3, 'classes.txt'), sysdir), '']
        lineage = []
        for c in classes:
            ms = methods[c]
            b2 = next((n for n in b2_name(c) if n in b2types), None)
            b2txt = (' · B2: `%s` (size %s, %s)' % (b2, b2types[b2]['size'], b2types[b2]['file'].replace('\\', '/'))
                     if b2 else '')
            if b2:
                lineage.append((c, b2))
            L.append('<details><summary><code>%s</code>: %d methods, in %s%s</summary>' % (
                c, len(ms), home[c], b2txt.replace('`', '')))
            L.append('')
            for name in sorted(ms, key=lambda n: ms[n].get('DNAT_200', 0xFFFFFFFF)):
                a = ms[name].get('DNAT_200')
                only = '' if a is not None else '  (not in DNAT_200; in %s)' % ', '.join(ms[name])
                L.append('- `%s` %s%s' % ('0x%08X' % a if a is not None else '----------', name.replace('|', '\\|'), only))
            L += ['', '</details>', '']
        b2match = sorted(f for f in b2_files if any(re.search(bp, f.replace(os.sep, '/')) for bp in b2pats))
        L += ['## Burnout 2 counterparts', '']
        if b2match:
            L.append('Source outlines of the Burnout 2 prototype in the same area (types, functions, parameters, '
                     'locals, lines):')
            L.append('')
            for f in b2match:
                L.append('- [%s](%s)' % (os.path.relpath(f, b2_outline).replace(os.sep, '/'), link(f, sysdir)))
        else:
            L.append('No matching Burnout 2 source files (new in Burnout 3, or named differently).')
        notes = '\n_Findings go here._\n'
        if os.path.exists(p):
            old = open(p).read()
            if '\n## Notes\n' in old:
                notes = old.split('\n## Notes\n', 1)[1]
        L += ['', '## Notes']
        with open(p, 'w') as fh:
            fh.write('\n'.join(L) + '\n' + notes)

    # libraries
    libs = defaultdict(lambda: [0, 0])
    for o in objs:
        if sys_of.get(o) == 'libraries':
            libs[lib_of[o]][0] += objs[o]
            libs[lib_of[o]][1] += size[o]
    with open(os.path.join(sysdir, 'libraries.md'), 'w') as fh:
        fh.write('# Libraries linked into Burnout 3\n\n> Generated by `tools/gen_docs.py`.\n\n'
                 'Code from libraries rather than Criterion\'s game source, in the DNAT_200 build: RenderWare '
                 '(`librw*`, `librwa*` for audio), Sony\'s SDK (`lib*`), Metrowerks\' runtime (`MSLGCC_PS2.LIB`), '
                 'EA\'s DirtySock networking and others. Their object files are listed in '
                 '[DNAT_200.source_files.txt](%s).\n\n| Library | Functions | Code bytes |\n|---|---:|---:|\n' %
                 link(os.path.join(B3, 'DNAT_200.source_files.txt'), sysdir))
        for lib, (n, b) in sorted(libs.items(), key=lambda kv: -kv[1][1]):
            fh.write('| `%s` | %d | %s |\n' % (lib, n, format(b, ',')))
        index_rows.append(('libraries', 'Libraries', sum(1 for o in objs if sys_of.get(o) == 'libraries'),
                           0, sum(v[0] for v in libs.values()), sum(v[1] for v in libs.values())))

    with open(os.path.join(sysdir, 'README.md'), 'w') as fh:
        fh.write('# Game systems\n\n> Generated by `tools/gen_docs.py`.\n\n'
                 'Burnout 3\'s code sorted into areas by source file name. Each page lists the source files, the '
                 'classes and their methods, the Burnout 2 counterparts, and has room for notes. The sorting '
                 'is by name, so a few files may sit in the wrong area: move the pattern in `SYSTEMS` in the '
                 'generator if so.\n\n| Area | Source files | Classes | Functions | Code bytes |\n'
                 '|---|---:|---:|---:|---:|\n')
        for slug, title, nf, nc, nfn, nb in index_rows:
            fh.write('| [%s](%s.md) | %d | %d | %d | %s |\n' % (title, slug, nf, nc, nfn, format(nb, ',')))

    # reference: class lineage B2 -> B3
    refdir = os.path.join(DOCS, 'reference')
    rows = []
    for c in sorted(methods, key=str.lower):
        b2 = next((n for n in b2_name(c) if n in b2types), None)
        if b2:
            rows.append((c, b2, b2types[b2]['size'], b2types[b2]['file'], len(methods[c]), sys_of.get(home.get(c), '')))
    with open(os.path.join(refdir, 'class-lineage.md'), 'w') as fh:
        fh.write('# Burnout 2 → Burnout 3 class lineage\n\n> Generated by `tools/gen_docs.py`.\n\n'
                 'Burnout 3 classes whose name, without the `B3`, matches a class in the Burnout 2 debug info. '
                 'Matching names suggest the class grew out of the Burnout 2 one, so the Burnout 2 layout in '
                 '[types.h](%s) is a starting point for the Burnout 3 layout. It is a hint, not proof: check the '
                 'B3 code\'s field accesses against it.\n\n%d of %d Burnout 3 classes have a match.\n\n'
                 '| Burnout 3 | Burnout 2 | B2 size | B2 file | B3 methods | Area |\n|---|---|---|---|---:|---|\n' %
                 (link(os.path.join(B2, 'types.h'), refdir), len(rows), len(methods)))
        for c, b2, sz, f, n, s in rows:
            fh.write('| `%s` | `%s` | %s | %s | %d | %s |\n' % (c, b2, sz, f.replace('\\', '/'), n,
                                                               '[%s](../systems/%s.md)' % (s, s) if s else ''))

    # reference: hashes
    hp = os.path.join(ROOT, 'data', 'hashes.tsv')
    if os.path.exists(hp):
        with open(os.path.join(refdir, 'hashes.md'), 'w') as fh:
            fh.write('# File hashes\n\n> Generated by `tools/gen_docs.py` from `data/hashes.tsv`.\n\n'
                     'The exact files everything here was made from. Compare against these before trusting an '
                     'address: another dump of "the same" prototype may be a different build.\n\n'
                     '| File | Bytes | CRC32 | MD5 | SHA-1 |\n|---|---:|---|---|---|\n')
            for line in open(hp):
                f, n, crc, md5, sha1 = line.rstrip('\n').split('\t')
                fh.write('| `%s` | %s | `%s` | `%s` | `%s` |\n' % (f, format(int(n), ','), crc, md5, sha1))

    print('systems:', [(r[0], r[2], r[3]) for r in index_rows])
    print('lineage matches:', len(rows), 'of', len(methods))
    unsorted = [o for o in objs if o not in sys_of]
    print('unsorted objects:', unsorted[:20])


if __name__ == '__main__':
    main()
