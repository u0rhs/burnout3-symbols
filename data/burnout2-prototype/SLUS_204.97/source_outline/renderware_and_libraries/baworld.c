// baworld.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpWorldSector *WorldSectorRender(RpWorldSector *, void *);
RpWorldSector *_rpSectorDefaultRenderCallBack(RpWorldSector *);
RpWorldSector *WorldSectorInstance(RpWorldSector *, void *);
void *_rpBinaryWorldClose(void *, int, int);  // 0x001828F0
void *_rpBinaryWorldOpen(void *, int, int);  // 0x00182910
void *_rpClumpClose(void *, int, int);  // 0x00183640
void *_rpClumpOpen(void *, int, int);  // 0x00183700
void *_rpGeometryOpen(void *, int, int);  // 0x00184CA0
void *_rpGeometryClose(void *, int, int);  // 0x00184CC0
void *_rpLightClose(void *, int, int);  // 0x001864B0
void *_rpLightOpen(void *, int, int);  // 0x00186540
void *_rpMaterialOpen(void *, int, int);  // 0x00186620
void *_rpMaterialClose(void *, int, int);  // 0x001866B0
void *_rpMeshClose(void *, int, int);  // 0x001874B0
void *_rpMeshOpen(void *, int, int);  // 0x00187510
void *_rpSectorOpen(void *, int, int);  // 0x0018AAE0
void *_rpSectorClose(void *, int, int);  // 0x0018AB00
RpWorldSector *WorldFindSector(RpWorldSector *, void *);  // 0x0018ABA0
void *WorldClose(void *, int, int);  // 0x0018ABC0
void *WorldOpen(void *, int, int);  // 0x0018AC40
RwPluginRegistry sectorTKList;  // 0x002B3750
RwPluginRegistry worldTKList;  // 0x002B3770
int _rxPipelineGlobalsOffset;  // 0x00310AF8
RwModuleInfo worldModule;  // 0x00310B60
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0018ABA0-0x0018ABC0 (32 bytes), lines 213-221
static RpWorldSector *WorldFindSector(RpWorldSector *sector, void *data)
{
    // param RpWorldSector *sector  (in $v0)
    // param void *data  (in $v0)
    {   // 0x0018ABA0-0x0018ABC0
        rpWorldFindSectorData *findSectorData;  // in $v0
    }
}

// 0x0018ABC0-0x0018AC3C (124 bytes), lines 691-707
static void *WorldClose(void *instance)
{
    // param void *instance  (in $s1)
    {   // 0x0018ABC0-0x0018AC3C
    }
}

// 0x0018AC40-0x0018ACE4 (164 bytes), lines 721-747
static void *WorldOpen(void *instance, int offset)
{
    // param void *instance  (in $s1)
    // param int offset  (in $v0)
    {   // 0x0018AC40-0x0018ACE4
    }
}

// 0x0018ACF0-0x0018AD78 (136 bytes), lines 804-834
int _rpWorldForAllGlobalLights(RpLight *(*callBack)(RpLight *, void *), void *pData)
{
    // param RpLight *(*callBack)(RpLight *, void *)  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x0018ACF0-0x0018AD78
        RpLight *light;  // in $v0
        RwLLLink *next;  // in $s1
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $v0
        RpWorld *world;  // in $v0
    }
}

// 0x0018AD80-0x0018AE04 (132 bytes), lines 848-880
RpWorldSector *_rpWorldSectorForAllLocalLights(RpWorldSector *sector, RpLight *(*callBack)(RpLight *, void *), void *pData)
{
    // param RpWorldSector *sector  (in $s4)
    // param RpLight *(*callBack)(RpLight *, void *)  (in $s3)
    // param void *pData  (in $s2)
    {   // 0x0018AD80-0x0018AE04
        RwLLLink *next;  // in $s1
        RwLLLink *end;  // in $s0
        RwLLLink *cur;  // in $v0
    }
}

// 0x0018AE10-0x0018AEEC (220 bytes), lines 1348-1407
RpWorld *RpWorldSectorGetWorld(RpWorldSector *sector)
{
    // param RpWorldSector *sector  (in $s3)
    {   // 0x0018AE10-0x0018AEEC
        rpWorldFindSectorData findSectorData;  // $sp+104
        RpListedWorld *listedWorld;  // in $s1
        RwLLLink *end;  // in $v0
        RwLLLink *cur;  // in $s0
    }
}

// 0x0018AEF0-0x0018AF94 (164 bytes), lines 2467-2504
RpWorld *RpWorldForAllWorldSectors(RpWorld *world, RpWorldSector *(*fpCallBack)(RpWorldSector *, void *), void *pData)
{
    // param RpWorld *world  (in $s3)
    // param RpWorldSector *(*fpCallBack)(RpWorldSector *, void *)  (in $s2)
    // param void *pData  (in $s1)
    {   // 0x0018AEF0-0x0018AF94
        RpPlaneSector *pspPlane;  // in $a0
        int nStack;  // in $s0
        RpSector *spaStack[64];  // $sp+80
        RpSector *spSect;  // in $v0
    }
}

// 0x0018AFA0-0x0018AFCC (44 bytes), lines 2641-2641
int RpWorldRegisterPlugin(int size, unsigned int pluginID, void *(*constructCB)(void *, int, int), void *(*destructCB)(void *, int, int), void *(*copyCB)(void *, void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v0)
    // param void *(*constructCB)(void *, int, int)  (in $v1)
    // param void *(*destructCB)(void *, int, int)  (in $v0)
    // param void *(*copyCB)(void *, void *, int, int)  (in $v0)
    {   // 0x0018AFA0-0x0018AFCC
        int plug;  // in $v0
    }
}

// 0x0018AFD0-0x0018AFF4 (36 bytes), lines 2692-2692
int RpWorldRegisterPluginStream(unsigned int pluginID, RwStream *(*readCB)(RwStream *, int, void *, int, int), RwStream *(*writeCB)(RwStream *, int, void *, int, int), int (*getSizeCB)(void *, int, int))
{
    // param unsigned int pluginID  (in $a0)
    // param RwStream *(*readCB)(RwStream *, int, void *, int, int)  (in $v1)
    // param RwStream *(*writeCB)(RwStream *, int, void *, int, int)  (in $v0)
    // param int (*getSizeCB)(void *, int, int)  (in $v0)
    {   // 0x0018AFD0-0x0018AFF4
        int plug;  // in $v0
    }
}

// 0x0018B000-0x0018B16C (364 bytes), lines 2889-2944
int RpWorldPluginAttach()
{
    {   // 0x0018B000-0x0018B16C
        int state;  // in $s0
    }
}

