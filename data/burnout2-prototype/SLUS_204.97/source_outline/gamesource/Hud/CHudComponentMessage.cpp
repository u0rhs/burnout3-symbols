// I:\Burnout 2 Code\gamesource\Hud\CHudComponentMessage.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextItalicOutline(B22dObjectAnimatablesTag *);  // 0x001B0330
void _RenderFlamingText(B22dObjectAnimatablesTag *);  // 0x001E8E20
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlack;  // 0x002C4DF0
/* vtable */ void *CHudComponentMessage::__vtable[];  // 0x0030F4C0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0
CText gText;  // 0x0043B180

// ---- functions ----

// 0x001E8410-0x001E8C5C (2124 bytes), lines 359-554
// Update__20CHudComponentMessageFf
void CHudComponentMessage::Update(float lrTimestep)
{
    // param CHudComponentMessage *this  (in $s2)
    // param float lrTimestep  (optimised away)
    {   // 0x001E8410-0x001E8C5C
        CPlayerCarPhysics *lpPhysics;  // in $a0
        int lnBurnoutChain;  // in $a0
        char *lpcStrCpy;  // in $v1
        float lrWhoosh;  // optimised away
        char *lpcString;  // in $a1
        B22dObjectCustomDataFlamingTextTag *lpFlameData;  // in $v0
        CScore *lpScore;  // in $s0
    }
}

// 0x001E8D90-0x001E8DF4 (100 bytes), lines 320-342
// Create__20CHudComponentMessageFfffUiPv
int CHudComponentMessage::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentMessage *this  (in $v0)
    // param float lrPosX  ($sp+0)
    // param float lrPosY  ($sp+0)
    // param float lrSize  ($sp+0)
    // param unsigned int lnFlags  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001E8D90-0x001E8DF4
        CScore *lpScore;  // in $v0
    }
}

// 0x001E8E00-0x001E8E1C (28 bytes), lines 291-295
// IncrementCounts__20CHudComponentMessageFPiPiPiPi
void CHudComponentMessage::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001E8E00-0x001E8E1C
    }
}

// 0x001E8E20-0x001E9658 (2104 bytes), lines 67-270
// _RenderFlamingText__FPC24B22dObjectAnimatablesTag
static void _RenderFlamingText(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001E8E20-0x001E9658
        float lrRight;  // $sp+464
        float lrLeft;  // $sp+464
        B22dObjectCustomDataFlamingTextTag *lpFireData;  // in $s6
        float lrOLScaleY;  // optimised away
        float lrOLShearX;  // optimised away
        float lrOLScaleX;  // optimised away
        float lrOffsetY;  // $sp+464
        float lrOffsetX;  // optimised away
        int lnPass;  // in $s7
        float lrStepX;  // optimised away
        float lrShear;  // optimised away
        float lrScaleX;  // optimised away
        unsigned char *lpcString;  // in $v0
        C2dFont *lpFont;  // in $s5
        C2dFontChar *lpChar;  // in $v0
        B22dTriStripTag lTriStrip;  // $sp+192
        B22dObjectCustomDataTextTag *lpTextData;  // in $v0
    }
}

