// I:\Burnout 2 Code\gamesource\Sound\GameSound.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *g_WeatherBanks[2];
char *g_BankNames[6];  // 0x002B91E0
char *g_ModeBanks[22];  // 0x002B9200
CGTFileSystem *gpGTFileSystem;  // 0x003107C0
int update_count;  // 0x00310C40
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440
CAsyncLoadManager gAsyncLoadManager;  // 0x00439330
CVoiceManager gVoiceManager;  // 0x00455E00
CSoundFrontEnd gSoundFrontend;  // 0x00456520
cSoundCrash gSoundCrash;  // 0x004565A0
CSoundValueDatabase gSoundValueDB;  // 0x004566E0
CSoundTraffic gSoundTraffic;  // 0x00456D50
CHudSound gHudSound;  // 0x00457090
char gB2PSWBuffer[];  // 0x01100000
char gReplayBuffer[];  // 0x0189A000

// ---- functions ----

// 0x001FCB70-0x001FCD60 (496 bytes), lines 1052-1160
// Impact__10CGameSoundF10eCrashTypefPC5RwV3diif
void CGameSound::Impact(eCrashType impact_type, float Impulse, RwV3d *Pos, int MaterialType)
{
    // param CGameSound *this  (in $v0)
    // param eCrashType impact_type  (in $v0)
    // param float Impulse  ($sp+16)
    // param RwV3d *Pos  (in $v0)
    // param int MaterialType  (in $v0)
    {   // 0x001FCB70-0x001FCD60
    }
}

// 0x001FCD60-0x001FCE0C (172 bytes), lines 993-1041
// DoScrape__10CGameSoundFfPC5RwV3diif
void CGameSound::DoScrape(float Impulse, RwV3d *Pos, int MaterialType, int WhichCar, float LinVel)
{
    // param CGameSound *this  (in $v0)
    // param float Impulse  ($sp+16)
    // param RwV3d *Pos  (in $v0)
    // param int MaterialType  (in $v0)
    // param int WhichCar  (in $v0)
    // param float LinVel  ($sp+16)
    {   // 0x001FCD60-0x001FCE0C
    }
}

// 0x001FCE10-0x001FCF50 (320 bytes), lines 841-935
// FinishLoadRaceDictionaries__10CGameSoundFv
int CGameSound::FinishLoadRaceDictionaries()
{
    // param CGameSound *this  (in $s0)
    {   // 0x001FCE10-0x001FCF50
        int mode;  // in $a1
        RwaWaveDict *lpDict;  // in $v0
        int result;  // in $v0
    }
}

// 0x001FCF50-0x001FCF60 (16 bytes), lines 802-803
// GetDictionary__10CGameSoundF15EWaveDictionary
RwaWaveDict *CGameSound::GetDictionary(EWaveDictionary dictionary_id)
{
    // param CGameSound *this  (in $v0)
    // param EWaveDictionary dictionary_id  (in $v0)
    {   // 0x001FCF50-0x001FCF60
    }
}

// 0x001FCF60-0x001FCF80 (32 bytes), lines 794-797
// UnloadBank__10CGameSoundFP11RwaWaveDict
void CGameSound::UnloadBank(RwaWaveDict *dictionary)
{
    // param RwaWaveDict *dictionary  (in $v0)
    {   // 0x001FCF60-0x001FCF80
    }
}

// 0x001FCF80-0x001FD094 (276 bytes), lines 687-733
// FinishLoadBank__10CGameSoundFi
RwaWaveDict *CGameSound::FinishLoadBank(int lnBankID)
{
    // param CGameSound *this  (in $s1)
    // param int lnBankID  (in $v0)
    {   // 0x001FCF80-0x001FD094
        RwStream *rwStream;  // in $s2
        RwMemory lMemBuffer;  // $sp+72
        char *lpBankBuffer;  // in $a3
        RwaWaveDict *lpResult;  // in $s0
    }
}

// 0x001FD0A0-0x001FD204 (356 bytes), lines 634-679
// QueueLoadBank__10CGameSoundFPCci
int CGameSound::QueueLoadBank(char *lpcFileName, int lbSearchFirst)
{
    // param CGameSound *this  (in $s4)
    // param char *lpcFileName  (in $s3)
    // param int lbSearchFirst  (in $v0)
    {   // 0x001FD0A0-0x001FD204
        int lnLength;  // in $s2
        CGTFile *lpFile;  // in $v0
        char *lpC;  // in $a1
        char *lpLc;  // in $v1
        char lacLeafName[16];  // $sp+96
        int lnBankID;  // in $s1
        RwaWaveDict *lpResult;  // in $v0
        char *lpBankBuffer;  // in $s0
    }
}

// 0x001FD210-0x001FD320 (272 bytes), lines 571-613
// RWAInit__10CGameSoundFv
int CGameSound::RWAInit()
{
    // param CGameSound *this  (in $s1)
    {   // 0x001FD210-0x001FD320
        int result;  // in $s0
    }
}

