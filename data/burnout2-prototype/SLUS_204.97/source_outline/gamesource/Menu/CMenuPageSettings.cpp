// I:\Burnout 2 Code\gamesource\Menu\CMenuPageSettings.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
/* vtable */ void *CMenuPageSettings::__vtable[];  // 0x0030F960
ECheat CChampionshipProgression::_meActiveCheat;  // 0x00310300
CMenuPage *gpMenuPageSettings;  // 0x00310680
CGame gGame;  // 0x003186E0
CMenuManager gMenuManager;  // 0x003B0E60
CGameSound gSound;  // 0x004391D0
CInput gInput;  // 0x00439880
static CMenuPageSettings gMenuPageSettings;  // 0x00494350

// ---- functions ----

// 0x0025ABD0-0x0025ACAC (220 bytes), lines 866-928
// ButtonConfirm__17CMenuPageSettingsFv
unsigned int CMenuPageSettings::ButtonConfirm()
{
    // param CMenuPageSettings *this  (in $v0)
    {   // 0x0025ABD0-0x0025ACAC
        unsigned int lunController;  // in $a0
        CControllerMapping *lpController;  // in $v1
    }
}

// 0x0025ACB0-0x0025AE60 (432 bytes), lines 743-818
// StoreSettings__17CMenuPageSettingsFv
void CMenuPageSettings::StoreSettings()
{
    // param CMenuPageSettings *this  (in $s1)
    {   // 0x0025ACB0-0x0025AE60
        int lbAnalogButtons;  // in $s1
        int lbVibrate;  // in $v0
        unsigned int lunController;  // in $s0
    }
}

// 0x0025AE60-0x0025B438 (1496 bytes), lines 573-673
// Update__17CMenuPageSettingsFf
void CMenuPageSettings::Update()
{
    // param CMenuPageSettings *this  (in $s1)
    {   // 0x0025AE60-0x0025B438
        CControllerMapping *lpSettingsController;  // in $a1
        int lbAutoCancel;  // in $a2
        CControllerMapping *lpController;  // in $v1
    }
}

// 0x0025B440-0x0025B448 (8 bytes), lines 568-568
// Leave__17CMenuPageSettingsFv
void CMenuPageSettings::Leave()
{
    {   // 0x0025B440-0x0025B448
    }
}

// 0x0025B450-0x0025B980 (1328 bytes), lines 403-563
// Enter__17CMenuPageSettingsFv
void CMenuPageSettings::Enter()
{
    // param CMenuPageSettings *this  (in $s1)
    {   // 0x0025B450-0x0025B980
        int lnActiveCheat;  // in $fp
        int lnCheat;  // in $s5
        int lbAnalogButtons;  // in $a2
        int lbVibrate;  // in $a2
        unsigned int lunController;  // in $v0
        EMenuBackButtons meBackButton;  // in $s4
        EMenuConfirmButtons meConfirmButton;  // in $s3
        int lbScreenAdjust;  // in $s7
        unsigned int lxPanFlag;  // in $s2
        EStringID leHeadingStringID;  // in $s5
    }
}

// 0x0025B980-0x0025BE2C (1196 bytes), lines 308-399
// Reset__17CMenuPageSettingsFv
void CMenuPageSettings::Reset()
{
    // param CMenuPageSettings *this  (in $s1)
    {   // 0x0025B980-0x0025BE2C
    }
}

