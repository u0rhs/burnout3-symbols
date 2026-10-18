// I:\Burnout 2 Code\gamesource\Hud\CHud.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
static unsigned int kaxDrivingLessonHUDFlags[6];  // 0x002B8F90
/* vtable */ void *CHudComponent::__vtable[];  // 0x0030F3C0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CMenuManager gMenuManager;  // 0x003B0E60
static CHudComponentSpeedo gComponentSpeedoP1;  // 0x00453130
static CHudComponentScore gComponentScoreP1;  // 0x00453160
static CHudComponentPos gComponentPosP1;  // 0x00453180
static CHudComponentCountdown gComponentCountdownP1;  // 0x004531A0
static CHudComponentMessage gComponentMessageP1;  // 0x004531E0
static CHudComponentSplitTimes gComponentSplitTimesP1;  // 0x00453240
static CHudComponentBurn gComponentBurnP1;  // 0x00453280
static CHudComponentBonus gComponentBonusP1;  // 0x004532A0
static CHudComponentLapHistory gComponentLapHistoryP1;  // 0x00453330
static CHudComponentIndicator gComponentIndicatorP1;  // 0x00453350
static CHudComponentSpeedo gComponentSpeedoP2;  // 0x00453380
static CHudComponentScore gComponentScoreP2;  // 0x004533B0
static CHudComponentPos gComponentPosP2;  // 0x004533D0
static CHudComponentCountdown gComponentCountdownP2;  // 0x004533F0
static CHudComponentMessage gComponentMessageP2;  // 0x00453430
static CHudComponentSplitTimes gComponentSplitTimesP2;  // 0x00453490
static CHudComponentBurn gComponentBurnP2;  // 0x004534D0
static CHudComponentBonus gComponentBonusP2;  // 0x004534F0
static CHudComponentLapHistory gComponentLapHistoryP2;  // 0x00453580
static CHudComponentIndicator gComponentIndicatorP2;  // 0x004535A0
static CHudComponentText gComponentText;  // 0x004535D0
static CHudComponentSeparator gComponentSeparator;  // 0x004535F0
static CHudComponentCrashDamageScore gComponentCrashDamageScore;  // 0x00453600
static CHudComponentCrashScore gComponentCrashScore;  // 0x00453D60
static CHudComponentCrashValue gComponentCrashValue;  // 0x00453E80
static CHudComponentLessonInfo gComponentLessonInfo;  // 0x00453ED0
static CHudComponentLapTimes gComponentLapTimes;  // 0x00453F30
static CHudComponentEscapeDistance gComponentEscapeDistanceP1;  // 0x00453F50
static CHudComponentEscapeDistance gComponentEscapeDistanceP2;  // 0x00454090
static CHudComponentHealth gComponentTargetHealthP1;  // 0x004541D0
static CHudComponentHealth gComponentTargetHealthP2;  // 0x004541F0
static CHudComponentTotalTime gComponentTotalTimeP1;  // 0x00454210
static CHudComponentTotalTime gComponentTotalTimeP2;  // 0x00454330

// ---- functions ----

// 0x001D8020-0x001D813C (284 bytes), lines 1834-1981
// Render__4CHudFv
void CHud::Render()
{
    // param CHud *this  (in $v0)
    {   // 0x001D8020-0x001D813C
        C2dFont *lpFont;  // in $s0
        RwRGBAReal lColour;  // $sp+320
        RwRGBAReal lBlackColour;  // $sp+304
        char lacString[256];  // $sp+48
    }
}

// 0x001D8140-0x001D81CC (140 bytes), lines 1785-1818
// Update__4CHudFv
void CHud::Update()
{
    // param CHud *this  (in $s1)
    {   // 0x001D8140-0x001D81CC
        int lnCount;  // in $s0
        float lrTimestep;  // optimised away
    }
}

// 0x001D81D0-0x001D8824 (1620 bytes), lines 1582-1767
// ResetTwoPlayerPursuit16_9__4CHudFv
float CHud::ResetTwoPlayerPursuit16_9()
{
    // param CHud *this  (in $s0)
    {   // 0x001D81D0-0x001D8824
        CRaceCar *lapRaceCars[2];  // $sp+40
    }
}

// 0x001D8830-0x001D8E8C (1628 bytes), lines 1385-1565
// ResetTwoPlayerPursuit__4CHudFv
float CHud::ResetTwoPlayerPursuit()
{
    // param CHud *this  (in $s0)
    {   // 0x001D8830-0x001D8E8C
        CRaceCar *lapRaceCars[2];  // $sp+40
    }
}

// 0x001D8E90-0x001D94F0 (1632 bytes), lines 1176-1368
// ResetTwoPlayerRace16_9__4CHudFv
float CHud::ResetTwoPlayerRace16_9()
{
    // param CHud *this  (in $s1)
    {   // 0x001D8E90-0x001D94F0
    }
}

// 0x001D94F0-0x001D9B50 (1632 bytes), lines 972-1160
// ResetTwoPlayerRace__4CHudFv
float CHud::ResetTwoPlayerRace()
{
    // param CHud *this  (in $s1)
    {   // 0x001D94F0-0x001D9B50
    }
}

// 0x001D9B50-0x001D9EA4 (852 bytes), lines 776-864
// ResetOnePlayerPursuit__4CHudFv
float CHud::ResetOnePlayerPursuit()
{
    // param CHud *this  (in $s0)
    {   // 0x001D9B50-0x001D9EA4
        CRaceCar *lapRaceCars[2];  // $sp+40
    }
}

// 0x001D9EB0-0x001D9FCC (284 bytes), lines 532-560
// ResetOnePlayerCrashDamages__4CHudFv
float CHud::ResetOnePlayerCrashDamages()
{
    // param CHud *this  (in $s1)
    {   // 0x001D9EB0-0x001D9FCC
    }
}

// 0x001D9FD0-0x001D9FFC (44 bytes), lines 354-358
// Clear__4CHudFv
void CHud::Clear()
{
    // param CHud *this  (in $s0)
    {   // 0x001D9FD0-0x001D9FFC
    }
}

// 0x001DA000-0x001DADFC (3580 bytes), lines 225-334
// Reset__4CHudFv
void CHud::Reset()
{
    // param CHud *this  (in $s2)
    {   // 0x001DA000-0x001DADFC
        RwV2d lScale;  // $sp+72
        EGameMode leGameMode;  // in $s0
    }
}

// 0x001DAE00-0x001DB02C (556 bytes), lines 153-208
// Initialise__4CHudFv
void CHud::Initialise()
{
    // param CHud *this  (in $s1)
    {   // 0x001DAE00-0x001DB02C
        int lnNumFX;  // $sp+60
        int lnNumObjects;  // $sp+56
        int lnNumFrames;  // $sp+52
        int lnNumLayers;  // $sp+48
        int lnCount;  // in $s0
    }
}

