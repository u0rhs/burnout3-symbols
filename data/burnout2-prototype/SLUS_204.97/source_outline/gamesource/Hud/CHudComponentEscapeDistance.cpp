// I:\Burnout 2 Code\gamesource\Hud\CHudComponentEscapeDistance.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourRed;  // 0x002C4E00
/* vtable */ void *CHudComponentEscapeDistance::__vtable[];  // 0x0030FA20
unsigned int CTimer::mnFrames;  // 0x00310894
CGame gGame;  // 0x003186E0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x00263040-0x0026310C (204 bytes), lines 244-268
// GetDistanceString__27CHudComponentEscapeDistanceFf
char *CHudComponentEscapeDistance::GetDistanceString(float lrDistance)
{
    // param CHudComponentEscapeDistance *this  (in $v0)
    // param float lrDistance  ($sp+64)
    {   // 0x00263040-0x0026310C
        char *lpcString;  // in $s0
    }
}

// 0x00263110-0x0026335C (588 bytes), lines 191-228
// Update__27CHudComponentEscapeDistanceFf
void CHudComponentEscapeDistance::Update()
{
    // param CHudComponentEscapeDistance *this  (in $s0)
    {   // 0x00263110-0x0026335C
        CScore *lpScore;  // in $s1
    }
}

// 0x00263360-0x002635F0 (656 bytes), lines 136-174
// Create__27CHudComponentEscapeDistanceFfffUiPv
int CHudComponentEscapeDistance::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentEscapeDistance *this  (in $s5)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  ($sp+128)
    // param void *lpData  (in $v0)
    {   // 0x00263360-0x002635F0
        CRaceCar **lppRaceCar;  // in $v0
        C2dFont *lpFont;  // in $s0
    }
}

// 0x002635F0-0x00263618 (40 bytes), lines 108-112
// IncrementCounts__27CHudComponentEscapeDistanceFPiPiPiPi
void CHudComponentEscapeDistance::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x002635F0-0x00263618
    }
}

// 0x00263620-0x00263690 (112 bytes), lines 68-86
// Initialise__27CHudComponentEscapeDistanceFii
void CHudComponentEscapeDistance::Initialise()
{
    // param CHudComponentEscapeDistance *this  (in $s0)
    {   // 0x00263620-0x00263690
        unsigned int lunText;  // in $v1
    }
}

