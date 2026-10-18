// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentPanel.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderNull(B22dObjectAnimatablesTag *);  // 0x001AF2B0
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
void RenderBox(B22dObjectAnimatablesTag *);  // 0x001B0F70
void _RenderCarStatBarObject(B22dObjectAnimatablesTag *);  // 0x002614D0
CChampionshipStage CChampionshipProgression::_maChampionshipStages[22];  // 0x0029DDD0
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlack;  // 0x002C4DF0
RwRGBAReal kColourBlue;  // 0x002C4E10
static CMenuImageData kaImageData[51];  // 0x002D7350
static B22dTexAreaTag kaImageTexArea[51];  // 0x002D7680
static B22dTexAreaTag kFullImageTexArea;  // 0x002D79B0
static RwRGBAReal kColourBlueTrans;  // 0x002D79C0
static RwRGBAReal kColourMedalTrans;  // 0x002D79D0
static RwRGBAReal kFrameColourGrey;  // 0x002D79E0
static RwRGBAReal kFrameColourWhite;  // 0x002D79F0
static char *kapacNumberStrings[16];  // 0x002D7A80
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentPanel::__vtable[];  // 0x0030F9A0
C2dFX **C2dFXPipeline::_mpapCurrentFXList;  // 0x00310538
CMenuGfxComponent *gpMenuGfxComponentPanel;  // 0x00310688
int CSettings::_mbIsMetric;  // 0x00310CB8
CGame gGame;  // 0x003186E0
COnePlayerCRASH gOnePlayerCRASH;  // 0x003A7840
CMenuManager gMenuManager;  // 0x003B0E60
static CMenuGfxComponentPanel gMenuGfxComponentPanel;  // 0x004947D0

// ---- functions ----

// 0x0025E1C0-0x0025E50C (844 bytes), lines 1691-1723
// GetTrackSelectText__22CMenuGfxComponentPanelFv
void CMenuGfxComponentPanel::GetTrackSelectText()
{
    // param CMenuGfxComponentPanel *this  (in $s0)
    {   // 0x0025E1C0-0x0025E50C
        EStringID leWeatherStringID;  // in $s1
    }
}

// 0x0025E510-0x0025E608 (248 bytes), lines 1636-1676
// GetMedalTargetCrashTextAndColour__22CMenuGfxComponentPanelFPPC10RwRGBAReal
EMenuRaster CMenuGfxComponentPanel::GetMedalTargetCrashTextAndColour(RwRGBAReal **lppOutColour)
{
    // param CMenuGfxComponentPanel *this  (in $s1)
    // param RwRGBAReal **lppOutColour  (in $s0)
    {   // 0x0025E510-0x0025E608
        float lrThreshold;  // $sp+64
        int lnMedal;  // in $s2
    }
}

// 0x0025E610-0x0025E828 (536 bytes), lines 1537-1620
// GetMedalTargetLessonTextAndColour__22CMenuGfxComponentPanelFPPC10RwRGBAReali
EMenuRaster CMenuGfxComponentPanel::GetMedalTargetLessonTextAndColour(RwRGBAReal **lppOutColour, int lbAward)
{
    // param CMenuGfxComponentPanel *this  (in $s1)
    // param RwRGBAReal **lppOutColour  (in $s0)
    // param int lbAward  (in $s6)
    {   // 0x0025E610-0x0025E828
        ELessonMedal leMedal;  // in $v0
        ELessonObjective leLessonObjective;  // in $s3
        float lrThreshold;  // $sp+128
        int lnMedal;  // in $s2
    }
}

// 0x0025E830-0x0025E950 (288 bytes), lines 1360-1386
// MakeNumberString__22CMenuGfxComponentPanelFPcf
void CMenuGfxComponentPanel::MakeNumberString(char *lpacOutString, float lrNumber)
{
    // param char *lpacOutString  (in $s0)
    // param float lrNumber  ($sp+32)
    {   // 0x0025E830-0x0025E950
        unsigned int lunKil;  // in $v0
        unsigned int lunMil;  // in $a1
        unsigned int lunBil;  // in $v1
        unsigned int lunNum;  // in $v0
    }
}

