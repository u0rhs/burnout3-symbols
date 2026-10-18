// balight.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void LightTidyDestroyLight(void *, void *);  // 0x001860D0
RwObjectHasFrame *LightSync(RwObjectHasFrame *);  // 0x001860E0
static RwPluginRegistry lightTKList;  // 0x002B36E0
RwModuleInfo lightModule;  // 0x00310B40
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x001860D0-0x001860D8 (8 bytes), lines 98-98
static void LightTidyDestroyLight(void *object)
{
    // param void *object  (in $v0)
    {   // 0x001860D0-0x001860D8
    }
}

// 0x001860E0-0x001860E8 (8 bytes), lines 127-127
static RwObjectHasFrame *LightSync(RwObjectHasFrame *type)
{
    // param RwObjectHasFrame *type  (in $v0)
    {   // 0x001860E0-0x001860E8
    }
}

// 0x001860F0-0x0018611C (44 bytes), lines 449-449
int RpLightRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x001860F0-0x0018611C
        int plug;  // in $v0
    }
}

// 0x00186120-0x00186370 (592 bytes), lines 771-858
RpLight *RpLightStreamRead(RwStream *stream)
{
    // param RwStream *stream  (in $s5)
    {   // 0x00186120-0x00186370
        RwError _rwErrorCode;  // $sp+160
        float _tmp;  // $sp+176
        float _result;  // $sp+176
        RpLightChunkInfo lite;  // $sp+128
        RpLight *light;  // in $s0
        unsigned int version;  // $sp+172
        unsigned int size;  // $sp+168
    }
}

// 0x00186370-0x001863CC (92 bytes), lines 1121-1135
int RpLightDestroy(RpLight *light)
{
    // param RpLight *light  (in $s0)
    {   // 0x00186370-0x001863CC
    }
}

// 0x001863D0-0x001864AC (220 bytes), lines 1193-1240
RpLight *RpLightCreate(int type)
{
    // param int type  (in $s2)
    {   // 0x001863D0-0x001864AC
        RpLight *light;  // in $s0
    }
}

// 0x001864B0-0x00186534 (132 bytes), lines 1252-1268
void *_rpLightClose(void *instance)
{
    // param void *instance  (in $s2)
    {   // 0x001864B0-0x00186534
    }
}

// 0x00186540-0x001865C4 (132 bytes), lines 1279-1298
void *_rpLightOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x00186540-0x001865C4
    }
}

