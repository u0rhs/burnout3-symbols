// babincam.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwPluginRegistry cameraTKList;  // 0x002A2A20

// ---- functions ----

// 0x0014FC80-0x0014FE3C (444 bytes), lines 287-345
RwCamera *RwCameraStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s0)
    {   // 0x0014FC80-0x0014FE3C
        RwError _rwErrorCode;  // $sp+144
        unsigned int version;  // $sp+156
        unsigned int size;  // $sp+152
        rwStreamCamera cam;  // $sp+112
        RwCamera *camera;  // in $s1
    }
}

