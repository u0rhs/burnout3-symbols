// babinwor.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwPluginRegistry sectorTKList;  // 0x002B3750
RwPluginRegistry worldTKList;  // 0x002B3770
unsigned int lastSeenSectExtraData;  // 0x00310B08
unsigned int lastSeenSectRightsPluginId;  // 0x00310B0C
unsigned int lastSeenWorldExtraData;  // 0x00310B10
unsigned int lastSeenWorldRightsPluginId;  // 0x00310B14
RwModuleInfo binWorldModule;  // 0x00310B18
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001826B0-0x00182728 (120 bytes), lines 83-102
RwStream *_rpReadWorldRights(RwStream *s, int len)
{
    // param RwStream *s  (in $s1)
    // param int len  (in $s0)
    {   // 0x001826B0-0x00182728
    }
}

// 0x00182730-0x00182798 (104 bytes), lines 110-132
RwStream *_rpWriteWorldRights(RwStream *s, void *obj)
{
    // param RwStream *s  (in $s1)
    // param void *obj  (in $v0)
    {   // 0x00182730-0x00182798
        RpWorld *wrl;  // in $s0
    }
}

// 0x001827A0-0x001827CC (44 bytes), lines 145-153
int _rpSizeWorldRights(void *obj)
{
    // param void *obj  (in $v0)
    {   // 0x001827A0-0x001827CC
    }
}

// 0x001827D0-0x00182848 (120 bytes), lines 164-183
RwStream *_rpReadSectRights(RwStream *s, int len)
{
    // param RwStream *s  (in $s1)
    // param int len  (in $s0)
    {   // 0x001827D0-0x00182848
    }
}

// 0x00182850-0x001828B8 (104 bytes), lines 191-213
RwStream *_rpWriteSectRights(RwStream *s, void *obj)
{
    // param RwStream *s  (in $s1)
    // param void *obj  (in $v0)
    {   // 0x00182850-0x001828B8
        RpWorldSector *sect;  // in $s0
    }
}

// 0x001828C0-0x001828EC (44 bytes), lines 226-234
int _rpSizeSectRights(void *obj)
{
    // param void *obj  (in $v0)
    {   // 0x001828C0-0x001828EC
    }
}

// 0x001828F0-0x00182904 (20 bytes), lines 2032-2036
void *_rpBinaryWorldClose(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x001828F0-0x00182904
    }
}

// 0x00182910-0x00182924 (20 bytes), lines 2052-2056
void *_rpBinaryWorldOpen(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x00182910-0x00182924
    }
}

