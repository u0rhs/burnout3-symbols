// I:\Burnout 2 Code\gamesource\Hud\CHudComponentBonus.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _RenderStat(B22dObjectAnimatablesTag *);  // 0x001E4FD0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourYellow;  // 0x002C4E20
/* vtable */ void *CHudComponentBonus::__vtable[];  // 0x0030F460
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
int CSettings::_mbIsMetric;  // 0x00310CB8
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x001E4180-0x001E4E0C (3212 bytes), lines 491-667
// Update__18CHudComponentBonusFf
void CHudComponentBonus::Update(float lrTimestep)
{
    // param CHudComponentBonus *this  (in $s3)
    // param float lrTimestep  (optimised away)
    {   // 0x001E4180-0x001E4E0C
        int lbLOR;  // in $v0
        CScore *lpScore;  // in $s4
    }
}

// 0x001E4E10-0x001E4F94 (388 bytes), lines 422-474
// Create__18CHudComponentBonusFfffUiPv
int CHudComponentBonus::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentBonus *this  (in $s0)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param unsigned int lnFlags  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001E4E10-0x001E4F94
    }
}

// 0x001E4FA0-0x001E4FC8 (40 bytes), lines 396-400
// IncrementCounts__18CHudComponentBonusFPiPiPiPi
void CHudComponentBonus::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001E4FA0-0x001E4FC8
    }
}

// 0x001E4FD0-0x001E556C (1436 bytes), lines 81-227
// _RenderStat__FPC24B22dObjectAnimatablesTag
static void _RenderStat(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001E4FD0-0x001E556C
        int lnPass;  // in $s6
        float lrOffY;  // optimised away
        float lrOffX;  // $sp+256
        float lrOutlineOffsetY;  // optimised away
        float lrOutlineOffsetX;  // optimised away
        int lnDigit;  // in $a0
        int lnDecimal;  // in $v0
        C2dFontChar *lpFontChar;  // in $v0
        unsigned char *lpcChar;  // in $v0
        B22dSpriteTag lSprite;  // $sp+192
        float lrWidthScale;  // optimised away
        C2dFont *lpFont;  // in $s5
        B22dObjectCustomDataStatTag *lpStatData;  // in $s7
    }
}

