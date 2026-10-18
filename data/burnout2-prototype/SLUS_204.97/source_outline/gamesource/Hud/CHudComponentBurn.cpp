// I:\Burnout 2 Code\gamesource\Hud\CHudComponentBurn.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void _RenderBurn(B22dObjectAnimatablesTag *);  // 0x001E3A80
RwRGBAReal kColourWhite;  // 0x002C4DD0
static B22dTexAreaTag kTexAreaBurnBar;  // 0x002CCBA0
static B22dTexAreaTag kTexAreaBurnMask;  // 0x002CCBB0
static RwRGBAReal kColourBurnLeft;  // 0x002CCBC0
static RwRGBAReal kColourBurnMid;  // 0x002CCBD0
static RwRGBAReal kColourBurnRight;  // 0x002CCBE0
/* vtable */ void *CHudComponentBurn::__vtable[];  // 0x0030F440
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
CGameSound gSound;  // 0x004391D0

// ---- functions ----

// 0x001E3670-0x001E3918 (680 bytes), lines 387-476
// Update__17CHudComponentBurnFf
void CHudComponentBurn::Update(float lrTimestep)
{
    // param CHudComponentBurn *this  (in $s0)
    // param float lrTimestep  ($sp+48)
    {   // 0x001E3670-0x001E3918
        CScore *lpScore;  // in $v1
    }
}

// 0x001E3920-0x001E3A5C (316 bytes), lines 338-371
// Create__17CHudComponentBurnFfffUiPv
int CHudComponentBurn::Create(float lrPosX, float lrPosY, float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentBurn *this  (in $s0)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  ($sp+48)
    // param unsigned int lnFlags  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001E3920-0x001E3A5C
        float lrHeight;  // optimised away
        float lrWidth;  // optimised away
    }
}

// 0x001E3A60-0x001E3A7C (28 bytes), lines 312-316
// IncrementCounts__17CHudComponentBurnFPiPiPiPi
void CHudComponentBurn::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001E3A60-0x001E3A7C
    }
}

// 0x001E3A80-0x001E4174 (1780 bytes), lines 88-291
// _RenderBurn__FPC24B22dObjectAnimatablesTag
static void _RenderBurn(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s4)
    {   // 0x001E3A80-0x001E4174
        float lrX2;  // $sp+768
        float lrX0;  // optimised away
        B22dTriStripTag lTriStrip;  // $sp+496
        float lrInterp;  // optimised away
        B22dTriStripTag lTriStrip;  // $sp+224
        float lrWhooshX;  // $sp+768
        float lrBurnX;  // optimised away
        B22dSpriteTag lSprite;  // $sp+160
        B22dObjectCustomDataBurnTag *lpBurnData;  // in $s0
    }
}

