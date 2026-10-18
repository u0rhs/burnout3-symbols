// I:\Burnout 2 Code\gamesource\Game\CProfile.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
ECheat CChampionshipProgression::_meActiveCheat;  // 0x00310300
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80

// ---- functions ----

// 0x0020E7F0-0x0020E924 (308 bytes), lines 233-234
// GetTimeAndDate__8CProfileFP12CTimeAndDate
void CProfile::GetTimeAndDate(CTimeAndDate *lpTimeAndDateOut)
{
    // param CProfile *this  (in $v0)
    // param CTimeAndDate *lpTimeAndDateOut  (in $v0)
    {   // 0x0020E7F0-0x0020E924
    }
}

// 0x0020E930-0x0020EB78 (584 bytes), lines 156-214
// Update__8CProfileFv
void CProfile::Update()
{
    // param CProfile *this  (in $s0)
    {   // 0x0020E930-0x0020EB78
        ECheat leCheat;  // in $a1
        CScore *lpScore;  // in $v1
    }
}

// 0x0020EB80-0x0020ED20 (416 bytes), lines 139-141
// Timestamp__8CProfileFv
void CProfile::Timestamp()
{
    // param CProfile *this  (in $s0)
    {   // 0x0020EB80-0x0020ED20
    }
}

// 0x0020ED20-0x0020EE9C (380 bytes), lines 80-124
// Init__8CProfileFv
void CProfile::Init()
{
    // param CProfile *this  (in $s2)
    {   // 0x0020ED20-0x0020EE9C
        unsigned int lunIndex;  // in $s0
    }
}

