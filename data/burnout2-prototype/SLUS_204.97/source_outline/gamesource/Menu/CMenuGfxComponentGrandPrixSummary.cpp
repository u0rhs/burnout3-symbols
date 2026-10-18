// I:\Burnout 2 Code\gamesource\Menu\CMenuGfxComponentGrandPrixSummary.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderNull(B22dObjectAnimatablesTag *);  // 0x001AF2B0
void RenderTextOutline(B22dObjectAnimatablesTag *);  // 0x001B07A0
void RenderText(B22dObjectAnimatablesTag *);  // 0x001B0A40
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
CChampionshipStage CChampionshipProgression::_maChampionshipStages[22];  // 0x0029DDD0
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourBlue;  // 0x002C4E10
static CMenuImageData kaImageData[51];  // 0x002CAD00
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CB030
static RwRGBAReal kColourBlueTrans;  // 0x002CB360
/* vtable */ void *CMenuGfxComponent::__vtable[];  // 0x0030F0C0
/* vtable */ void *CMenuGfxComponentGrandPrixSummary::__vtable[];  // 0x0030F2C0
CMenuGfxComponent *gpMenuGfxComponentGrandPrixSummary;  // 0x0031059C
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
static CMenuGfxComponentGrandPrixSummary gMenuGfxComponentGrandPrixSummary;  // 0x004528C0

// ---- functions ----

// 0x001D1530-0x001D1600 (208 bytes), lines 517-541
// Destroy__33CMenuGfxComponentGrandPrixSummaryFv
void CMenuGfxComponentGrandPrixSummary::Destroy()
{
    // param CMenuGfxComponentGrandPrixSummary *this  (in $s3)
    {   // 0x001D1530-0x001D1600
        int lnObject;  // in $s1
        int lnTrack;  // in $s0
    }
}

// 0x001D1600-0x001D1B80 (1408 bytes), lines 404-502
// InitObjects__33CMenuGfxComponentGrandPrixSummaryFv
void CMenuGfxComponentGrandPrixSummary::InitObjects()
{
    // param CMenuGfxComponentGrandPrixSummary *this  (in $s4)
    {   // 0x001D1600-0x001D1B80
        int lnButtonImage;  // $sp+192
        ETrackID leTrackID;  // in $v0
        RwRGBAReal *lpTextColour;  // in $s6
        C2dFont *lpFont;  // $sp+176
        float lrPosY;  // optimised away
        int lnObject;  // in $a2
        int lnTrack;  // in $s5
    }
}

// 0x001D1B80-0x001D1EF4 (884 bytes), lines 351-389
// Create__33CMenuGfxComponentGrandPrixSummaryFv
void CMenuGfxComponentGrandPrixSummary::Create()
{
    // param CMenuGfxComponentGrandPrixSummary *this  (in $s3)
    {   // 0x001D1B80-0x001D1EF4
        int lnTrack;  // in $s0
    }
}

// 0x001D1F00-0x001D1F78 (120 bytes), lines 310-336
// SetData__33CMenuGfxComponentGrandPrixSummaryFPv
void CMenuGfxComponentGrandPrixSummary::SetData(void *lpData)
{
    // param CMenuGfxComponentGrandPrixSummary *this  (in $s1)
    // param void *lpData  (in $v0)
    {   // 0x001D1F00-0x001D1F78
        EStageID *lpeStage;  // in $s0
    }
}

// 0x001D1F80-0x001D2154 (468 bytes), lines 234-294
// Update__33CMenuGfxComponentGrandPrixSummaryFf
void CMenuGfxComponentGrandPrixSummary::Update(float lrTimestep)
{
    // param CMenuGfxComponentGrandPrixSummary *this  (in $s3)
    // param float lrTimestep  (optimised away)
    {   // 0x001D1F80-0x001D2154
        int lbScrollDown;  // in $v0
        int lbScrollUp;  // in $s0
        CControllerMapping *lpController;  // in $a2
    }
}

// 0x001D2160-0x001D21C8 (104 bytes), lines 200-218
// Reset__33CMenuGfxComponentGrandPrixSummaryFv
void CMenuGfxComponentGrandPrixSummary::Reset()
{
    // param CMenuGfxComponentGrandPrixSummary *this  (in $v0)
    {   // 0x001D2160-0x001D21C8
        int lnObject;  // in $a3
        int lnTrack;  // in $a2
    }
}

// 0x001D21D0-0x001D21F8 (40 bytes), lines 176-180
// IncrementCounts__33CMenuGfxComponentGrandPrixSummaryFPiPiPiPi
void CMenuGfxComponentGrandPrixSummary::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001D21D0-0x001D21F8
    }
}

