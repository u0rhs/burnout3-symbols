// I:\Burnout 2 Code\gamesource\Hud\CHudComponentTotalTime.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderTextDropShadow(B22dObjectAnimatablesTag *);  // 0x00262910
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
/* vtable */ void *CHudComponentTotalTime::__vtable[];  // 0x0030FA00
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x00262910-0x00262C38 (808 bytes), lines 260-383
// RenderTextDropShadow__22CHudComponentTotalTimeFPC24B22dObjectAnimatablesTag
void CHudComponentTotalTime::RenderTextDropShadow(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x00262910-0x00262C38
        float lrDashPadding;  // optimised away
        float lrOffsetY;  // optimised away
        float lrOffsetX;  // optimised away
        int lnPass;  // in $s5
        B22dObjectCustomDataTextTag *lpTextData;  // in $s7
        float lrScaleX;  // optimised away
        unsigned char *lpcString;  // in $v0
        C2dFont *lpFont;  // in $s0
        C2dFontChar *lpChar;  // in $v0
        B22dSpriteTag lSprite;  // $sp+192
    }
}

// 0x00262C40-0x00262D40 (256 bytes), lines 210-241
// GetTimeString__22CHudComponentTotalTimeFf
char *CHudComponentTotalTime::GetTimeString(float lrTime)
{
    // param CHudComponentTotalTime *this  (in $v0)
    // param float lrTime  (optimised away)
    {   // 0x00262C40-0x00262D40
        char *lpcString;  // in $s1
        unsigned int lunPoint;  // in $v0
        unsigned int lunSeconds;  // in $s0
        unsigned int lunMinutes;  // in $v0
    }
}

// 0x00262D40-0x00262D94 (84 bytes), lines 178-194
// Update__22CHudComponentTotalTimeFf
void CHudComponentTotalTime::Update()
{
    // param CHudComponentTotalTime *this  (in $v0)
    {   // 0x00262D40-0x00262D94
    }
}

// 0x00262DA0-0x00262FE0 (576 bytes), lines 130-162
// Create__22CHudComponentTotalTimeFfffUiPv
int CHudComponentTotalTime::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentTotalTime *this  (in $s5)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $v0)
    {   // 0x00262DA0-0x00262FE0
        float lrHeight;  // optimised away
        C2dFont *lpFont;  // in $s0
    }
}

// 0x00262FE0-0x00262FFC (28 bytes), lines 104-108
// IncrementCounts__22CHudComponentTotalTimeFPiPiPiPi
void CHudComponentTotalTime::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x00262FE0-0x00262FFC
    }
}

// 0x00263000-0x00263040 (64 bytes), lines 75-82
// Initialise__22CHudComponentTotalTimeFii
void CHudComponentTotalTime::Initialise(int lnLayer)
{
    // param CHudComponentTotalTime *this  (in $s0)
    // param int lnLayer  (in $v0)
    {   // 0x00263000-0x00263040
    }
}

