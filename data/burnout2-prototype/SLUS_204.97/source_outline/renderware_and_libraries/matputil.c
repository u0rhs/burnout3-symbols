// matputil.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001930B0-0x00193168 (184 bytes), lines 27-63
void rpObjectDestroyMeshCache(RwMeshCache *meshCache)
{
    // param RwMeshCache *meshCache  (in $s2)
    {   // 0x001930B0-0x00193168
        RwResEntry *mesh;  // in $s3
        int i;  // in $s0
    }
}

// 0x00193170-0x00193294 (292 bytes), lines 71-99
RwMeshCache **rpObjectGetMeshCacheResize(RwMeshCache **meshCacheRef, unsigned int numMeshes)
{
    // param RwMeshCache **meshCacheRef  (in $s5)
    // param unsigned int numMeshes  (in $s4)
    {   // 0x00193170-0x00193294
    }
}

