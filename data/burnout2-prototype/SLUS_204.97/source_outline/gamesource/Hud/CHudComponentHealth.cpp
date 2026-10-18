// I:\Burnout 2 Code\gamesource\Hud\CHudComponentHealth.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void _RenderHealth(B22dObjectAnimatablesTag *);  // 0x00262660
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
static CMenuImageData kaImageData[51];  // 0x002D7BC0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002D7EF0
static RwRGBAReal kColourBlueTrans;  // 0x002D8220
/* vtable */ void *CHudComponentHealth::__vtable[];  // 0x0030F9E0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x002621B0-0x002623D4 (548 bytes), lines 211-267
// Update__19CHudComponentHealthFf
void CHudComponentHealth::Update(float lrTimestep)
{
    // param CHudComponentHealth *this  (in $s0)
    // param float lrTimestep  (optimised away)
    {   // 0x002621B0-0x002623D4
        float lrTime;  // $sp+48
        CRaceCar *lpRaceCar;  // in $v1
    }
}

// 0x002623E0-0x00262638 (600 bytes), lines 162-196
// Create__19CHudComponentHealthFfffUiPv
int CHudComponentHealth::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentHealth *this  (in $s5)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param unsigned int lnFlags  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x002623E0-0x00262638
        C2dFont *lpFont;  // in $s0
        EStringID leStringID;  // in $s1
    }
}

// 0x00262640-0x0026265C (28 bytes), lines 139-143
// IncrementCounts__19CHudComponentHealthFPiPiPiPi
void CHudComponentHealth::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x00262640-0x0026265C
    }
}

// 0x00262660-0x00262910 (688 bytes), lines 65-118
// _RenderHealth__FPC24B22dObjectAnimatablesTag
static void _RenderHealth(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $v0)
    {   // 0x00262660-0x00262910
        float lrFlash;  // optimised away
        int lnCount;  // in $s1
        float lrXStep;  // optimised away
        float lrSegmentWidth;  // optimised away
        B22dSpriteTag lSprite;  // $sp+160
        B22dObjectCustomDataHealthTag *lpHealthData;  // in $s0
    }
}

