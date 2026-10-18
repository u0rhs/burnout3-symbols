// ps2allim3d.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RpMeshHeader gIm3DMeshHeader[2];  // 0x002B45C0
long skyPrim_State;  // 0x003103B0
int skyTLClipperMode;  // 0x003103D8
RwMeshCache gIm3DMeshCache;  // 0x003104E8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
RwCullMode gSkyCullState;  // 0x00310A78
int skyVertexAlpha;  // 0x00310A80
int skyAlphaTex;  // 0x00310A84
unsigned char skyTransType;  // 0x00310AC4
void *skyUploadedCode;  // 0x00310AC8
unsigned int skyUserSwitch1;  // 0x00310ACC
unsigned int skyUserSwitch2;  // 0x00310AD0
int skyTSClipperMode;  // 0x00310AD4
RwModuleInfo meshModule;  // 0x00310B50
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 gifTag128;  // 0x0044DB40
u_long128 skyClipVect1;  // 0x0044DBA0
u_long128 skyClipVect2;  // 0x0044DBB0
u_long128 skyCClipVect1;  // 0x0044DBC0
u_long128 skyCClipVect2;  // 0x0044DBD0

// ---- functions ----

// 0x0019FC80-0x0019FD2C (172 bytes), lines 114-116
void RwIm3DPS2AllGetMeshHeaderMeshCacheFunc(_rwIm3DPoolStash *stash, RxPS2AllPipeData *ps2AllPipeData)
{
    // param _rwIm3DPoolStash *stash  (in $v0)
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019FC80-0x0019FD2C
        RpMesh *_msh;  // in $v0
        RpMaterial _mat;  // at 0x002B45E0
    }
}

// 0x0019FD30-0x0019FE98 (360 bytes), lines 422-467
int RwIm3DPS2AllObjectSetupCallBack(RxPS2AllPipeData *ps2AllPipeData, RwMatrixTag **transform)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $s2)
    // param RwMatrixTag **transform  (in $s1)
    {   // 0x0019FD30-0x0019FE98
        RwFrustumTestResult _infm;  // in $v0
        RwFrustumTestResult inFrustum;  // $sp+76
        _rwIm3DPoolStash *stash;  // in $s0
    }
}

// 0x0019FEA0-0x0019FF44 (164 bytes), lines 509-521
RwResEntry *RwIm3DPS2AllResEntryAllocCallBack(RxPS2AllPipeData *ps2AllPipeData, RwResEntry **repEntry, unsigned int size, void (*destroyCallBack)(RwResEntry *))
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $s3)
    // param RwResEntry **repEntry  (in $s2)
    // param unsigned int size  (in $s1)
    // param void (*destroyCallBack)(RwResEntry *)  (in $s0)
    {   // 0x0019FEA0-0x0019FF44
    }
}

// 0x0019FF50-0x0019FF58 (8 bytes), lines 555-555
int RwIm3DPS2AllInstanceCallBack(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x0019FF50-0x0019FF58
    }
}

// 0x0019FF60-0x001A0388 (1064 bytes), lines 607-656
int RwIm3DPS2AllBridgeCallBack(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $s0)
    {   // 0x0019FF60-0x001A0388
        u_long128 ___ltmp;  // in $v1
        rwPS2AllResEntryHeader *_p2rh;  // in $s0
        u_long128 ___ltmp;  // in $a0
        void *_kohd;  // in $a1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a1
        unsigned int __skySwitchFlag;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $v1
        unsigned long __tmp1;  // in $v0
        u_long128 ___ltmp;  // in $a1
    }
}

// 0x001A0390-0x001A0848 (1208 bytes), lines 710-909
int RwIm3DPS2AllInstance(RxPS2AllPipeData *ps2AllPipeData)
{
    // param RxPS2AllPipeData *ps2AllPipeData  (in $v0)
    {   // 0x001A0390-0x001A0848
        RwRGBA col;  // $sp+124
        RxObjSpace3DVertex *verts;  // in $a1
        unsigned int *dataTmp;  // in $v0
        u_long128 *data;  // in $a0
        RxObjSpace3DVertex *vert;  // in $a3
        RxObjSpace3DVertex *verts;  // in $t7
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $t6
        RwV3d pos;  // $sp+112
        RxObjSpace3DVertex *verts;  // in $t7
        float *dataTmp;  // in $v0
        u_long128 *data;  // in $t6
        unsigned short *indexArray;  // in $t5
        unsigned char *swap;  // in $a3
        unsigned char *vertInc;  // in $t4
        unsigned char *shiftMask2;  // in $t3
        unsigned char *shiftMask;  // in $t2
        unsigned int stripReverse;  // in $t1
        unsigned int modCnt;  // in $t0
        unsigned int startIndOffset;  // in $v0
        unsigned int indOffset;  // in $a3
        unsigned int cntGen;  // in $a2
        int j;  // in $v0
        int vertCounter;  // in $a1
        unsigned int numVerts;  // in $v0
        rwPS2AllResEntryHeader *ps2ResHeader;  // in $v1
        _rwIm3DPoolStash *stash;  // in $v0
        rwPS2AllIndexLUTs IndexLUT;  // at 0x002C41A0
    }
}

