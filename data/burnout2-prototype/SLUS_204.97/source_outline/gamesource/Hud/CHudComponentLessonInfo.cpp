// I:\Burnout 2 Code\gamesource\Hud\CHudComponentLessonInfo.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourGreen;  // 0x002C4E30
static RwRGBAReal kColourGold;  // 0x002CF960
static RwRGBAReal kColourSilver;  // 0x002CF970
static RwRGBAReal kColourBronze;  // 0x002CF980
/* vtable */ void *CHudComponentLessonInfo::__vtable[];  // 0x0030F610
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001F6130-0x001F70F4 (4036 bytes), lines 360-650
// Update__23CHudComponentLessonInfoFf
void CHudComponentLessonInfo::Update()
{
    // param CHudComponentLessonInfo *this  (in $s0)
    {   // 0x001F6130-0x001F70F4
        float lrScore;  // optimised away
        int lnOverallScore;  // in $s2
        float lrGoldThreshold;  // optimised away
        float lrSilverThreshold;  // $sp+112
        float lrBronzeThreshold;  // optimised away
        int lnOverallScore;  // in $v0
        RwRGBAReal *lpColour;  // in $s1
        float lrOverallScore;  // $sp+112
    }
}

// 0x001F7100-0x001F7988 (2184 bytes), lines 129-344
// Create__23CHudComponentLessonInfoFfffUiPv
int CHudComponentLessonInfo::Create(float lrSize, unsigned int lnFlags, void *lpData)
{
    // param CHudComponentLessonInfo *this  (in $s3)
    // param float lrSize  (optimised away)
    // param unsigned int lnFlags  (in $s2)
    // param void *lpData  (in $v0)
    {   // 0x001F7100-0x001F7988
        int lnThreshold;  // in $v0
        CDrivingLesson *lpDrivingLesson;  // in $v0
        RwRGBAReal *lpColour;  // in $s5
        CScore *lpScore;  // in $s5
        C2dFont *lpFont;  // in $s4
    }
}

// 0x001F7990-0x001F79AC (28 bytes), lines 75-79
// IncrementCounts__23CHudComponentLessonInfoFPiPiPiPi
void CHudComponentLessonInfo::IncrementCounts(int *lpnLayerCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001F7990-0x001F79AC
    }
}

