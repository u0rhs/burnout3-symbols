// I:\Burnout 2 Code\gamesource\Menu\CMenuPageCredits.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static char *kapcCreditText[163];  // 0x002BBA10
RwRGBAReal kColourWhite;  // 0x002C4DD0
RwRGBAReal kColourRed;  // 0x002C4E00
static RwRGBAReal kColourRed2;  // 0x002DCC20
static RwV2d kCreditPos;  // 0x002DCC30
/* vtable */ void *CMenuGfxComponentSummaryText::__vtable[];  // 0x0030FA40
/* vtable */ void *CMenuGfxComponentSummaryItem::__vtable[];  // 0x0030FAE8
/* vtable */ void *CMenuPageCredits::__vtable[];  // 0x0030FC60
CMenuPage *gpMenuPageCredits;  // 0x00310730
CMenuManager gMenuManager;  // 0x003B0E60
CInput gInput;  // 0x00439880
static CMenuPageCredits gMenuPageCredits;  // 0x004A3BA0

// ---- functions ----

// 0x0027E930-0x0027ECD4 (932 bytes), lines 362-526
// CreateCreditText__16CMenuPageCreditsFv
void CMenuPageCredits::CreateCreditText()
{
    // param CMenuPageCredits *this  (in $s6)
    {   // 0x0027E930-0x0027ECD4
        C2dObject *lpObject;  // in $v0
        CMenuGfxComponentSummary *lpComponent;  // in $s0
        CMenuGfxComponentSummaryItem *lapSummaryItem[121];  // $sp+7408
        CMenuGfxComponentSummaryText laSummaryText[120];  // $sp+208
        RwRGBAReal *lpTextColour;  // in $s5
        float lrTextSize;  // optimised away
        RwV2d lTextPos;  // $sp+7912
        RwV2d lAlignment;  // $sp+7904
        char lcColourNumber;  // in $fp
        char lcColourCode;  // in $s7
        char *lpcNewString;  // in $s4
        char *lpcCreditText;  // in $s3
        unsigned int lunNumOfLines;  // in $s2
        unsigned int lunEndOfBuffer;  // in $s1
        unsigned int lunItem;  // in $s0
        unsigned int lunText;  // $sp+176
    }
}

// 0x0027ECE0-0x0027ED44 (100 bytes), lines 334-345
// Update__16CMenuPageCreditsFv
void CMenuPageCredits::Update()
{
    // param CMenuPageCredits *this  (in $v0)
    {   // 0x0027ECE0-0x0027ED44
        CControllerMapping *lpController;  // in $a1
    }
}

// 0x0027ED50-0x0027ED68 (24 bytes), lines 312-316
// Leave__16CMenuPageCreditsFv
void CMenuPageCredits::Leave()
{
    // param CMenuPageCredits *this  (in $v0)
    {   // 0x0027ED50-0x0027ED68
    }
}

// 0x0027ED70-0x0027EE1C (172 bytes), lines 269-294
// Enter__16CMenuPageCreditsFv
void CMenuPageCredits::Enter()
{
    // param CMenuPageCredits *this  (in $s1)
    {   // 0x0027ED70-0x0027EE1C
        CMenuGfxComponentSummary *lpComponent;  // in $v0
    }
}

// 0x0027EE20-0x0027EE58 (56 bytes), lines 244-249
// Reset__16CMenuPageCreditsFv
void CMenuPageCredits::Reset()
{
    // param CMenuPageCredits *this  (in $s0)
    {   // 0x0027EE20-0x0027EE58
    }
}

