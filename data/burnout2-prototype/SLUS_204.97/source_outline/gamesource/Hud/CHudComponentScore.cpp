// I:\Burnout 2 Code\gamesource\Hud\CHudComponentScore.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void _RenderScore(B22dObjectAnimatablesTag *);  // 0x001EA350
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
/* vtable */ void *CHudComponentScore::__vtable[];  // 0x0030F520
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001EA090-0x001EA0B8 (40 bytes), lines 290-291
// Update__18CHudComponentScoreFf
void CHudComponentScore::Update()
{
    // param CHudComponentScore *this  (in $v0)
    {   // 0x001EA090-0x001EA0B8
    }
}

// 0x001EA0C0-0x001EA330 (624 bytes), lines 224-270
// Create__18CHudComponentScoreFfffUiPv
int CHudComponentScore::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentScore *this  (in $s5)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $v0)
    {   // 0x001EA0C0-0x001EA330
        float lrHeight;  // $sp+144
        float lrWidth;  // optimised away
        float lrCommaWidth;  // optimised away
        float lrDigitWidth;  // optimised away
        C2dFont *lpFont;  // in $s0
    }
}

// 0x001EA330-0x001EA34C (28 bytes), lines 199-203
// IncrementCounts__18CHudComponentScoreFPiPiPiPi
void CHudComponentScore::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001EA330-0x001EA34C
    }
}

// 0x001EA350-0x001EA664 (788 bytes), lines 58-178
// _RenderScore__FPC24B22dObjectAnimatablesTag
static void _RenderScore(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001EA350-0x001EA664
        float lrOffsetY;  // optimised away
        float lrOffsetX;  // $sp+288
        int lnPass;  // in $s0
        char lacScoreString[20];  // $sp+256
        int lnRemaining;  // in $s5
        int lnCount;  // in $v0
        int lnDigit;  // in $a2
        int lnDecimal;  // in $v0
        B22dSpriteTag lSprite;  // $sp+192
        float lrWidthScale;  // optimised away
        C2dFont *lpFont;  // in $s6
        B22dObjectCustomDataScoreTag *lpScoreData;  // $sp+176
    }
}