// 0x001FD320-0x001FD330 (16 bytes), lines 565-566
// GetPursuitGap__10CGameSoundFv
float CGameSound::GetPursuitGap()
{
    {   // 0x001FD320-0x001FD330
    }
}

// 0x001FD330-0x001FD338 (8 bytes), lines 560-560
// GetValueDB__10CGameSoundFv
CSoundValueDatabase *CGameSound::GetValueDB()
{
    // param CGameSound *this  (in $v0)
    {   // 0x001FD330-0x001FD338
    }
}

// 0x001FD340-0x001FD34C (12 bytes), lines 553-554
// GetListenerRolloffFactor__10CGameSoundFv
float CGameSound::GetListenerRolloffFactor()
{
    // param CGameSound *this  (in $v0)
    {   // 0x001FD340-0x001FD34C
    }
}

// 0x001FD350-0x001FD370 (32 bytes), lines 547-548
// GetListenerPosition__10CGameSoundFP5RwV3d
void CGameSound::GetListenerPosition(RwV3d *retval)
{
    // param CGameSound *this  (in $v0)
    // param RwV3d *retval  (in $v0)
    {   // 0x001FD350-0x001FD370
    }
}

// 0x001FD370-0x001FD390 (32 bytes), lines 539-542
// StopSound__10CGameSoundFP13CManagedVoice
void CGameSound::StopSound(CManagedVoice *voice)
{
    // param CGameSound *this  (in $v0)
    // param CManagedVoice *voice  (in $v0)
    {   // 0x001FD370-0x001FD390
    }
}

// 0x001FD390-0x001FD398 (8 bytes), lines 534-534
// PlaySound__10CGameSoundFP16CPlaySoundParams
CManagedVoice *CGameSound::PlaySound(CPlaySoundParams *params)
{
    // param CGameSound *this  (in $v0)
    // param CPlaySoundParams *params  (in $v0)
    {   // 0x001FD390-0x001FD398
    }
}

// 0x001FD3A0-0x001FD3A8 (8 bytes), lines 521-521
// ReserveSpuChannel__10CGameSoundFi
int CGameSound::ReserveSpuChannel(int reverb)
{
    // param CGameSound *this  (in $v0)
    // param int reverb  (in $v0)
    {   // 0x001FD3A0-0x001FD3A8
    }
}

// 0x001FD3B0-0x001FD440 (144 bytes), lines 511-515
// UpdateTraffic__10CGameSoundFiP17CTrafficSoundDataP17CTrafficSoundDataP17CTrafficSoundDataiii
void CGameSound::UpdateTraffic(int player, CTrafficSoundData *engines, CTrafficSoundData *horns, CTrafficSoundData *special, int num_engines, int num_horns, int num_special)
{
    // param CGameSound *this  (in $s5)
    // param int player  (in $s4)
    // param CTrafficSoundData *engines  (in $v0)
    // param CTrafficSoundData *horns  (in $s3)
    // param CTrafficSoundData *special  (in $s2)
    // param int num_engines  (in $v0)
    // param int num_horns  (in $s1)
    // param int num_special  (in $s0)
    {   // 0x001FD3B0-0x001FD440
    }
}

// 0x001FD440-0x001FD448 (8 bytes), lines 506-506
// DestroyRaceCar__10CGameSoundFPv
void CGameSound::DestroyRaceCar(void *vehicle)
{
    // param void *vehicle  (in $v0)
    {   // 0x001FD440-0x001FD448
    }
}

// 0x001FD450-0x001FD4A8 (88 bytes), lines 495-495
// UpdateRaceCar__10CGameSoundFPvP15CRaceCarPhysics
void CGameSound::UpdateRaceCar(void *vehicle, CRaceCarPhysics *physics)
{
    // param void *vehicle  (in $v0)
    // param CRaceCarPhysics *physics  (in $v0)
    {   // 0x001FD450-0x001FD4A8
    }
}

// 0x001FD4B0-0x001FD4B8 (8 bytes), lines 483-483
// ResetRaceCar__10CGameSoundFPv
int CGameSound::ResetRaceCar(void *vehicle)
{
    // param void *vehicle  (in $v0)
    {   // 0x001FD4B0-0x001FD4B8
    }
}

// 0x001FD4C0-0x001FD4FC (60 bytes), lines 464-477
// CreateRaceCar__10CGameSoundF13ESoundCarType6ECarIDP8CRaceCarPci
void *CGameSound::CreateRaceCar(ESoundCarType type, ECarID id, CRaceCar *racecar, char *buffer, int buffer_size)
{
    // param ESoundCarType type  (in $v0)
    // param ECarID id  (in $v0)
    // param CRaceCar *racecar  (in $v0)
    // param char *buffer  (in $v0)
    // param int buffer_size  (in $v0)
    {   // 0x001FD4C0-0x001FD4FC
        CSoundCar *new_car;  // in $s0
    }
}

