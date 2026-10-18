// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentCar.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void CarObjectRender(B22dObjectAnimatablesTag *);  // 0x001D31D0
RwRGBAReal kColourWhite;  // 0x002C4DD0
static CMenuImageData kaImageData[51];  // 0x002CB380
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CB6B0
static RwRGBAReal kColourBlueTrans;  // 0x002CB9E0
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentCar::__vtable[];  // 0x0030F340
CMenuGfxComponent *gpMenuGfxComponentCar;  // 0x003105A8
u_long128 *_rwDMAPktPtr;  // 0x003109BC
long skyZbuf_1;  // 0x003109F8
long skyFrame_1;  // 0x00310A00
long skyXyoffset_1;  // 0x00310A10
RwRaster *skyTextureRaster;  // 0x00310A88
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
CInput gInput;  // 0x00439880
unsigned int ourGlobals[4096];  // 0x004486D0
static CMenuGfxComponentCar gMenuGfxComponentCar;  // 0x004529B0

// ---- functions ----

// 0x001D26D0-0x001D26FC (44 bytes), lines 1808-1821
// SetData__20CMenuGfxComponentCarFPv
void CMenuGfxComponentCar::SetData(void *lpData)
{
    // param CMenuGfxComponentCar *this  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001D26D0-0x001D26FC
    }
}

// 0x001D2700-0x001D3078 (2424 bytes), lines 1451-1791
// Update__20CMenuGfxComponentCarFf
void CMenuGfxComponentCar::Update(float lrTimestep)
{
    // param CMenuGfxComponentCar *this  (in $s3)
    // param float lrTimestep  (optimised away)
    {   // 0x001D2700-0x001D3078
        float lrOneMinusInterp;  // optimised away
        float lrR2;  // $sp+96
        float lrR1;  // optimised away
        float lrRPressure;  // optimised away
        float lrL2;  // $sp+96
        float lrL1;  // optimised away
        float lrLPressure;  // optimised away
        float lrDist;  // optimised away
        float _result;  // optimised away
        float lrTargetAngle;  // optimised away
        float lrDisplacementSq;  // optimised away
        CControllerMapping *lpController;  // in $s0
    }
}

// 0x001D3080-0x001D31A8 (296 bytes), lines 1404-1435
// Reset__20CMenuGfxComponentCarFv
void CMenuGfxComponentCar::Reset()
{
    // param CMenuGfxComponentCar *this  (in $v0)
    {   // 0x001D3080-0x001D31A8
    }
}

// 0x001D31B0-0x001D31CC (28 bytes), lines 1379-1383
// IncrementCounts__20CMenuGfxComponentCarFPiPiPiPi
void CMenuGfxComponentCar::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001D31B0-0x001D31CC
    }
}

// 0x001D31D0-0x001D45EC (5148 bytes), lines 812-1358
// CarObjectRender__20CMenuGfxComponentCarFPC24B22dObjectAnimatablesTag
void CMenuGfxComponentCar::CarObjectRender(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001D31D0-0x001D45EC
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $a0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        RwV3d lLight;  // $sp+1080
        RwV3d lYAxis;  // $sp+1064
        float lrYOrigin;  // optimised away
        RwMatrixTag *lpCarMatrix;  // in $s1
        u_long128 ___ltmp;  // in $v0
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $a3
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v1
        u_long128 ___ltmp;  // in $v0
        u_long128 *_rwDMA_local_rwDMAPktPtr;  // in $v0
        int lnZ;  // in $s1
        int lnGSOffY;  // $sp+240
        int lnGSOffX;  // $sp+224
        RwRGBA lColourDarkGrey;  // $sp+1100
        RwV2d lViewOffset;  // $sp+1056
        RwV2d lViewWindow;  // $sp+1048
        RwV3d lAxis2;  // $sp+1032
        RwMatrixTag *lpCamMatrix;  // in $s3
        RwFrame *lpFrame;  // in $s1
        RwRGBA lColour;  // $sp+1096
        unsigned long long lTmp;  // in $a3
        RwRect lRect;  // $sp+336
        RwV2d lOldViewWindow;  // $sp+1024
        RwV2d lOldViewOffset;  // $sp+1016
        RwRaster *lpOldZRas;  // $sp+208
        RwRaster *lpOldRas;  // $sp+192
        RwCamera *lpCarCamera;  // in $s0
        RwCamera *lpOldCamera;  // $sp+176
        B22dObjectCustomDataCarTag *lpCarData;  // in $s5
    }
}

