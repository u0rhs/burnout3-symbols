// badevice.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *_rwColorOpen(void *, int, int);  // 0x0014B610
void *_rwColorClose(void *, int, int);  // 0x0014B630
void *_rwErrorOpen(void *, int, int);  // 0x0014B650
void *_rwErrorClose(void *, int, int);  // 0x0014B690
void *_rwMatrixClose(void *, int, int);  // 0x0014BF70
void *_rwMatrixOpen(void *, int, int);  // 0x0014BFF0
RwFreeList *_rwFreeListFreeReal(RwFreeList *, void *);  // 0x0014D110
void *_rwFreeListAllocReal(RwFreeList *);  // 0x0014D130
void *_rwResourcesOpen(void *, int, int);  // 0x0014D560
void *_rwResourcesClose(void *, int, int);  // 0x0014D5D0
void *_rwStreamModuleOpen(void *, int, int);  // 0x0014DCB0
void *_rwStreamModuleClose(void *, int, int);  // 0x0014DD30
void *_rwVectorClose(void *, int, int);  // 0x0014F510
void *_rwVectorOpen(void *, int, int);  // 0x0014F530
void *_rwCameraClose(void *, int, int);  // 0x00152080
void *_rwCameraOpen(void *, int, int);  // 0x00152100
void *MallocWrapper(RwFreeList *);  // 0x00152740
RwFreeList *FreeWrapper(RwFreeList *, void *);  // 0x00152760
void *_rwFrameOpen(void *, int, int);  // 0x00152E80
void *_rwFrameClose(void *, int, int);  // 0x00152F10
void *_rwImageOpen(void *, int, int);  // 0x00153A00
void *_rwImageClose(void *, int, int);  // 0x00153C20
void *_rwRasterClose(void *, int, int);  // 0x00155BC0
void *_rwRasterOpen(void *, int, int);  // 0x00155C40
void *_rwTextureClose(void *, int, int);  // 0x00158BB0
void *_rwTextureOpen(void *, int, int);  // 0x00158D50
void *_rwIm3DClose(void *, int, int);  // 0x00174410
void *_rwIm3DOpen(void *, int, int);  // 0x00174560
void *_rwRenderPipelineOpen(void *, int, int);  // 0x00174750
void *_rwRenderPipelineClose(void *, int, int);  // 0x00174780
static RwPluginRegistry engineTKList;  // 0x002A2A70
signed char _rwMsbBit[256];  // 0x002A2A90
static unsigned int engineInstancesOpened;  // 0x003108F8
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x00152570-0x00152740 (464 bytes), lines 239-303
static int CorePluginAttach()
{
    {   // 0x00152570-0x00152740
        int state;  // in $s0
    }
}

// 0x00152740-0x00152758 (24 bytes), lines 310-310
static void *MallocWrapper(RwFreeList *fl)
{
    // param RwFreeList *fl  (in $v0)
    {   // 0x00152740-0x00152758
    }
}

// 0x00152760-0x00152798 (56 bytes), lines 315-321
static RwFreeList *FreeWrapper(RwFreeList *fl, void *pData)
{
    // param RwFreeList *fl  (in $s0)
    // param void *pData  (in $v0)
    {   // 0x00152760-0x00152798
    }
}

// 0x001527A0-0x001528B0 (272 bytes), lines 414-479
int _rwDeviceSystemRequest(RwDevice *device, int requestID, void *pOut, void *pInOut, int numIn)
{
    // param RwDevice *device  (in $a0)
    // param int requestID  (in $s3)
    // param void *pOut  (in $s2)
    // param void *pInOut  (in $v0)
    // param int numIn  (in $s1)
    {   // 0x001527A0-0x001528B0
        RwError _rwErrorCode;  // $sp+88
        int result;  // in $s0
    }
}

// 0x001528B0-0x001528B8 (8 bytes), lines 492-492
unsigned int _rwGetNumEngineInstances()
{
    {   // 0x001528B0-0x001528B8
    }
}

// 0x001528C0-0x001528E8 (40 bytes), lines 577-577
int RwEngineRegisterPlugin(int size, unsigned int pluginID, void *(*initCB)(void *, int, int), void *(*termCB)(void *, int, int))
{
    // param int size  (in $a0)
    // param unsigned int pluginID  (in $v1)
    // param void *(*initCB)(void *, int, int)  (in $v0)
    // param void *(*termCB)(void *, int, int)  (in $v0)
    {   // 0x001528C0-0x001528E8
        int plug;  // in $v0
    }
}

// 0x001528F0-0x00152938 (72 bytes), lines 827-843
int RwEngineGetNumVideoModes()
{
    {   // 0x001528F0-0x00152938
        int numModes;  // $sp+28
    }
}

// 0x00152940-0x00152990 (80 bytes), lines 889-905
RwVideoMode *RwEngineGetVideoModeInfo(RwVideoMode *modeinfo, int modeIndex)
{
    // param RwVideoMode *modeinfo  (in $s0)
    // param int modeIndex  (in $v0)
    {   // 0x00152940-0x00152990
    }
}

// 0x00152990-0x001529D8 (72 bytes), lines 926-942
int RwEngineGetCurrentVideoMode()
{
    {   // 0x00152990-0x001529D8
        int curMode;  // $sp+28
    }
}

// 0x001529E0-0x00152A18 (56 bytes), lines 965-979
int RwEngineSetVideoMode(int modeIndex)
{
    // param int modeIndex  (in $v0)
    {   // 0x001529E0-0x00152A18
    }
}

// 0x00152A20-0x00152A9C (124 bytes), lines 1129-1160
int RwEngineStop()
{
    {   // 0x00152A20-0x00152A9C
        RwDevice *device;  // in $s0
        int result;  // in $v0
    }
}

// 0x00152AA0-0x00152B4C (172 bytes), lines 1188-1223
int RwEngineStart()
{
    {   // 0x00152AA0-0x00152B4C
        RwDevice *device;  // in $v0
    }
}

// 0x00152B50-0x00152BA8 (88 bytes), lines 1248-1289
int RwEngineClose()
{
    {   // 0x00152B50-0x00152BA8
        int result;  // in $v0
    }
}

// 0x00152BB0-0x00152CE8 (312 bytes), lines 1339-1393
int RwEngineOpen(RwEngineOpenParams *initParams)
{
    // param RwEngineOpenParams *initParams  (in $s3)
    {   // 0x00152BB0-0x00152CE8
        RwError _rwErrorCode;  // $sp+104
        RwError _rwErrorCode;  // $sp+96
        RwDevice *device;  // in $s4
        int result;  // in $v0
    }
}

// 0x00152CF0-0x00152D48 (88 bytes), lines 1418-1452
int RwEngineTerm()
{
    {   // 0x00152CF0-0x00152D48
        int result;  // in $s0
    }
}

// 0x00152D50-0x00152E7C (300 bytes), lines 1519-1605
int RwEngineInit(RwMemoryFunctions *memFuncs, unsigned int openFlags, unsigned int resArenaSize)
{
    // param RwMemoryFunctions *memFuncs  (in $s1)
    // param unsigned int openFlags  (in $v0)
    // param unsigned int resArenaSize  (in $v0)
    {   // 0x00152D50-0x00152E7C
        int result;  // in $s0
    }
}