// 0x001FD500-0x001FD6C8 (456 bytes), lines 428-447
// SetListenerPosition__10CGameSoundFP11RwMatrixTag
int CGameSound::SetListenerPosition(RwMatrixTag *matrix)
{
    // param CGameSound *this  (in $s1)
    // param RwMatrixTag *matrix  (in $s0)
    {   // 0x001FD500-0x001FD6C8
        int time_now;  // in $v0
    }
}

// 0x001FD6D0-0x001FD6D8 (8 bytes), lines 424-424
// GetSFXVolume__10CGameSoundFv
float CGameSound::GetSFXVolume()
{
    // param CGameSound *this  (in $v0)
    {   // 0x001FD6D0-0x001FD6D8
    }
}

// 0x001FD6E0-0x001FD6E8 (8 bytes), lines 418-418
// GetMusicVolume__10CGameSoundFv
float CGameSound::GetMusicVolume()
{
    // param CGameSound *this  (in $v0)
    {   // 0x001FD6E0-0x001FD6E8
    }
}

// 0x001FD6F0-0x001FD77C (140 bytes), lines 410-412
// SetVolume__10CGameSoundFff
void CGameSound::SetVolume(float sfx_level, float music_level)
{
    // param CGameSound *this  (in $v0)
    // param float sfx_level  ($sp+0)
    // param float music_level  ($sp+0)
    {   // 0x001FD6F0-0x001FD77C
    }
}

// 0x001FD780-0x001FD788 (8 bytes), lines 405-405
// Pause__10CGameSoundFi
void CGameSound::Pause()
{
    {   // 0x001FD780-0x001FD788
    }
}

// 0x001FD790-0x001FD824 (148 bytes), lines 378-400
// Update__10CGameSoundFv
void CGameSound::Update()
{
    // param CGameSound *this  (in $s0)
    {   // 0x001FD790-0x001FD824
    }
}

// 0x001FD830-0x001FDA94 (612 bytes), lines 280-372
// HUDEvent__10CGameSoundF12eHudSFXEventffi
void CGameSound::HUDEvent(eHudSFXEvent EventType, float data, float data2, int StereoFlip)
{
    // param CGameSound *this  (in $v0)
    // param eHudSFXEvent EventType  (in $v0)
    // param float data  ($sp+16)
    // param float data2  ($sp+16)
    // param int StereoFlip  (in $v0)
    {   // 0x001FD830-0x001FDA94
        float lPitchOff;  // optimised away
        float CSNorm;  // $sp+16
        float pitchoff;  // optimised away
    }
}

// 0x001FDAA0-0x001FDD54 (692 bytes), lines 236-275
// UIEvent__10CGameSoundF17eFrontEndSFXEventfi
void CGameSound::UIEvent(eFrontEndSFXEvent EventType, float data, int StereoFlip)
{
    // param CGameSound *this  (in $v0)
    // param eFrontEndSFXEvent EventType  (in $v0)
    // param float data  ($sp+16)
    // param int StereoFlip  (in $v0)
    {   // 0x001FDAA0-0x001FDD54
    }
}

// 0x001FDD60-0x001FDDE0 (128 bytes), lines 226-232
// Frontend_Shutdown__10CGameSoundFv
void CGameSound::Frontend_Shutdown()
{
    // param CGameSound *this  (in $s2)
    {   // 0x001FDD60-0x001FDDE0
    }
}

// 0x001FDDE0-0x001FDFF8 (536 bytes), lines 207-220
// Frontend_Setup__10CGameSoundFv
int CGameSound::Frontend_Setup()
{
    // param CGameSound *this  (in $s0)
    {   // 0x001FDDE0-0x001FDFF8
    }
}

// 0x001FE000-0x001FE090 (144 bytes), lines 192-202
// Shutdown__10CGameSoundFv
void CGameSound::Shutdown()
{
    // param CGameSound *this  (in $s2)
    {   // 0x001FE000-0x001FE090
    }
}

// 0x001FE090-0x001FE11C (140 bytes), lines 175-188
// Reset__10CGameSoundFv
int CGameSound::Reset()
{
    // param CGameSound *this  (in $s0)
    {   // 0x001FE090-0x001FE11C
    }
}

// 0x001FE120-0x001FE21C (252 bytes), lines 156-171
// Setup__10CGameSoundFv
int CGameSound::Setup()
{
    // param CGameSound *this  (in $s0)
    {   // 0x001FE120-0x001FE21C
    }
}

// 0x001FE220-0x001FE2BC (156 bytes), lines 110-136
// Init__10CGameSoundFv
int CGameSound::Init()
{
    // param CGameSound *this  (in $s0)
    {   // 0x001FE220-0x001FE2BC
        int lnCount;  // in $a0
    }
}

// 0x001FE2C0-0x001FE32C (108 bytes), lines 98-106
// __ct__10CGameSoundFv
void *CGameSound::CGameSound()
{
    // param CGameSound *this  (in $v0)
    {   // 0x001FE2C0-0x001FE32C
    }
}

