// I:\Burnout 2 Code\gamesource\Race\CStreamedWorld.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _SRCSphereCollateCallback(int, int, void *);
int _SRCSphereCollisionCallback(int, int, void *);  // 0x00248410
CGTFileSystem *gpGTFileSystem;  // 0x003107C0
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
int skyCameraExt;  // 0x00310A70
unsigned char skyTransType;  // 0x00310AC4
static unsigned int _gStreamedWorldDiskSemaphore;  // 0x00310FD4
static int _gnStack;  // 0x00310FD8
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CRenderer gRenderer;  // 0x00434440
CRaceIntroCamera CCamera::mRaceIntroCamera;  // 0x0043DE60
unsigned int ourGlobals[4096];  // 0x004486D0
static ColStack _gDataStack[33];  // 0x00487300
static ColStack _gCurrStack;  // 0x00487720
unsigned char gB2PSWBuffer[];  // 0x01100000
unsigned char gB2PSWBuffer2[];  // 0x01400000

// ---- functions ----

// 0x00246880-0x00246F90 (1808 bytes), lines 3773-3866
// _PSWFrustumTestBBox__FP8RwCameraP5RwV3dP8PSW3DBoxP11PSWFastHull
static EPSWFrustumTestResult _PSWFrustumTestBBox(RwCamera *pCamera, RwV3d *pCameraPos, PSW3DBox *pBox, PSWFastHull *pHull)
{
    // param RwCamera *pCamera  (in $v0)
    // param RwV3d *pCameraPos  (in $v0)
    // param PSW3DBox *pBox  (in $v0)
    // param PSWFastHull *pHull  (in $v0)
    {   // 0x00246880-0x00246F90
        _SkyCameraExt *camExt;  // in $v1
        EPSWFrustumTestResult rBottom;  // in $v0
        EPSWFrustumTestResult rTop;  // in $v0
        EPSWFrustumTestResult rRight;  // in $v0
        EPSWFrustumTestResult rLeft;  // in $v0
        EPSWFrustumTestResult rFar;  // in $v0
        EPSWFrustumTestResult rNear;  // in $v0
    }
}

// 0x00246F90-0x00247444 (1204 bytes), lines 3451-3673
// RenderWorldPostSpecular__14CStreamedWorldFv
void CStreamedWorld::RenderWorldPostSpecular()
{
    // param CStreamedWorld *this  (in $s3)
    {   // 0x00246F90-0x00247444
        u_long128 ___ltmp;  // in $a0
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $a1
        int lnNumMeshesDrawn;  // in $v0
        int lnMaterial;  // in $s1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a0
        unsigned long long tmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a1
        RwCamera *lpCam;  // in $s0
        unsigned long long tmp;  // in $v0
        int j;  // in $s0
        int i;  // in $t2
        int lbViewSpecularPassOnly;  // at 0x00310FE4
        int lbRenderSpecularPass;  // at 0x00310FDC
        signed char init;  // at 0x00310FE8
        signed char init;  // at 0x00310FE0
    }
}

