// I:\Burnout 2 Code\gamesource\Race\CRacePosition.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourRed;  // 0x002C4E00
RwRGBAReal kColourYellow;  // 0x002C4E20
static RwRGBAReal kColourPursuitTargetHealthy;  // 0x002D5EC0
static RwRGBAReal kColourPursuitTargetMid;  // 0x002D5ED0
static RwRGBAReal kColourPursuitTargetCritical;  // 0x002D5EE0
static RwRGBAReal kColourPursuitTargetFlash;  // 0x002D5EF0
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CGhostCar gGhostCar;  // 0x00375C80
CRenderer gRenderer;  // 0x00434440
unsigned int ourGlobals[4096];  // 0x004486D0

// ---- functions ----

// 0x0023E3D0-0x0023E894 (1220 bytes), lines 465-598
// RenderArrow__13CRacePositionFPC5RwV3dPC10RwRGBAReal9EStringID
void CRacePosition::RenderArrow(RwV3d *lpPosition, RwRGBAReal *lpColour, EStringID leStringID)
{
    // param RwV3d *lpPosition  (in $v0)
    // param RwRGBAReal *lpColour  (in $s4)
    // param EStringID leStringID  (in $v0)
    {   // 0x0023E3D0-0x0023E894
        C2dFontChar *lpChar;  // in $v0
        float lrWidthScale;  // optimised away
        float lrScale;  // optimised away
        B22dSpriteTag lSprite;  // $sp+192
        C2dFont *lpFont;  // in $s0
        char *lpcString;  // in $v0
        float lrArrowWidth;  // optimised away
        float lrRecipZ;  // $sp+272
        float lrAspectRatio;  // optimised away
        float lrScreenHeight;  // optimised away
        float lrScreenWidth;  // optimised away
        RwV3d lPos;  // $sp+256
        RwCamera *lpCamera;  // in $s3
    }
}

// 0x0023E8A0-0x0023ED24 (1156 bytes), lines 295-457
// Draw__13CRacePositionFi
void CRacePosition::Draw(int camIndex)
{
    // param CRacePosition *this  (in $s3)
    // param int camIndex  (in $s2)
    {   // 0x0023E8A0-0x0023ED24
        int lbCrossedStartLine;  // in $a0
        float lrTime;  // $sp+160
        RwRGBAReal lColour;  // $sp+128
        float lrHealth;  // optimised away
        int lbRendering;  // in $s0
        int lnRacePosition;  // in $s4
        RwV3d lCarPosition;  // $sp+144
        int j;  // in $a0
        int i;  // in $s4
        CRaceCar **lppRaceCars;  // in $v0
    }
}

// 0x0023ED30-0x0023F0E0 (944 bytes), lines 121-287
// Update__13CRacePositionFv
void CRacePosition::Update()
{
    // param CRacePosition *this  (in $s5)
    {   // 0x0023ED30-0x0023F0E0
        RwMatrixTag *pMatrix;  // in $s1
        float lrMetricJ;  // $sp+144
        float lrMetricI;  // optimised away
        CRaceCar **lppRaceCars;  // in $v0
        int playerIndex;  // in $s0
        int numPlayerCars;  // in $s6
        RwV3d diff;  // $sp+128
        int racePosition;  // in $a2
        int renderOrder;  // in $a1
        int j;  // in $a1
        int i;  // in $a0
    }
}

// 0x0023F0E0-0x0023F120 (64 bytes), lines 84-94
// Reset__13CRacePositionFv
void CRacePosition::Reset()
{
    // param CRacePosition *this  (in $v0)
    {   // 0x0023F0E0-0x0023F120
        int i;  // in $a1
    }
}

// 0x0023F120-0x0023F128 (8 bytes), lines 75-75
// Setup__13CRacePositionFv
void CRacePosition::Setup()
{
    {   // 0x0023F120-0x0023F128
    }
}

// 0x0023F130-0x0023F138 (8 bytes), lines 68-68
// Init__13CRacePositionFv
int CRacePosition::Init()
{
    {   // 0x0023F130-0x0023F138
    }
}

