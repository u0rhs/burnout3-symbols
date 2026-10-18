// I:\Burnout 2 Code\gamesource\Menu\CMenuPagePause.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CChampionshipStage CChampionshipProgression::_maChampionshipStages[22];  // 0x0029DDD0
static CMenuImageData kaImageData[51];  // 0x002C9120
static B22dTexAreaTag kaImageTexArea[51];  // 0x002C9450
static RwRGBAReal kColourBlueTrans;  // 0x002C9780
/* vtable */ void *CMenuPagePause::__vtable[];  // 0x0030F1E0
CMenuPage *gpMenuPagePause;  // 0x00310584
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
static CMenuPagePause gMenuPagePause;  // 0x004522B0

// ---- functions ----

// 0x001C9CA0-0x001CA3DC (1852 bytes), lines 894-1155
// ButtonConfirm__14CMenuPagePauseFv
int CMenuPagePause::ButtonConfirm()
{
    // param CMenuPagePause *this  (in $s2)
    {   // 0x001C9CA0-0x001CA3DC
        int lbAnalogButtons;  // in $s0
        int lbVibrate;  // in $v0
        int lbAnalogButtons;  // in $a3
        int lbVibrate;  // in $a1
        CScore *lpScore;  // in $v0
        CScore *lpScore;  // in $v0
        CScore *lpScore;  // in $v0
        CScore *lpScore;  // in $v0
    }
}

// 0x001CA3E0-0x001CA4B8 (216 bytes), lines 838-879
// SetRacePosition__14CMenuPagePauseFi
void CMenuPagePause::SetRacePosition(int lnRacePosition)
{
    // param int lnRacePosition  (in $s0)
    {   // 0x001CA3E0-0x001CA4B8
        int lnRacePositionCount;  // in $s2
        int lnCar;  // in $s1
    }
}

// 0x001CA4C0-0x001CA674 (436 bytes), lines 725-798
// SetConfirmationScreen__14CMenuPagePauseFv
int CMenuPagePause::SetConfirmationScreen()
{
    // param CMenuPagePause *this  (in $s1)
    {   // 0x001CA4C0-0x001CA674
        EStringID leConfirmationID;  // in $s2
    }
}

// 0x001CA680-0x001CAD30 (1712 bytes), lines 558-650
// Update__14CMenuPagePauseFf
void CMenuPagePause::Update()
{
    // param CMenuPagePause *this  (in $s0)
    {   // 0x001CA680-0x001CAD30
    }
}

// 0x001CAD30-0x001CAD58 (40 bytes), lines 538-542
// Leave__14CMenuPagePauseFv
void CMenuPagePause::Leave()
{
    {   // 0x001CAD30-0x001CAD58
    }
}

// 0x001CAD60-0x001CBC18 (3768 bytes), lines 364-523
// Enter__14CMenuPagePauseFv
void CMenuPagePause::Enter()
{
    // param CMenuPagePause *this  (in $s2)
    {   // 0x001CAD60-0x001CBC18
    }
}

// 0x001CBCC0-0x001CBDBC (252 bytes), lines 311-349
// Reset__14CMenuPagePauseFv
void CMenuPagePause::Reset()
{
    // param CMenuPagePause *this  (in $s0)
    {   // 0x001CBCC0-0x001CBDBC
        CMenuCarouselEntry *lpEntry;  // in $v0
    }
}

