#!/bin/sh
# Rebuild everything in data/ and the generated pages in docs/.
#
#   tools/rebuild.sh                 (from the repository root)
#
# Works in two modes:
#  - With the disc folders present, everything is regenerated from them.
#  - Without them, the exports already in data/ are kept and only the documentation is regenerated.
#    (data/*/originals/ keeps the text link maps DNAT_200.MAP and the Burnout 2 .XMA files for
#    reference; the other maps exist only as their exports.)
#
# Point these at local copies of the extracted discs if they don't sit next to the repository:
#   B2_DISC   the Burnout 2 prototype (29 July 2002)
#   B3_PROTO  the Burnout 3 prototype (disc dated 20 July 2004)
#   B3_RETAIL the Burnout 3 NTSC-U retail disc (SLUS-21050)
set -e
cd "$(dirname "$0")/.."

B2_DISC="${B2_DISC:-../Burnout 2 Prototype July 29 2002}"
B3_PROTO="${B3_PROTO:-../Burnout 3 Prototype Jul 20 2004 11.11}"
B3_RETAIL="${B3_RETAIL:-../Burnout 3}"
export B2_DISC B3_PROTO B3_RETAIL

B2="data/burnout2-prototype"
B3="data/burnout3-prototype"
R="data/burnout3-retail"

have() { [ -d "$1" ]; }

# --- Burnout 3 prototype: the four link maps and the assert files ---------------------------------------
if have "$B3_PROTO"; then
    rm -rf "$B3/maps"
    python3 -I tools/export_b3maps.py "$B3_PROTO" "$B3/maps"
else
    echo "Burnout 3 prototype disc not found at $B3_PROTO: keeping $B3/maps"
fi

# --- Modules with symbols (from the discs only) ----------------------------------------------------------
if have "$B3_PROTO"; then
    rm -rf "$B3/modules"
    python3 -I tools/export_modules.py "$B3_PROTO" "$B3/modules" "Burnout 3 prototype, June 2004"
fi
if have "$B2_DISC"; then
    rm -rf "$B2/modules"
    python3 -I tools/export_modules.py "$B2_DISC" "$B2/modules" "Burnout 2 prototype, 29 July 2002"
fi

# --- Exports that need the discs ---------------------------------------------------------------------
if have "$B2_DISC"; then
    rm -rf "$B2/SLUS_204.97" "$B2/disc"
    python3 -I tools/export_elf.py "$B2_DISC/SLUS_204.97" "$B2/SLUS_204.97" "Burnout 2 prototype, 29 July 2002"
    python3 -I tools/export_disc.py "$B2_DISC" "$B2/disc" "Burnout 2 prototype, 29 July 2002"
else
    echo "Burnout 2 disc not found at $B2_DISC: keeping $B2/SLUS_204.97 and $B2/disc"
fi
if have "$B3_PROTO"; then
    rm -rf "$B3/disc"
    python3 -I tools/export_disc.py "$B3_PROTO" "$B3/disc" "Burnout 3 prototype, June 2004"
else
    echo "Burnout 3 prototype disc not found at $B3_PROTO: keeping $B3/disc"
fi
if have "$B3_RETAIL"; then
    rm -rf "$R/disc"
    python3 -I tools/export_disc.py "$B3_RETAIL" "$R/disc" "Burnout 3 retail, NTSC-U SLUS-21050"
else
    echo "Burnout 3 retail disc not found at $B3_RETAIL: keeping $R/disc"
fi
if have "$B2_DISC" && have "$B3_PROTO" && have "$B3_RETAIL"; then
    python3 -I tools/hash_sources.py > data/hashes.tsv
fi

# --- Generated documentation, then the navigation line on every page ----------------------------------
python3 -I tools/gen_docs.py
python3 -I tools/gen_reference.py
python3 -I tools/folder_index.py
python3 -I tools/gen_files_page.py
python3 -I tools/wiki_nav.py
