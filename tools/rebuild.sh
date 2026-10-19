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
#   B2_DISC   the Burnout 2 prototype (Hidden Palace: Jul 29, 2002 prototype)
#   B3_PROTO  the Burnout 3 prototype (Hidden Palace: Jun 8, 2004 prototype), extracted; the default
#             folder name below is a local one and holds the Jun 8 build
#   B3_REVIEW_US, B3_REVIEW_PAL  disc images of the Jul 20, 2004 11.11 and 11.14 review builds
#   B3_RETAIL the Burnout 3 NTSC-U retail disc (SLUS-21050)
set -e
cd "$(dirname "$0")/.."

B2_DISC="${B2_DISC:-../Burnout 2 Prototype July 29 2002}"
B3_PROTO="${B3_PROTO:-../Burnout 3 Prototype Jul 20 2004 11.11}"
B3_RETAIL="${B3_RETAIL:-../Burnout 3}"
# Disc images of the two July 20, 2004 review builds (read without extracting)
B3_REVIEW_US="${B3_REVIEW_US:-../Burnout 3 - Takedown (Jul 20, 2004 11.11 prototype)/PS2 - Burnout 3 Takedown Print Reviews Only Alpha 1 07-18-2004.iso}"
B3_REVIEW_PAL="${B3_REVIEW_PAL:-../Burnout 3 - Takedown (Jul 20, 2004 11.14 prototype)/Burnout 3 Takedown Review 20.07.2004.iso}"
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
if [ -f "$B3_REVIEW_US" ]; then
    rm -rf data/burnout3-review-us-2004-07-20/disc
    python3 -I tools/export_iso.py "$B3_REVIEW_US" data/burnout3-review-us-2004-07-20/disc "Burnout 3 US review build, 20 July 2004 11:11"
fi
if [ -f "$B3_REVIEW_PAL" ]; then
    rm -rf data/burnout3-review-pal-2004-07-20/disc
    python3 -I tools/export_iso.py "$B3_REVIEW_PAL" data/burnout3-review-pal-2004-07-20/disc "Burnout 3 PAL review build, 20 July 2004 11:14"
fi
if have "$B2_DISC" && have "$B3_PROTO" && have "$B3_RETAIL"; then
    python3 -I tools/hash_sources.py
fi

# --- Retail function names from Nahelam's PAL list (not in the repository; set NAHELAM_PAL_NAMES to its path)
if [ -n "${NAHELAM_PAL_NAMES:-}" ] && [ -f "$NAHELAM_PAL_NAMES" ] && have "$B3_RETAIL"; then
    python3 -I tools/map_pal_names.py "$NAHELAM_PAL_NAMES" "$B3_RETAIL/SLUS_210.50" "$R/function-names.csv"
fi

# --- Retail names checked against the code (needs both executables; B3PC_FUNCTIONS = burnout3-pc's
# games/burnout3/config/functions.csv for the independent start check) ---------------------------------
if [ -f "$B3_RETAIL/SLUS_210.50" ] && [ -f "$B3_PROTO/DNAT_200.45" ]; then
    python3 -I tools/verify_retail_names.py "$B3_RETAIL/SLUS_210.50" "$B3_PROTO/DNAT_200.45" \
        ${B3PC_FUNCTIONS:+--starts "$B3PC_FUNCTIONS"}
fi

python3 -I tools/annotate_retail.py

# --- Generated documentation, then the navigation line on every page ----------------------------------
python3 -I tools/gen_docs.py
python3 -I tools/gen_reference.py
python3 -I tools/folder_index.py
python3 -I tools/gen_files_page.py
python3 -I tools/gen_nav.py
python3 -I tools/wiki_nav.py
