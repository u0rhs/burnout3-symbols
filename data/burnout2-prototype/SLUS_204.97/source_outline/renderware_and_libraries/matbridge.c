// matbridge.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
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
u_long128 gifTag128;  // 0x0044DB40
u_long128 skyClipVect1;  // 0x0044DBA0
u_long128 skyClipVect2;  // 0x0044DBB0
u_long128 skyCClipVect1;  // 0x0044DBC0
u_long128 skyCClipVect2;  // 0x0044DBD0

// ---- functions ----

// 0x00191540-0x0019159C (92 bytes), lines 707-749
void _rxPS2AllTexFilterASMFunc(RwTextureFilterMode filtering)
{
    // param RwTextureFilterMode filtering  (in $v0)
    {   // 0x00191540-0x0019159C
        long tmp;  // in $a2
    }
}

// 0x001915A0-0x001916B4 (276 bytes), lines 766-801
void _rxPS2AllMatColASMFunc(RwRGBA *matCol, float colScale)
{
    // param RwRGBA *matCol  (in $v0)
    // param float colScale  ($sp+0)
    {   // 0x001915A0-0x001916B4
        long longtmp;  // in $v1
        float floattmp2;  // optimised away
        float floattmp1;  // $sp+0
        u_long128 ltmp;  // in $a0
    }
}

// 0x001916C0-0x00191718 (88 bytes), lines 818-852
void _rxPS2AllSurfPropsASMFunc(RwSurfaceProperties *surfProps, float extra)
{
    // param RwSurfaceProperties *surfProps  (in $v0)
    // param float extra  ($sp+0)
    {   // 0x001916C0-0x00191718
        long longtmp;  // in $v1
        float floattmp2;  // optimised away
        float floattmp1;  // $sp+0
        u_long128 ltmp;  // in $a0
    }
}

