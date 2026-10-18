// I:\Burnout 2 Code\gamesource\Hud\CHudComponentCrashDamageScore.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourYellow;  // 0x002C4E20
static RwV2d kImageOffsetPos;  // 0x002D7B80
static RwV2d kImageSize;  // 0x002D7B88
/* vtable */ void *CHudComponentCrashDamageScore::__vtable[];  // 0x0030F9C0
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x00261750-0x00261898 (328 bytes), lines 529-562
// CreatePopUp__29CHudComponentCrashDamageScoreFPcf
void CHudComponentCrashDamageScore::CreatePopUp(char *lpcCarTitle, float lrCrashValue)
{
    // param CHudComponentCrashDamageScore *this  (in $s2)
    // param char *lpcCarTitle  (in $s1)
    // param float lrCrashValue  (optimised away)
    {   // 0x00261750-0x00261898
        unsigned int lunPopUp;  // in $a2
        RwV2d lAlignment;  // $sp+104
        RwV2d lPos;  // $sp+96
    }
}

// 0x002618A0-0x00261C68 (968 bytes), lines 310-471
// Update__29CHudComponentCrashDamageScoreFf
void CHudComponentCrashDamageScore::Update(float lrTimeStep)
{
    // param CHudComponentCrashDamageScore *this  (in $s4)
    // param float lrTimeStep  (optimised away)
    {   // 0x002618A0-0x00261C68
        float lrCrashValue;  // $sp+192
        unsigned int lunNumCrashingCars;  // in $fp
        int lnCarID;  // in $v1
        int lbIncreaseBonus;  // in $s7
        char *lpcString;  // in $v0
        CScore *lpScore;  // in $s2
        C2dObject *lpObject;  // in $s1
        float lrCostDiff;  // optimised away
        float lrPosY;  // $sp+192
        float lrPosX;  // $sp+192
        unsigned int lunTime;  // in $v0
        unsigned int lunPopUp;  // in $s0
    }
}

// 0x00261C70-0x0026201C (940 bytes), lines 235-292
// Create__29CHudComponentCrashDamageScoreFfffUiPv
int CHudComponentCrashDamageScore::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentCrashDamageScore *this  (in $s0)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $s2)
    {   // 0x00261C70-0x0026201C
        RwV2d lAlignment;  // $sp+200
        RwV2d lPos;  // $sp+192
    }
}

// 0x00262020-0x00262048 (40 bytes), lines 210-214
// IncrementCounts__29CHudComponentCrashDamageScoreFPiPiPiPi
void CHudComponentCrashDamageScore::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x00262020-0x00262048
    }
}

// 0x00262050-0x002620F8 (168 bytes), lines 147-188
// Reset__29CHudComponentCrashDamageScoreFv
void CHudComponentCrashDamageScore::Reset()
{
    // param CHudComponentCrashDamageScore *this  (in $s0)
    {   // 0x00262050-0x002620F8
        unsigned int lunPopUp;  // in $a0
        unsigned int lunText;  // in $s1
    }
}

// 0x00262100-0x002621AC (172 bytes), lines 102-130
// Initialise__29CHudComponentCrashDamageScoreFii
void CHudComponentCrashDamageScore::Initialise(int lnLayer)
{
    // param CHudComponentCrashDamageScore *this  (in $s0)
    // param int lnLayer  (in $v0)
    {   // 0x00262100-0x002621AC
        unsigned int lunPopUp;  // in $a0
        unsigned int lunText;  // in $s1
    }
}

