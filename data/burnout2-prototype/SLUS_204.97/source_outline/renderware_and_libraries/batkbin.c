// batkbin.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x0014E770-0x0014E7BC (76 bytes), lines 80-103
int _rwPluginRegistryAddPluginStream(RwPluginRegistry *reg, unsigned int pluginID, RwStream *(*readCB)(RwStream *, int, void *, int, int), RwStream *(*writeCB)(RwStream *, int, void *, int, int), int (*getSizeCB)(void *, int, int))
{
    // param RwPluginRegistry *reg  (in $v0)
    // param unsigned int pluginID  (in $v0)
    // param RwStream *(*readCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param RwStream *(*writeCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param int (*getSizeCB)(void *, int, int)  (in $v0)
    {   // 0x0014E770-0x0014E7BC
        RwPluginRegEntry *entry;  // in $v1
    }
}

// 0x0014E7C0-0x0014E804 (68 bytes), lines 126-151
int _rwPluginRegistryAddPlgnStrmlwysCB(RwPluginRegistry *reg, unsigned int pluginID, int (*alwaysCB)(void *, int, int))
{
    // param RwPluginRegistry *reg  (in $v0)
    // param unsigned int pluginID  (in $v0)
    // param int (*alwaysCB)(void *, int, int)  (in $v0)
    {   // 0x0014E7C0-0x0014E804
        RwPluginRegEntry *entry;  // in $v1
    }
}

// 0x0014E810-0x0014E9DC (460 bytes), lines 203-301
RwPluginRegistry *_rwPluginRegistryReadDataChunks(RwPluginRegistry *reg, RwStream *stream, void *object)
{
    // param RwPluginRegistry *reg  (in $s2)
    // param RwStream *stream  (in $s1)
    // param void *object  (in $s0)
    {   // 0x0014E810-0x0014E9DC
        RwError _rwErrorCode;  // $sp+72
        unsigned int readLength;  // $sp+92
        unsigned int readType;  // $sp+88
        RwPluginRegEntry *entry;  // in $t0
        unsigned int version;  // $sp+84
        unsigned int length;  // $sp+80
    }
}

// 0x0014E9E0-0x0014EA54 (116 bytes), lines 315-342
RwPluginRegistry *_rwPluginRegistryInvokeRights(RwPluginRegistry *reg, unsigned int id, void *obj, unsigned int extraData)
{
    // param RwPluginRegistry *reg  (in $s0)
    // param unsigned int id  (in $v0)
    // param void *obj  (in $v0)
    // param unsigned int extraData  (in $v0)
    {   // 0x0014E9E0-0x0014EA54
        RwPluginRegEntry *entry;  // in $v1
    }
}

// 0x0014EA60-0x0014EB14 (180 bytes), lines 479-518
RwPluginRegistry *_rwPluginRegistrySkipDataChunks(RwPluginRegistry *reg, RwStream *stream)
{
    // param RwPluginRegistry *reg  (in $s1)
    // param RwStream *stream  (in $s0)
    {   // 0x0014EA60-0x0014EB14
        unsigned int readLength;  // $sp+60
        unsigned int length;  // $sp+56
    }
}

