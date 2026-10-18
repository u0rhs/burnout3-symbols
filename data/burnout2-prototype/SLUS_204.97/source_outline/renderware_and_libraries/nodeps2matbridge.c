// nodeps2matbridge.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void *skyVU1Transforms[32];  // 0x002A3400
static RxClusterRef nodeClusters[2];  // 0x002B3EF0
long skyPrim_State;  // 0x003103B0
int skyTLClipperMode;  // 0x003103D8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyTest_1;  // 0x00310A08
long skyClamp_1;  // 0x00310A20
long skyTex1_1;  // 0x00310A28
RwCullMode gSkyCullState;  // 0x00310A78
int skyVertexAlpha;  // 0x00310A80
int skyAlphaTex;  // 0x00310A84
RwRaster *skyTextureRaster;  // 0x00310A88
void *skyUploadedCode;  // 0x00310AC8
unsigned int skyUserSwitch1;  // 0x00310ACC
unsigned int skyUserSwitch2;  // 0x00310AD0
int skyTSClipperMode;  // 0x00310AD4
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 gifTagPrim128;  // 0x0044DB50
u_long128 skyClipVect1;  // 0x0044DBA0
u_long128 skyClipVect2;  // 0x0044DBB0
u_long128 skyCClipVect1;  // 0x0044DBC0
u_long128 skyCClipVect2;  // 0x0044DBD0
RxExecutionContext _rxExecCtxGlobal;  // 0x0044DD00

// ---- functions ----

// 0x001961E0-0x00196224 (68 bytes), lines 105-121
int _rwPS2MatBridgePipelineNodeInit(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x001961E0-0x00196224
        rwPS2MatBridgePvtData *pvtdata;  // in $s0
    }
}

// 0x00196230-0x0019630C (220 bytes), lines 143-160
static int PS2MatBridgeNodeBody(RxPipelineNode *self)
{
    // param RxPipelineNode *self  (in $v0)
    {   // 0x00196230-0x0019630C
        rwPS2MatBridgePvtData *pvtdata;  // in $v0
        RxPacket *pk;  // in $v0
        int result;  // in $v0
    }
}

// 0x00196310-0x00196340 (48 bytes), lines 217-241
RxPipelineNode *RxPipelineNodePS2MatBridgeSetVIFOffset(RxPipelineNode *self, int vifOffset)
{
    // param RxPipelineNode *self  (in $v0)
    // param int vifOffset  (in $v0)
    {   // 0x00196310-0x00196340
        rwPS2MatBridgePvtData *pvtdata;  // in $v0
        RxPipelineNode *result;  // in $v0
    }
}

// 0x00196340-0x00196378 (56 bytes), lines 305-329
RxPipelineNode *RxPipelineNodePS2MatBridgeSetVU1CodeArray(RxPipelineNode *self, void **VU1CodeArray)
{
    // param RxPipelineNode *self  (in $v0)
    // param void **VU1CodeArray  (in $v0)
    {   // 0x00196340-0x00196378
        rwPS2MatBridgePvtData *pvtdata;  // in $v0
        RxPipelineNode *result;  // in $v0
    }
}

// 0x00196380-0x0019638C (12 bytes), lines 544-545
RxNodeDefinition *RxNodeDefinitionGetPS2MatBridge()
{
    {   // 0x00196380-0x0019638C
        RxNodeDefinition nodePS2MatBridgeCSL;  // at 0x002B3F30
    }
}

// 0x00196390-0x00196D58 (2504 bytes), lines 573-1225
int _rwRabinsBridgeNodeCode(RxPS2DMASessionRecord *DMASessionRecord, RxPS2Mesh *Mesh, rwPS2MatBridgePvtData *pvtdata)
{
    // param RxPS2DMASessionRecord *DMASessionRecord  (in $s3)
    // param RxPS2Mesh *Mesh  (in $s2)
    // param rwPS2MatBridgePvtData *pvtdata  (in $s1)
    {   // 0x00196390-0x00196D58
        u_long128 ___ltmp;  // in $v1
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        unsigned int skySwitchFlag;  // in $a0
        unsigned long tmp1;  // in $v0
        u_long128 ltmp;  // in $v0
        long __longtmp;  // in $v1
        float __floattmp2;  // optimised away
        float __floattmp1;  // $sp+240
        RwRGBA im3DMatCol;  // $sp+236
        RwSurfaceProperties im3DSurfProps;  // $sp+224
        RwRGBA *matCol;  // in $v1
        RwSurfaceProperties *surfProps;  // in $v0
        RpMaterial *material;  // in $a0
        u_long128 ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a2
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        RwTextureAddressMode v;  // in $v1
        RwTextureAddressMode u;  // in $a1
        long tmp;  // in $a1
        unsigned int cFormat;  // in $a2
        RwTexture im3DTexture;  // $sp+128
        RwTexture *texture;  // in $s4
        RpMaterial *material;  // in $a0
        u_long128 ___ltmp;  // in $v1
        u_long128 ltmp;  // in $v0
        unsigned long tmp1;  // in $v0
        unsigned long tmp;  // in $v0
        RpInterpolator *interpolator;  // in $a0
        RpGeometry *geom;  // in $a2
        RpWorld *world;  // in $a0
        int sync;  // in $v0
        float scale;  // $sp+240
        int matModulate;  // in $v0
        void *code;  // in $s4
        RpMeshHeader *meshHeader;  // in $a1
        rwPS2ResEntryHeader *ps2ResHeader;  // in $s0
    }
}

