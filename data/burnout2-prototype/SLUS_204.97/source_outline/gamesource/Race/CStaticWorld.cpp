// I:\Burnout 2 Code\gamesource\Race\CStaticWorld.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kYAxis;  // 0x002D5FC0
static RwV3d kZAxis;  // 0x002D5FD0
long skyPrim_State;  // 0x003103B0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyTex1_1;  // 0x00310A28
RwRaster *skyTextureRaster;  // 0x00310A88
unsigned char skyTransType;  // 0x00310AC4
void *skyUploadedCode;  // 0x00310AC8
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CRenderer gRenderer;  // 0x00434440
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
unsigned int ourGlobals[4096];  // 0x004486D0
u_long128 gifTagPrim128;  // 0x0044DB50
u_long128 skyClipVect1;  // 0x0044DBA0
u_long128 skyClipVect2;  // 0x0044DBB0
u_long128 skyCClipVect1;  // 0x0044DBC0
u_long128 skyCClipVect2;  // 0x0044DBD0
u_long128 xMaxYMax128;  // 0x0044DC00
CSpatiallySortedBodySet gBodies;  // 0x004854B0
RwMatrixTag _gViewMatrix;  // 0x004872A0
PSSStaticWorld gB2PSSBuffer;  // 0x00980000

// ---- functions ----

// 0x00243730-0x00243740 (16 bytes), lines 2599-2600
// GetRenderPipeline__12CStaticWorldF18EPSSRenderPipeline
GsPS2Pipeline *CStaticWorld::GetRenderPipeline(EPSSRenderPipeline ePipelineID)
{
    // param CStaticWorld *this  (in $v0)
    // param EPSSRenderPipeline ePipelineID  (in $v0)
    {   // 0x00243730-0x00243740
    }
}

// 0x00243740-0x00243F60 (2080 bytes), lines 2123-2581
// SetCurrentMaterial__12CStaticWorldFiii
int CStaticWorld::SetCurrentMaterial(int lnMaterialID, int lnPacketSize, int lbFog)
{
    // param CStaticWorld *this  (in $s3)
    // param int lnMaterialID  (in $v0)
    // param int lnPacketSize  (in $fp)
    // param int lbFog  (in $s5)
    {   // 0x00243740-0x00243F60
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        float lrUOffset;  // $sp+384
        PWDefaultDataTag *lpDefaultData;  // in $s2
        void *lpData;  // in $v0
        PWDefaultDataTag lDefaultData;  // $sp+368
        PWGlassDataTag lGlassData;  // $sp+304
        PWWaterDataTag lWaterData;  // $sp+240
        PWSpecularDataTag lSpecularData;  // $sp+176
        float lrNewK;  // $sp+384
        float lrNewLog2K;  // $sp+384
        float lrNintelyOverFOV;  // $sp+384
        float lrFOV;  // $sp+384
        float lrBackupK;  // optimised away
        RwRaster *lpRas;  // in $s5
        float lrLineFogEnd;  // $sp+384
        float lrLineFogStart;  // $sp+384
        unsigned int lunLineFog;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        float *lpXYMax;  // in $s4
        long long myPrim_State;  // in $s1
        RwTexture *lpTexture;  // in $s4
        PSSMaterial *lpMaterial;  // in $s0
        unsigned long long lZBuf1;  // in $v0
        unsigned long long lFrame1;  // in $v0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $v0
        u_long128 ltmp;  // in $v0
        float lrAmplitude;  // at 0x00310FCC
        float lrMinFrequency;  // at 0x00310FC4
        float lrMaxFrequency;  // at 0x00310FBC
        signed char init;  // at 0x00310FD0
        signed char init;  // at 0x00310FC8
        signed char init;  // at 0x00310FC0
    }
}

// 0x00243F60-0x0024400C (172 bytes), lines 2050-2108
// _PSSWorldOnceOnlyCode__FPvi
static int _PSSWorldOnceOnlyCode(void *lpVUCode, int lnPrimCode)
{
    // param void *lpVUCode  (in $v0)
    // param int lnPrimCode  (in $v0)
    {   // 0x00243F60-0x0024400C
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $a0
    }
}

// 0x00244010-0x00244268 (600 bytes), lines 1948-2037
// RenderAfterWorld__12CStaticWorldFiiiiii
void CStaticWorld::RenderAfterWorld(int lnTBackdrop1, int lnTBackdrop2, int lnTBackdrop3, int lnTBackdrop4, int lnWater, int lnChevron)
{
    // param CStaticWorld *this  (in $s4)
    // param int lnTBackdrop1  (in $s3)
    // param int lnTBackdrop2  (in $s2)
    // param int lnTBackdrop3  (in $s5)
    // param int lnTBackdrop4  (in $s6)
    // param int lnWater  (in $s7)
    // param int lnChevron  (in $s1)
    {   // 0x00244010-0x00244268
        int lnIndex;  // in $s1
        int lnObjectsToDraw;  // in $s0
        GsPS2RenderObject *lapObjectsToDraw[7];  // $sp+144
    }
}

