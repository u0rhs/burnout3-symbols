// I:\Burnout 2 Code\gamesource\Menu\CMenuPageMemoryCard.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static char kacNameEntryChars[74];  // 0x002D3650
static CMenuImageData kaImageData[51];  // 0x002D36A0
static B22dTexAreaTag kaImageTexArea[51];  // 0x002D39D0
static RwRGBAReal kColourBlueTrans;  // 0x002D3D00
static char *kapacNumberStrings[16];  // 0x002D3D90
/* vtable */ void *CMenuPageMemoryCard::__vtable[];  // 0x0030F800
CMenuPage *gpMenuPageMemoryCard;  // 0x00310624
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
CMemoryCard gMemoryCard;  // 0x0043AC40
static CMenuPageMemoryCard gMenuPageMemoryCard;  // 0x00458660

// ---- functions ----

// 0x0020EEA0-0x0020F56C (1740 bytes), lines 1586-1819
// SetState__19CMenuPageMemoryCardF20EMemoryCardPageState
void CMenuPageMemoryCard::SetState(EMemoryCardPageState leNewState)
{
    // param CMenuPageMemoryCard *this  (in $s1)
    // param EMemoryCardPageState leNewState  (in $v0)
    {   // 0x0020EEA0-0x0020F56C
    }
}

// 0x0020F570-0x0020F640 (208 bytes), lines 1475-1539
// SetButtonList__19CMenuPageMemoryCardF16EButtonListState
void CMenuPageMemoryCard::SetButtonList(EButtonListState leButtonListState)
{
    // param CMenuPageMemoryCard *this  (in $v0)
    // param EButtonListState leButtonListState  (in $v0)
    {   // 0x0020F570-0x0020F640
        EMemoryCardPageState leStateSlotEmpty;  // in $t1
        int lnEntry;  // in $t3
    }
}

// 0x0020F640-0x0020F7C8 (392 bytes), lines 1379-1434
// UpdateMenuItems__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::UpdateMenuItems()
{
    // param CMenuPageMemoryCard *this  (in $v0)
    {   // 0x0020F640-0x0020F7C8
        CControllerMapping *lpController;  // in $a2
    }
}

// 0x0020F7D0-0x0020F974 (420 bytes), lines 1320-1364
// ShowNameEntryCarousel__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::ShowNameEntryCarousel()
{
    // param CMenuPageMemoryCard *this  (in $s1)
    {   // 0x0020F7D0-0x0020F974
        CProfile *lpProfile;  // in $v0
        CMenuCarouselEntry *lpEntry;  // in $v0
        unsigned int lunCharacter;  // in $a1
    }
}

// 0x0020F980-0x0020FAA4 (292 bytes), lines 1229-1269
// ShowProfileCarousel__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::ShowProfileCarousel()
{
    // param CMenuPageMemoryCard *this  (in $s2)
    {   // 0x0020F980-0x0020FAA4
        CMenuCarouselEntry *lpEntry;  // in $a1
        CProfile *lpLastUsedProfile;  // in $s1
        CProfile *lpProfile;  // in $v0
        unsigned int lunProfile;  // in $s0
    }
}

// 0x0020FAB0-0x0020FDF0 (832 bytes), lines 1128-1197
// ShowProfileSummary__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::ShowProfileSummary()
{
    // param CMenuPageMemoryCard *this  (in $s0)
    {   // 0x0020FAB0-0x0020FDF0
        int lnHours;  // in $s2
        int lnMinutes;  // in $s1
        CSavedGameStats lSavedGameStats;  // $sp+104
        CTimeAndDate lTimeAndDate;  // $sp+80
        CProfile *lpProfile;  // in $s1
    }
}

// 0x0020FDF0-0x0020FF50 (352 bytes), lines 1052-1096
// ShowMessage__19CMenuPageMemoryCardF9EStringID
void CMenuPageMemoryCard::ShowMessage(EStringID leStringID)
{
    // param CMenuPageMemoryCard *this  (in $s2)
    // param EStringID leStringID  (in $s0)
    {   // 0x0020FDF0-0x0020FF50
        char *lpcString;  // in $s0
    }
}

// 0x0020FF50-0x00210284 (820 bytes), lines 833-1036
// UpdateMemoryCardState__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::UpdateMemoryCardState()
{
    // param CMenuPageMemoryCard *this  (in $s1)
    {   // 0x0020FF50-0x00210284
        EMemoryCardState leMemoryCardState;  // in $v0
    }
}

// 0x00210290-0x002109D8 (1864 bytes), lines 539-818
// Update__19CMenuPageMemoryCardFf
void CMenuPageMemoryCard::Update()
{
    // param CMenuPageMemoryCard *this  (in $s0)
    {   // 0x00210290-0x002109D8
        char lcChar;  // in $a0
        unsigned int lunStrlen;  // in $s1
        int lnCurrentEntry;  // in $v0
        CProfile *lpProfile;  // in $v0
        int lbConfirm;  // in $s4
        EMemoryCardPageState leStateSlotUsed;  // in $s3
        EMemoryCardPageState leStateSlotEmpty;  // in $s2
        CControllerMapping *lpController;  // in $s1
    }
}

// 0x002109E0-0x002109E8 (8 bytes), lines 523-523
// Leave__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::Leave()
{
    {   // 0x002109E0-0x002109E8
    }
}

// 0x002109F0-0x00210C80 (656 bytes), lines 436-507
// Enter__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::Enter()
{
    // param CMenuPageMemoryCard *this  (in $s1)
    {   // 0x002109F0-0x00210C80
    }
}

// 0x00210C80-0x00210CA8 (40 bytes), lines 415-421
// Reset__19CMenuPageMemoryCardFv
void CMenuPageMemoryCard::Reset()
{
    // param CMenuPageMemoryCard *this  (in $v0)
    {   // 0x00210C80-0x00210CA8
    }
}

