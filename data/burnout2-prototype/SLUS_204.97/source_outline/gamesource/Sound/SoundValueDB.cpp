// I:\Burnout 2 Code\gamesource\Sound\SoundValueDB.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacTrafficClassNames[5];
char *gaacAudioPageNames[5];
int NUM_AUDIO_PAGES;
char *gaacCrashPageNames[11];
static unsigned int gValueTableGPkr_Audio_Cars_DumpValveDelay[22];  // 0x002D8260
static unsigned int gValueTableGPkr_Audio_Cars_DumpValveVolMax[22];  // 0x002D82C0
static unsigned int gValueTableGPkr_Audio_Cars_DumpValveRpmMin[22];  // 0x002D8320
static unsigned int gValueTableGPkr_Audio_Cars_DumpValveRpmMax[22];  // 0x002D8380
static unsigned int gValueTableGPkr_Audio_Cars_PopVolMin[22];  // 0x002D83E0
static unsigned int gValueTableGPkr_Audio_Cars_PopVolMax[22];  // 0x002D8440
static unsigned int gValueTableGPkr_Audio_Cars_PopRpmMin[22];  // 0x002D84A0
static unsigned int gValueTableGPkr_Audio_Cars_PopRpmMax[22];  // 0x002D8500
static unsigned int gValueTableGPkr_Audio_Cars_NormalVol[22];  // 0x002D8560
static unsigned int gValueTableGPkr_Audio_Cars_BoostVol[22];  // 0x002D85C0
static unsigned int gValueTableGPkr_Audio_Cars_DumpValveSound[22];  // 0x002D8620
static unsigned int gValueTableGPkr_RNMaxV[5];  // 0x002D8680
static unsigned int gValueTableGPkr_RNMinF[5];  // 0x002D86A0
static unsigned int gValueTableGPkr_RNMaxF[5];  // 0x002D86C0
static unsigned int gValueTableGPkr_RNMaxS[5];  // 0x002D86E0
static unsigned int gValueTableGPkr_EMinV[5];  // 0x002D8700
static unsigned int gValueTableGPkr_EMaxV[5];  // 0x002D8720
static unsigned int gValueTableGPkr_EMinF[5];  // 0x002D8740
static unsigned int gValueTableGPkr_EMaxF[5];  // 0x002D8760
static unsigned int gValueTableGPkr_EMaxS[5];  // 0x002D8780
static unsigned int gValueTableGPkr_Audio_Crash_MinDist[11];  // 0x002D87A0
static unsigned int gValueTableGPkr_Audio_Crash_MaxDist[11];  // 0x002D87D0
static unsigned int gValueTableGPkr_Audio_Crash_FreqVar[11];  // 0x002D8800
static unsigned int gValueTableGPkr_Audio_Crash_MinImpulse[11];  // 0x002D8830
static unsigned int gValueTableGPkr_Audio_Crash_MaxImpulse[11];  // 0x002D8860
static unsigned int gValueTableGPkr_Audio_Crash_MinVol[11];  // 0x002D8890
static unsigned int gValueTableGPkr_Audio_Crash_MaxVol[11];  // 0x002D88C0

// ---- functions ----

// 0x00263690-0x002636A8 (24 bytes), lines 174-175
// CrashData__19CSoundValueDatabaseF15ECrashAudioPage
SSoundCrashDBData *CSoundValueDatabase::CrashData(ECrashAudioPage crash_type)
{
    // param CSoundValueDatabase *this  (in $v0)
    // param ECrashAudioPage crash_type  (in $v0)
    {   // 0x00263690-0x002636A8
    }
}

// 0x002636B0-0x002636C8 (24 bytes), lines 168-169
// TrafficCarData__19CSoundValueDatabaseF13EVehicleClass
SSoundTrafficDBData *CSoundValueDatabase::TrafficCarData(EVehicleClass car_type)
{
    // param CSoundValueDatabase *this  (in $v0)
    // param EVehicleClass car_type  (in $v0)
    {   // 0x002636B0-0x002636C8
    }
}

// 0x002636D0-0x002636F0 (32 bytes), lines 162-163
// RaceCarData__19CSoundValueDatabaseF6ECarID
SSoundRaceCarDBData *CSoundValueDatabase::RaceCarData(ECarID car_type)
{
    // param CSoundValueDatabase *this  (in $v0)
    // param ECarID car_type  (in $v0)
    {   // 0x002636D0-0x002636F0
    }
}

// 0x002636F0-0x002636F8 (8 bytes), lines 157-157
// GenericData__19CSoundValueDatabaseFv
SSoundCarGeneralDBData *CSoundValueDatabase::GenericData()
{
    // param CSoundValueDatabase *this  (in $v0)
    {   // 0x002636F0-0x002636F8
    }
}

// 0x00263700-0x00263B30 (1072 bytes), lines 49-151
// RegisterDBValues__19CSoundValueDatabaseFv
void CSoundValueDatabase::RegisterDBValues()
{
    // param CSoundValueDatabase *this  (in $v0)
    {   // 0x00263700-0x00263B30
        int i;  // in $s7
    }
}

