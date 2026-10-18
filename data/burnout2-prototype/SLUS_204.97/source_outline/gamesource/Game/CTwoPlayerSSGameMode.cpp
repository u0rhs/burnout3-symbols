// I:\Burnout 2 Code\gamesource\Game\CTwoPlayerSSGameMode.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
/* vtable */ void *CTwoPlayerSSGameMode::__vtable[];  // 0x0030F7C0
unsigned int CTwoPlayerSSGameMode::_maunPlayerPoints[2];  // 0x00310610
unsigned int CTwoPlayerSSGameMode::_maunPrevPlayerPoints[2];  // 0x00310618
float CTimer::mrGameTimestepSeconds;  // 0x00310898
unsigned char _rwDMAUseHalfOffset;  // 0x00310960
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440
CInput gInput;  // 0x00439880

// ---- functions ----

// 0x0020D910-0x0020D924 (20 bytes), lines 820-821
// GetPrevPlayerPoints__20CTwoPlayerSSGameModeFUi
unsigned int CTwoPlayerSSGameMode::GetPrevPlayerPoints(unsigned int lunPlayer)
{
    // param unsigned int lunPlayer  (in $v0)
    {   // 0x0020D910-0x0020D924
    }
}

// 0x0020D930-0x0020D944 (20 bytes), lines 811-812
// GetPlayerPoints__20CTwoPlayerSSGameModeFUi
unsigned int CTwoPlayerSSGameMode::GetPlayerPoints(unsigned int lunPlayer)
{
    // param unsigned int lunPlayer  (in $v0)
    {   // 0x0020D930-0x0020D944
    }
}

// 0x0020D950-0x0020DA30 (224 bytes), lines 763-803
// RaceFinished__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::RaceFinished()
{
    {   // 0x0020D950-0x0020DA30
        CScore *lpP2Score;  // in $a3
        CScore *lpP1Score;  // in $a2
    }
}

// 0x0020DA30-0x0020DA4C (28 bytes), lines 754-758
// PlayerPointsReset__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::PlayerPointsReset()
{
    {   // 0x0020DA30-0x0020DA4C
    }
}

// 0x0020DA50-0x0020DACC (124 bytes), lines 728-749
// ActualRestart__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::ActualRestart()
{
    // param CTwoPlayerSSGameMode *this  (in $s0)
    {   // 0x0020DA50-0x0020DACC
    }
}

// 0x0020DAD0-0x0020DAD8 (8 bytes), lines 722-722
// Destroy__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::Destroy()
{
    {   // 0x0020DAD0-0x0020DAD8
    }
}

// 0x0020DAE0-0x0020E2C8 (2024 bytes), lines 144-704
// Update__20CTwoPlayerSSGameModeFv
CGameMode *CTwoPlayerSSGameMode::Update()
{
    // param CTwoPlayerSSGameMode *this  (in $s4)
    {   // 0x0020DAE0-0x0020E2C8
        RwRGBA black;  // $sp+140
        int lbReplayPlaying;  // in $s1
        CScore *lpScore;  // in $s5
        int lnPlayer;  // in $s0
        int lnCount;  // in $s0
    }
}

// 0x0020E2D0-0x0020E2D8 (8 bytes), lines 126-126
// Exit__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::Exit()
{
    // param CTwoPlayerSSGameMode *this  (in $v0)
    {   // 0x0020E2D0-0x0020E2D8
    }
}

// 0x0020E2E0-0x0020E3B4 (212 bytes), lines 89-108
// Enter__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::Enter()
{
    // param CTwoPlayerSSGameMode *this  (in $v0)
    {   // 0x0020E2E0-0x0020E3B4
    }
}

// 0x0020E3C0-0x0020E3C8 (8 bytes), lines 66-66
// Init__20CTwoPlayerSSGameModeFv
void CTwoPlayerSSGameMode::Init()
{
    // param CTwoPlayerSSGameMode *this  (in $v0)
    {   // 0x0020E3C0-0x0020E3C8
    }
}