// 0x00247450-0x00248404 (4020 bytes), lines 2645-3439
// RenderWorld__14CStreamedWorldFf
void CStreamedWorld::RenderWorld(float lrWeatherIntensity)
{
    // param CStreamedWorld *this  (in $s4)
    // param float lrWeatherIntensity  (optimised away)
    {   // 0x00247450-0x00248404
        u_long128 ___ltmp;  // in $a1
        u_long128 ___ltmp;  // in $a2
        u_long128 ___ltmp;  // in $a1
        unsigned long long tmp;  // in $v1
        int lbWaitFor4UnitLimit;  // in $s0
        int lbLoadMore;  // in $a1
        u_long128 ___ltmp;  // in $v1
        unsigned long long tmp1;  // in $v0
        unsigned long long tmp;  // in $a0
        u_long128 ___ltmp;  // in $v1
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $v0
        int lnNumTryingToAdd;  // $sp+304
        int lnNumMatricesAddedThisTime;  // in $s1
        PSSMaterial *lpMat;  // $sp+240
        int numMatricesAdded;  // in $v0
        int lnNumMatricesTotal;  // in $a3
        GsPS2RenderObjectInstance *lpLitInstance;  // in $s0
        u_long128 ___ltmp;  // in $v1
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        unsigned long long tmp1;  // in $v1
        unsigned long long tmp;  // in $v0
        int lnNumTryingToAdd;  // $sp+224
        int lnNumMatricesAddedThisTime;  // in $s1
        int numMatricesAdded;  // in $v0
        int lnNumMatricesTotal;  // in $a3
        GsPS2RenderObjectInstance *lpInstance;  // in $s0
        EPSWFrustumTestResult laFrustRes[17];  // $sp+656
        unsigned char *lpRenderData[17];  // $sp+576
        int lnNumMeshesDrawn;  // in $s0
        EPSWFrustumTestResult laFrustRes[17];  // $sp+496
        unsigned char *lpRenderData[17];  // $sp+416
        int lnNumMeshesDrawn;  // in $s1
        RwCamera *lpCam;  // in $v0
        int lnIndex;  // in $t7
        float lrFarFogPlane;  // $sp+748
        float lrNearFogPlane;  // optimised away
        unsigned long long lulZBuf1;  // $sp+208
        unsigned long long lulFrame1;  // $sp+192
        int lnTest1;  // $sp+744
        int lnAlpha1;  // $sp+740
        GsPS2Pipeline *lpInstancePipeLit;  // $sp+188
        GsPS2Pipeline *lpInstancePipePrelit;  // in $fp
        RwCamera *lpCamera;  // in $s0
        int lnVIFOffset;  // $sp+184
        int lnCurrentUnit;  // in $v0
        int lnCullMode;  // $sp+736
        int j;  // in $s0
        int i;  // in $a0
    }
}

// 0x00248410-0x00248688 (632 bytes), lines 2221-2381
// _SRCSphereCollisionCallback__FiiPv
static int _SRCSphereCollisionCallback(int numPolygons, int polyOffset, void *data)
{
    // param int numPolygons  (in $s5)
    // param int polyOffset  (in $s6)
    // param void *data  (in $v0)
    {   // 0x00248410-0x00248688
        int numPolygonsExtra;  // in $s3
        SRCCollisionVertex *v2;  // in $v0
        SRCCollisionVertex *v1;  // in $v0
        SRCCollisionVertex *v0;  // in $v0
        SRCCollisionPoly *polygons;  // in $v0
        SRCCollisionVertex *vertices;  // in $s2
        int numPolysIntersected;  // in $s1
        CollisionCallbackData *pSRCData;  // in $s0
        SRCCollisionTriangle collisionTri;  // $sp+128
    }
}

// 0x00248690-0x00248924 (660 bytes), lines 2089-2211
// IntersectSphereWithNearCollisionUnits__14CStreamedWorldFUiP13SRCCollSpherePFP13SRCCollSphereP20SRCCollisionTrianglePv_iPv
int CStreamedWorld::IntersectSphereWithNearCollisionUnits(unsigned int currentUnit, SRCCollSphere *pSphere, int (*fpCollisionSphereCallback)(SRCCollSphere *, SRCCollisionTriangle *, void *), void *pData)
{
    // param CStreamedWorld *this  (in $v0)
    // param unsigned int currentUnit  (in $v0)
    // param SRCCollSphere *pSphere  (in $s3)
    // param int (*fpCollisionSphereCallback)(SRCCollSphere *, SRCCollisionTriangle *, void *)  (in $v0)
    // param void *pData  (in $s2)
    {   // 0x00248690-0x00248924
        PSWStreamedUnit *lpUnit;  // in $v0
        int bNoEarlyOut;  // in $v0
        RwV4d lConstants;  // $sp+256
        SRCCollLine box;  // $sp+224
        SRCCollisionSector *pCollisionSector;  // in $s0
        SRCCollisionVertex *vertices;  // in $s1
        int numPolysIntersected;  // in $s0
        SRCCollisionTriangle collisionTri;  // $sp+80
        CollisionCallbackData SRCData;  // $sp+192
    }
}

