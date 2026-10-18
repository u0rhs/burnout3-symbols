// basector.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RwPluginRegistry sectorTKList;  // 0x002B3750
RwModuleInfo sectorModule;  // 0x00310B58
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0018AAE0-0x0018AAF4 (20 bytes), lines 63-67
void *_rpSectorOpen(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x0018AAE0-0x0018AAF4
    }
}

// 0x0018AB00-0x0018AB14 (20 bytes), lines 83-87
void *_rpSectorClose(void *instance)
{
    // param void *instance  (in $v0)
    {   // 0x0018AB00-0x0018AB14
    }
}

// 0x0018AB20-0x0018AB4C (44 bytes), lines 371-371
int RpWorldSectorRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x0018AB20-0x0018AB4C
        int plug;  // in $v0
    }
}

// 0x0018AB50-0x0018AB74 (36 bytes), lines 424-424
int RpWorldSectorRegisterPluginStream(unsigned int pluginID, RwStream *(*readCB)(RwStream *, int, void *, int, int), RwStream *(*writeCB)(RwStream *, int, void *, int, int), int (*getSizeCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $a0)
    // param RwStream *(*readCB)(RwStream *, int, void *, int, int)  (in $v1)
    // param RwStream *(*writeCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param int (*getSizeCB)(void *, int, int)  (in $v0)
    {   // 0x0018AB50-0x0018AB74
        int plug;  // in $v0
    }
}

// 0x0018AB80-0x0018AB98 (24 bytes), lines 469-469
int RpWorldSectorSetStreamAlwaysCallBack(unsigned int pluginID, int (*alwaysCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $v0)
    // param int (*alwaysCB)(void *, int, int)  (in $v0)
    {   // 0x0018AB80-0x0018AB98
        int plug;  // in $v0
    }
}