// 0x00244270-0x0024432C (188 bytes), lines 1888-1930
// FlushPropType__12CStaticWorldFi
void CStaticWorld::FlushPropType(int lnPropType)
{
    // param CStaticWorld *this  (in $s2)
    // param int lnPropType  (in $v0)
    {   // 0x00244270-0x0024432C
        u_long128 ___ltmp;  // in $a0
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $a2
        PSSMaterial *lpMat;  // in $a0
        GsPS2RenderObjectInstance *lpProp;  // in $s1
        GsPS2Pipeline *lpInstancePipeLit;  // in $s0
    }
}

// 0x00244330-0x00244440 (272 bytes), lines 1845-1876
// RenderStaticPropType__12CStaticWorldFiii
void CStaticWorld::RenderStaticPropType(int lnPropType, int lnREALWorldUnit, int lbIsCulled)
{
    // param CStaticWorld *this  (in $s6)
    // param int lnPropType  (in $s5)
    // param int lnREALWorldUnit  (in $v0)
    // param int lbIsCulled  (in $s4)
    {   // 0x00244330-0x00244440
        int lnNumMatricesAddedInTotal;  // in $s1
        int lnNumMatricesAddedThisLoop;  // in $v0
        GsPS2Pipeline *lpInstancePipeLit;  // in $s0
    }
}

// 0x00244440-0x00244690 (592 bytes), lines 1739-1830
// SetupAndRenderDynamicPropType__12CStaticWorldFi
void CStaticWorld::SetupAndRenderDynamicPropType(int lnPropType)
{
    // param CStaticWorld *this  (in $s3)
    // param int lnPropType  (in $s2)
    {   // 0x00244440-0x00244690
        int lnMatrixAdded;  // in $v0
        int lnEndProp;  // in $v1
        GsPS2RenderObjectInstance *lpProp;  // in $v0
        GsPS2Pipeline *lpInstancePipeLit;  // in $s1
        int lnPropCounter;  // in $s0
    }
}

// 0x00244690-0x00244790 (256 bytes), lines 1685-1709
// RemoveCrashingProp__12CStaticWorldFP12CPropPhysics
void CStaticWorld::RemoveCrashingProp(CPropPhysics *lpProp)
{
    // param CStaticWorld *this  (in $v0)
    // param CPropPhysics *lpProp  (in $v0)
    {   // 0x00244690-0x00244790
        int lnEndProp;  // in $a1
        int lnProp;  // in $a2
    }
}

// 0x00244790-0x00244920 (400 bytes), lines 1606-1670
// RenderOpaqueBackdrops__12CStaticWorldFiiii
void CStaticWorld::RenderOpaqueBackdrops(int lnBackdrop1, int lnBackdrop2, int lnBackdrop3, int lnBackdrop4)
{
    // param CStaticWorld *this  (in $s0)
    // param int lnBackdrop1  (in $v0)
    // param int lnBackdrop2  (in $v0)
    // param int lnBackdrop3  (in $v0)
    // param int lnBackdrop4  (in $v0)
    {   // 0x00244790-0x00244920
        signed char lnBackdropsToDraw;  // in $s2
        signed char lanBackdropsToDraw[4];  // $sp+92
        int lnIndex;  // in $s1
    }
}

// 0x00244920-0x00245814 (3828 bytes), lines 1138-1591
// UpdateAndRenderSky__12CStaticWorldFf
void CStaticWorld::UpdateAndRenderSky(float lrWeatherIntensity)
{
    // param CStaticWorld *this  (in $s4)
    // param float lrWeatherIntensity  ($sp+256)
    {   // 0x00244920-0x00245814
        u_long128 ___ltmp;  // in $t3
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a0
        unsigned long long lTmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        unsigned long long lTmp1;  // in $v0
        unsigned long long lTmp;  // in $a0
        float lrTextureTime;  // optimised away
        char *lpacName;  // in $s3
        signed char lnNextTexID;  // in $v0
        int lnNextTex;  // in $a0
        RwTexture *lpTex;  // in $v1
        PSSMaterial *lpAniMat;  // in $s1
        float lrInterpA;  // $sp+256
        PSSSceneInformation *lpMax;  // in $v1
        PSSSceneInformation *lpMin;  // in $v0
        RwRGBA lSkyDarkenColour;  // $sp+252
        float lrGameTime;  // optimised away
        RwCamera *lpCamera;  // in $s1
        RwMatrixTag *lpViewMatrix;  // in $s0
        RwV3d temp;  // $sp+240
        int lnIndex;  // in $s0
        RwMatrixTag lSkyMatrix;  // $sp+176
        float krCamPosShift;  // at 0x00310FAC
        float krLightYScale;  // at 0x00310FB4
        signed char init;  // at 0x00310FB8
        signed char init;  // at 0x00310FB0
    }
}