// 0x00248930-0x0024937C (2636 bytes), lines 1857-2074
// _rpPS2CollBSPTreeForAllLineLeafNodeIntersections__FP13RpCollBSPTreeP11SRCCollLineP13RpV3dGradientPv
RpCollBSPTree *_rpPS2CollBSPTreeForAllLineLeafNodeIntersections(RpCollBSPTree *tree, SRCCollLine *pLine, RpV3dGradient *grad, void *data)
{
    // param RpCollBSPTree *tree  (in $s2)
    // param SRCCollLine *pLine  (in $v0)
    // param RpV3dGradient *grad  (in $s1)
    // param void *data  (in $s0)
    {   // 0x00248930-0x0024937C
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t4
        u_long128 start;  // in $t3
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t4
        u_long128 start;  // in $t3
        int _AsmTmp1;  // in $v0
        int _AsmTmp1;  // in $v0
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t4
        u_long128 start;  // in $t3
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t2
        u_long128 start;  // in $t1
        int _AsmTmp1;  // in $v0
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t2
        u_long128 start;  // in $t1
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t4
        u_long128 start;  // in $t3
        int _AsmTmp1;  // in $v0
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t2
        u_long128 start;  // in $t1
        unsigned int index;  // in $v0
        unsigned int type;  // in $v0
        u_long128 end;  // in $t2
        u_long128 start;  // in $t1
        unsigned int branchType;  // in $a1
        u_long128 *pDst;  // in $a1
        u_long128 *pSrc;  // in $v1
        RpCollBSPLeafNode *leaf;  // in $v0
        RwSplitBits rEnd;  // $sp+124
        RpCollBSPBranchNode *branch;  // in $a0
        RwSplitBits rStart;  // $sp+120
        RwV3d vLeft;  // $sp+96
        RwSplitBits lEnd;  // $sp+116
        RwV3d vRight;  // $sp+80
        RwSplitBits lStart;  // $sp+112
        RwV3d vTmp;  // $sp+64
    }
}

// 0x00249380-0x00249600 (640 bytes), lines 1618-1849
// _SRCLineCollisionCallback__FiiPv
static int _SRCLineCollisionCallback(int numPolygons, int polyOffset, void *data)
{
    // param int numPolygons  (in $s4)
    // param int polyOffset  (in $s3)
    // param void *data  (in $v0)
    {   // 0x00249380-0x00249600
        int result;  // in $v0
        SRCCollisionVertex *v2;  // in $v0
        SRCCollisionVertex *v1;  // in $v0
        SRCCollisionVertex *v0;  // in $v0
        SRCCollisionPoly *polygons;  // in $s2
        SRCCollisionVertex *vertices;  // in $s1
        CollisionCallbackData *pSRCData;  // in $s0
        SRCCollisionTriangle collisionTri;  // $sp+96
        RwV4d lConstants;  // $sp+208
    }
}

// 0x00249600-0x00249798 (408 bytes), lines 1180-1285
// IntersectLineWithNearCollisionUnits__14CStreamedWorldFUiP11SRCCollLinePFP11SRCCollLineP20SRCCollisionTrianglePv_iPv
int CStreamedWorld::IntersectLineWithNearCollisionUnits(unsigned int currentUnit, SRCCollLine *pLine, int (*fpCollisionLineCallback)(SRCCollLine *, SRCCollisionTriangle *, void *), void *pData)
{
    // param CStreamedWorld *this  (in $v0)
    // param unsigned int currentUnit  (in $v0)
    // param SRCCollLine *pLine  (in $v0)
    // param int (*fpCollisionLineCallback)(SRCCollLine *, SRCCollisionTriangle *, void *)  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x00249600-0x00249798
        RpV3dGradient grad;  // $sp+48
        CollisionCallbackData SRCData;  // $sp+16
    }
}

// 0x002497A0-0x00249850 (176 bytes), lines 1151-1165
// GetUnitOriginalID__14CStreamedWorldFi
int CStreamedWorld::GetUnitOriginalID(int lnUnit)
{
    // param CStreamedWorld *this  (in $v0)
    // param int lnUnit  (in $v0)
    {   // 0x002497A0-0x00249850
    }
}