// 0x0025E950-0x00260DB4 (9316 bytes), lines 708-1304
// InitObjects__22CMenuGfxComponentPanelFUi
void CMenuGfxComponentPanel::InitObjects(unsigned int lunPanel)
{
    // param CMenuGfxComponentPanel *this  (in $s4)
    // param unsigned int lunPanel  (in $v0)
    {   // 0x0025E950-0x00260DB4
        EMenuRaster leMenuRaster;  // in $v0
        B22dObjectCustomDataCarStatBarTag *lpBarData;  // in $v0
        B22dObjectCustomDataCarStatBarTag lRefBarData;  // $sp+240
        EStringID leHeadingString;  // in $a1
        float lrImageHeight;  // optimised away
        EStageID leStageID;  // in $a1
        EStringID leHeadingString;  // in $a0
        float lrImageHeight;  // optimised away
        float lrTextAlign;  // optimised away
        ETrackID leTrackID;  // in $v0
        CChampionshipStats lChampionshipStats;  // $sp+208
        EStageID leStageID;  // in $v0
        int lnNumObjects;  // in $t1
        RwRGBAReal *lpImageColour;  // $sp+284
        C2dFont *lpFont;  // in $s0
        int lnObject;  // in $t0
        float lrInHeight;  // optimised away
        float lrInWidth;  // optimised away
        float lrInBottomY;  // $sp+288
        float lrInTopY;  // optimised away
        float lrInRightX;  // optimised away
        float lrInLeftX;  // optimised away
    }
}

// 0x00260DC0-0x00260EB8 (248 bytes), lines 659-692
// CreatePanelObjects__22CMenuGfxComponentPanelFP10CMenuPanelUi
void CMenuGfxComponentPanel::CreatePanelObjects(unsigned int lunPanel)
{
    // param CMenuGfxComponentPanel *this  (in $s4)
    // param unsigned int lunPanel  (in $s3)
    {   // 0x00260DC0-0x00260EB8
        int lnNumObjects;  // in $s1
        int lnObject;  // in $s0
    }
}

// 0x00260EC0-0x00261250 (912 bytes), lines 561-642
// SetData__22CMenuGfxComponentPanelFPv
void CMenuGfxComponentPanel::SetData(void *lpData)
{
    // param CMenuGfxComponentPanel *this  (in $s1)
    // param void *lpData  (in $v0)
    {   // 0x00260EC0-0x00261250
        int lbInitControllers;  // in $s0
        int lnObject;  // in $s2
        CMenuPanel *lpPanel;  // in $s2
    }
}

// 0x00261250-0x00261458 (520 bytes), lines 509-545
// Update__22CMenuGfxComponentPanelFf
void CMenuGfxComponentPanel::Update(float lrTimestep)
{
    // param CMenuGfxComponentPanel *this  (in $s1)
    // param float lrTimestep  (optimised away)
    {   // 0x00261250-0x00261458
        B22dObjectCustomDataCarStatBarTag *lpBarData;  // in $s2
        int lnBar;  // in $s0
    }
}

// 0x00261460-0x00261498 (56 bytes), lines 484-493
// Reset__22CMenuGfxComponentPanelFv
void CMenuGfxComponentPanel::Reset()
{
    // param CMenuGfxComponentPanel *this  (in $v0)
    {   // 0x00261460-0x00261498
        int lnObject;  // in $a1
    }
}

// 0x002614A0-0x002614C8 (40 bytes), lines 461-465
// IncrementCounts__22CMenuGfxComponentPanelFPiPiPiPi
void CMenuGfxComponentPanel::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x002614A0-0x002614C8
    }
}

// 0x002614D0-0x00261750 (640 bytes), lines 393-440
// _RenderCarStatBarObject__FPC24B22dObjectAnimatablesTag
static void _RenderCarStatBarObject(B22dObjectAnimatablesTag *lpData)
{
    // param B22dObjectAnimatablesTag *lpData  (in $s0)
    {   // 0x002614D0-0x00261750
        float lrEmptyWidth;  // optimised away
        float lrFullWidth;  // optimised away
        float lrBorderY;  // optimised away
        float lrBorderX;  // optimised away
        B22dSpriteTag lSprite;  // $sp+176
        B22dObjectCustomDataCarStatBarTag *lpBarData;  // in $s1
    }
}

