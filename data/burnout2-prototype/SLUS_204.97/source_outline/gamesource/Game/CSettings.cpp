// I:\Burnout 2 Code\gamesource\Game\CSettings.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int CScreenSettings::_mnBaseScreenOffsetX;  // 0x00310CB0
int CScreenSettings::_mnBaseScreenOffsetY;  // 0x00310CB4
int CSettings::_mbIsMetric;  // 0x00310CB8
CGame gGame;  // 0x003186E0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x0020E3D0-0x0020E47C (172 bytes), lines 501-511
// Set__9CSettingsFv
void CSettings::Set()
{
    // param CSettings *this  (in $s0)
    {   // 0x0020E3D0-0x0020E47C
        unsigned int lunController;  // in $v1
    }
}

// 0x0020E480-0x0020E5F8 (376 bytes), lines 462-482
// Init__9CSettingsFv
void CSettings::Init()
{
    // param CSettings *this  (in $s3)
    {   // 0x0020E480-0x0020E5F8
        unsigned int lunController;  // in $a0
    }
}

// 0x0020E600-0x0020E608 (8 bytes), lines 426-426
// SetSoundFXVolume__14CSoundSettingsFf
void CSoundSettings::SetSoundFXVolume(float lrVolume)
{
    // param CSoundSettings *this  (in $v0)
    // param float lrVolume  ($sp+0)
    {   // 0x0020E600-0x0020E608
    }
}

// 0x0020E610-0x0020E618 (8 bytes), lines 404-404
// SetMusicVolume__14CSoundSettingsFf
void CSoundSettings::SetMusicVolume(float lrVolume)
{
    // param CSoundSettings *this  (in $v0)
    // param float lrVolume  ($sp+0)
    {   // 0x0020E610-0x0020E618
    }
}

// 0x0020E620-0x0020E648 (40 bytes), lines 356-362
// GetScreenOffsetY__15CScreenSettingsFv
int CScreenSettings::GetScreenOffsetY()
{
    // param CScreenSettings *this  (in $v0)
    {   // 0x0020E620-0x0020E648
    }
}

// 0x0020E650-0x0020E678 (40 bytes), lines 332-338
// GetScreenOffsetX__15CScreenSettingsFv
int CScreenSettings::GetScreenOffsetX()
{
    // param CScreenSettings *this  (in $v0)
    {   // 0x0020E650-0x0020E678
    }
}

// 0x0020E680-0x0020E78C (268 bytes), lines 238-287
// SetScreenOffset__15CScreenSettingsFii
int CScreenSettings::SetScreenOffset(int lnOffsetX, int lnOffsetY)
{
    // param CScreenSettings *this  (in $v0)
    // param int lnOffsetX  (in $v0)
    // param int lnOffsetY  (in $v0)
    {   // 0x0020E680-0x0020E78C
        int lbChanged;  // in $s0
    }
}

// 0x0020E790-0x0020E7A4 (20 bytes), lines 218-220
// SetAspectRatio__15CScreenSettingsF12EAspectRatio
void CScreenSettings::SetAspectRatio(EAspectRatio leAspectRatio)
{
    // param CScreenSettings *this  (in $v0)
    // param EAspectRatio leAspectRatio  (in $v0)
    {   // 0x0020E790-0x0020E7A4
    }
}

// 0x0020E7B0-0x0020E7B8 (8 bytes), lines 143-143
// SetDefaultViewInternal__19CControllerSettingsFi
void CControllerSettings::SetDefaultViewInternal(int lbDefaultViewInternal)
{
    // param CControllerSettings *this  (in $v0)
    // param int lbDefaultViewInternal  (in $v0)
    {   // 0x0020E7B0-0x0020E7B8
    }
}

// 0x0020E7C0-0x0020E7C8 (8 bytes), lines 125-125
// SetAnalogButtons__19CControllerSettingsFi
void CControllerSettings::SetAnalogButtons(int lbAnalogButtons)
{
    // param CControllerSettings *this  (in $v0)
    // param int lbAnalogButtons  (in $v0)
    {   // 0x0020E7C0-0x0020E7C8
    }
}

// 0x0020E7D0-0x0020E7D8 (8 bytes), lines 107-107
// SetForceFeedback__19CControllerSettingsFi
void CControllerSettings::SetForceFeedback(int lbForceFeedback)
{
    // param CControllerSettings *this  (in $v0)
    // param int lbForceFeedback  (in $v0)
    {   // 0x0020E7D0-0x0020E7D8
    }
}

// 0x0020E7E0-0x0020E7E8 (8 bytes), lines 89-89
// SetVibrate__19CControllerSettingsFi
void CControllerSettings::SetVibrate(int lbVibrate)
{
    // param CControllerSettings *this  (in $v0)
    // param int lbVibrate  (in $v0)
    {   // 0x0020E7E0-0x0020E7E8
    }
}