// 0x00249850-0x00249890 (64 bytes), lines 1117-1135
// IsUnitVisible__14CStreamedWorldFi
int CStreamedWorld::IsUnitVisible(int lnUnit)
{
    // param CStreamedWorld *this  (in $v0)
    // param int lnUnit  (in $v0)
    {   // 0x00249850-0x00249890
    }
}

// 0x00249890-0x00249A14 (388 bytes), lines 1040-1100
// TestPosition__14CStreamedWorldFP5RwV3di
int CStreamedWorld::TestPosition(RwV3d *lpPos, int lnUnit)
{
    // param CStreamedWorld *this  (in $v0)
    // param RwV3d *lpPos  (in $v0)
    // param int lnUnit  (in $v0)
    {   // 0x00249890-0x00249A14
        int j;  // in $v0
        int i;  // in $v0
        int lbInside;  // in $t2
        float lrDotProd;  // optimised away
        PSWFastHull *lpHull;  // in $t0
    }
}

// 0x00249A20-0x00249CFC (732 bytes), lines 827-1003
// UpdateStream__14CStreamedWorldFv
int CStreamedWorld::UpdateStream()
{
    // param CStreamedWorld *this  (in $s3)
    {   // 0x00249A20-0x00249CFC
        int lnCoronaType;  // in $s2
        PSWStreamedUnit *lpUnit;  // in $s1
        int *lpLoadedState;  // in $v1
        int lbOK;  // in $s0
        EFileStatus lStatus;  // in $v0
    }
}

// 0x00249D00-0x00249F58 (600 bytes), lines 705-812
// FixUpStreamUnit__14CStreamedWorldFv
void CStreamedWorld::FixUpStreamUnit()
{
    // param CStreamedWorld *this  (in $v0)
    {   // 0x00249D00-0x00249F58
        int lnIndex;  // in $t0
        unsigned int lunFixupOffset;  // in $v1
        PSWStreamedUnit *lpFixupUnit;  // in $v0
    }
}

// 0x00249F60-0x0024A104 (420 bytes), lines 509-578
// RestartStream__14CStreamedWorldFv
void CStreamedWorld::RestartStream()
{
    // param CStreamedWorld *this  (in $s0)
    {   // 0x00249F60-0x0024A104
        int *lpLoadedState;  // in $v0
        EFileStatus status;  // in $v0
        int i;  // in $a1
    }
}

// 0x0024A110-0x0024A318 (520 bytes), lines 397-497
// Reset__14CStreamedWorldFv
int CStreamedWorld::Reset()
{
    // param CStreamedWorld *this  (in $s3)
    {   // 0x0024A110-0x0024A318
        int lnCoronaType;  // in $s1
        int i;  // in $s0
    }
}

// 0x0024A320-0x0024A3B4 (148 bytes), lines 353-385
// Shutdown__14CStreamedWorldFv
void CStreamedWorld::Shutdown()
{
    // param CStreamedWorld *this  (in $s0)
    {   // 0x0024A320-0x0024A3B4
        EFileStatus status;  // in $v0
    }
}

// 0x0024A3C0-0x0024A4F8 (312 bytes), lines 261-341
// Setup__14CStreamedWorldFPcPcii
void CStreamedWorld::Setup(char *lpacPathName, char *lpacFileName, int lb2Player, int lnStreamedWorldID)
{
    // param CStreamedWorld *this  (in $s0)
    // param char *lpacPathName  (in $v0)
    // param char *lpacFileName  (in $s1)
    // param int lb2Player  (in $v0)
    // param int lnStreamedWorldID  (in $v0)
    {   // 0x0024A3C0-0x0024A4F8
        int *pLoadedState;  // in $v1
        int i;  // in $a2
    }
}

// 0x0024A500-0x0024A508 (8 bytes), lines 233-233
// Init__14CStreamedWorldFv
void CStreamedWorld::Init()
{
    {   // 0x0024A500-0x0024A508
    }
}

