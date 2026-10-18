// I:\Burnout 2 Code\gamesource\Menu\CMenuPageChampionshipSelect.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CChampionshipStage CChampionshipProgression::_maChampionshipStages[22];  // 0x0029DDD0
static int _ganStageIDToCarouselEntry[22];  // 0x002B8EF0
static CMenuImageData kaImageData[51];  // 0x002CA520
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CA850
static B22dBoxTag kMenuPanelStandardBox;  // 0x002CAB80
static RwRGBAReal kColourBlueTrans;  // 0x002CAB90
CChampSelectStageData CMenuPageChampionshipSelect::maChampSelectStageData[22];  // 0x002CABA0
/* vtable */ void *CMenuPageChampionshipSelect::__vtable[];  // 0x0030F2A0
CMenuPage *gpMenuPageChampionshipSelect;  // 0x00310598
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
static CMenuPageChampionshipSelect gMenuPageChampionshipSelect;  // 0x00452610

// ---- functions ----

// 0x001D0310-0x001D04CC (444 bytes), lines 657-687
// UpdateStageDisplay__27CMenuPageChampionshipSelectFv
void CMenuPageChampionshipSelect::UpdateStageDisplay()
{
    // param CMenuPageChampionshipSelect *this  (in $v0)
    {   // 0x001D0310-0x001D04CC
        EStageID leStage;  // in $s0
    }
}

// 0x001D04D0-0x001D06A0 (464 bytes), lines 520-569
// SetCarousel__27CMenuPageChampionshipSelectFP13CMenuCarouselP18CMenuCarouselEntryii
void CMenuPageChampionshipSelect::SetCarousel(CMenuCarousel *lpCarousel, CMenuCarouselEntry *lpaCarouselEntries, int lnFirstStage, int lnLastStage)
{
    // param CMenuCarousel *lpCarousel  (in $v0)
    // param CMenuCarouselEntry *lpaCarouselEntries  (in $v0)
    // param int lnFirstStage  (in $v0)
    // param int lnLastStage  (in $v0)
    {   // 0x001D04D0-0x001D06A0
        int lnLastUnlockedEntry;  // in $t4
        int lnEntry;  // in $t3
        int lnStage;  // in $v0
        CMenuCarouselEntry *lpCarouselEntry;  // in $t2
    }
}

// 0x001D06A0-0x001D0ED4 (2100 bytes), lines 366-501
// Update__27CMenuPageChampionshipSelectFf
void CMenuPageChampionshipSelect::Update()
{
    // param CMenuPageChampionshipSelect *this  (in $s4)
    {   // 0x001D06A0-0x001D0ED4
        EStageID leStage;  // in $s0
        int lbContinueStage;  // in $s1
        int lbStartStage;  // in $s0
        CControllerMapping *lpController;  // in $v1
    }
}

// 0x001D0EE0-0x001D0EE8 (8 bytes), lines 350-350
// Leave__27CMenuPageChampionshipSelectFv
void CMenuPageChampionshipSelect::Leave()
{
    {   // 0x001D0EE0-0x001D0EE8
    }
}

// 0x001D0EF0-0x001D0FFC (268 bytes), lines 332-334
// Enter__27CMenuPageChampionshipSelectFv
void CMenuPageChampionshipSelect::Enter()
{
    // param CMenuPageChampionshipSelect *this  (in $s0)
    {   // 0x001D0EF0-0x001D0FFC
    }
}

// 0x001D1000-0x001D1144 (324 bytes), lines 277-317
// Reset__27CMenuPageChampionshipSelectFv
void CMenuPageChampionshipSelect::Reset()
{
    // param CMenuPageChampionshipSelect *this  (in $s0)
    {   // 0x001D1000-0x001D1144
        CMenuCarouselEntry *lpEntry;  // in $v0
    }
}