// 0x00245820-0x00245974 (340 bytes), lines 959-1010
// AnimateProps__12CStaticWorldFv
void CStaticWorld::AnimateProps()
{
    // param CStaticWorld *this  (in $s5)
    {   // 0x00245820-0x00245974
        unsigned int lnPropLTMArrayIndex;  // in $s6
        int lnPropObjectID;  // in $s7
        float lrCollisionWorldIntensity;  // optimised away
        B2PropObject *lpProp;  // in $s4
        float lrRotation;  // optimised away
        EB2PropType lePropTypeAsPipelineID;  // in $a0
        GsPS2RenderObjectInstance *lpPropBaseObject;  // in $s3
        int j;  // in $s2
        int lnPropObject;  // in $s1
        int lnUnitCount;  // in $s0
    }
}

// 0x00245980-0x00245AE8 (360 bytes), lines 892-947
// SnapPropOffWorld__12CStaticWorldFP12B2PropObjectiP14CCollidingBody
int CStaticWorld::SnapPropOffWorld(B2PropObject *lpProp, int lnREALWorldUnit, CCollidingBody *lpCollidingBody)
{
    // param CStaticWorld *this  (in $s5)
    // param B2PropObject *lpProp  (in $s4)
    // param int lnREALWorldUnit  (in $s2)
    // param CCollidingBody *lpCollidingBody  (in $v0)
    {   // 0x00245980-0x00245AE8
        B2PropObject *lpCopiedProp;  // in $v0
        int lnLastIndex;  // in $v0
        int lnPropObjectIndex;  // in $s1
        int lnPropArrayIndex;  // in $s0
    }
}

// 0x00245AF0-0x00245BBC (204 bytes), lines 848-876
// AddPropsToBodySet__12CStaticWorldFi
void CStaticWorld::AddPropsToBodySet(int lnREALWorldUnit)
{
    // param CStaticWorld *this  (in $s3)
    // param int lnREALWorldUnit  (in $s2)
    {   // 0x00245AF0-0x00245BBC
        EB2PropType lePropTypeAsPipelineID;  // in $a0
        int i;  // in $s1
        int lnPropObject;  // in $s0
    }
}

// 0x00245BC0-0x002460B0 (1264 bytes), lines 704-835
// AddPropToDynamicSet__12CStaticWorldFP12B2PropObjectP14CCollidingBody
int CStaticWorld::AddPropToDynamicSet(B2PropObject *lpProp, CCollidingBody *lpCollidingBody)
{
    // param CStaticWorld *this  (in $s4)
    // param B2PropObject *lpProp  (in $s3)
    // param CCollidingBody *lpCollidingBody  (in $s2)
    {   // 0x00245BC0-0x002460B0
        float lrSpeedRatio;  // optimised away
        float lrSpeedRight;  // optimised away
        float lrSpeedUp;  // optimised away
        float lrRandomFactor;  // optimised away
        RwV3d lDiagonalSize;  // $sp+96
        CPropPhysics *lpPhysicsProp;  // in $s0
        float lrSizePower;  // at 0x00310FA4
        signed char init;  // at 0x00310FA8
    }
}

// 0x002460B0-0x002464BC (1036 bytes), lines 357-515
// Reset__12CStaticWorldFi
int CStaticWorld::Reset(int lbUseWeather)
{
    // param CStaticWorld *this  (in $s0)
    // param int lbUseWeather  (in $v0)
    {   // 0x002460B0-0x002464BC
        PSSMaterial *lpAniMat;  // in $s2
        int i;  // in $a0
        int lnHullCounter;  // in $v1
        int lnPropCounter;  // in $v0
        EPSSWeather leWeather;  // in $a1
        char *lpacName;  // in $s3
        signed char lnNextTexID;  // in $v0
        int lnIndex;  // in $s1
    }
}

// 0x002464C0-0x002466E0 (544 bytes), lines 223-342
// FixupPSSBuffer__12CStaticWorldFv
void CStaticWorld::FixupPSSBuffer()
{
    // param CStaticWorld *this  (in $v0)
    {   // 0x002464C0-0x002466E0
        PSSMaterial *lpMaterial;  // in $s3
        GsPS2Pipeline *lpPipeUsed;  // in $s2
        int lnIndex;  // in $s1
    }
}

// 0x002466E0-0x00246714 (52 bytes), lines 201-209
// Shutdown__12CStaticWorldFv
void CStaticWorld::Shutdown()
{
    // param CStaticWorld *this  (in $s0)
    {   // 0x002466E0-0x00246714
    }
}

// 0x00246720-0x00246768 (72 bytes), lines 178-189
// Setup__12CStaticWorldFPc
void CStaticWorld::Setup(char *lpacPSSFilename)
{
    // param CStaticWorld *this  (in $s0)
    // param char *lpacPSSFilename  (in $v0)
    {   // 0x00246720-0x00246768
    }
}

// 0x00246770-0x00246874 (260 bytes), lines 91-139
// Init__12CStaticWorldFv
void CStaticWorld::Init()
{
    // param CStaticWorld *this  (in $s0)
    {   // 0x00246770-0x00246874
    }
}

