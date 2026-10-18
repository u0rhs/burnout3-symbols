// I:\Burnout 2 Code\gamesource\Game\CCrashForCashData.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacCrashNames[15];
float CCrashForCashData::marZoneThresholds[15][3];  // 0x002B9110
static unsigned int gValueTableCRASHGoldMedal[15];  // 0x002CFA50
static unsigned int gValueTableCRASHSilverMedal[15];  // 0x002CFA90
static unsigned int gValueTableCRASHBronzeMedal[15];  // 0x002CFAD0
static ETrackID kaeTrackData[15];  // 0x002CFB10

// ---- functions ----

// 0x001F79B0-0x001F79D8 (40 bytes), lines 566-567
// GetMedalThreshold__17CCrashForCashDataFQ221CCrashForCashDataSave10ECrashZoneQ217CCrashForCashData20ECrashMedalThreshold
float CCrashForCashData::GetMedalThreshold(ECrashZone leZoneID, ECrashMedalThreshold leThreshold)
{
    // param ECrashZone leZoneID  (in $v0)
    // param ECrashMedalThreshold leThreshold  (in $v0)
    {   // 0x001F79B0-0x001F79D8
    }
}

// 0x001F79E0-0x001F79F8 (24 bytes), lines 539-540
// GetCrashZoneTrack__17CCrashForCashDataFQ221CCrashForCashDataSave10ECrashZone
ETrackID CCrashForCashData::GetCrashZoneTrack(ECrashZone leZoneID)
{
    // param ECrashZone leZoneID  (in $v0)
    {   // 0x001F79E0-0x001F79F8
    }
}

// 0x001F7A00-0x001F7A08 (8 bytes), lines 469-469
// IsNewGroupAvailable__17CCrashForCashDataFv
int CCrashForCashData::IsNewGroupAvailable()
{
    // param CCrashForCashData *this  (in $v0)
    {   // 0x001F7A00-0x001F7A08
    }
}

// 0x001F7A10-0x001F7A68 (88 bytes), lines 434-450
// IsGroupAvailable__17CCrashForCashDataFQ217CCrashForCashData11ECrashGroup
int CCrashForCashData::IsGroupAvailable(ECrashGroup leGroupID)
{
    // param CCrashForCashData *this  (in $v0)
    // param ECrashGroup leGroupID  (in $v0)
    {   // 0x001F7A10-0x001F7A68
    }
}

// 0x001F7A70-0x001F7A78 (8 bytes), lines 410-410
// GetLastMedal__17CCrashForCashDataFv
ECrashMedal CCrashForCashData::GetLastMedal()
{
    // param CCrashForCashData *this  (in $v0)
    {   // 0x001F7A70-0x001F7A78
    }
}

// 0x001F7A80-0x001F7A90 (16 bytes), lines 391-392
// GetMedal__17CCrashForCashDataFQ221CCrashForCashDataSave10ECrashZone
ECrashMedal CCrashForCashData::GetMedal(ECrashZone leZoneID)
{
    // param CCrashForCashData *this  (in $v0)
    // param ECrashZone leZoneID  (in $v0)
    {   // 0x001F7A80-0x001F7A90
    }
}

// 0x001F7A90-0x001F7C04 (372 bytes), lines 305-371
// CheckNewScore__17CCrashForCashDataFQ221CCrashForCashDataSave10ECrashZonef
ECrashMedal CCrashForCashData::CheckNewScore(ECrashZone leZoneID, float lrScore)
{
    // param CCrashForCashData *this  (in $v0)
    // param ECrashZone leZoneID  (in $v0)
    // param float lrScore  ($sp+0)
    {   // 0x001F7A90-0x001F7C04
        int lbValidNextGroup;  // in $a3
        int lbGroupAvailable;  // in $v0
        unsigned int lunGroupID;  // in $a2
        ECrashMedal leMedalWon;  // in $v0
    }
}

// 0x001F7C10-0x001F7CB0 (160 bytes), lines 229-237
// Initialise__17CCrashForCashDataFv
void CCrashForCashData::Initialise()
{
    // param CCrashForCashData *this  (in $s0)
    {   // 0x001F7C10-0x001F7CB0
    }
}

// 0x001F7CB0-0x001F7CF4 (68 bytes), lines 199-212
// SetAllLocked__21CCrashForCashDataSaveFi
void CCrashForCashDataSave::SetAllLocked(int lbLock)
{
    // param CCrashForCashDataSave *this  (in $v0)
    // param int lbLock  (in $v0)
    {   // 0x001F7CB0-0x001F7CF4
        unsigned int lunZoneID;  // in $a3
    }
}

// 0x001F7D00-0x001F7D38 (56 bytes), lines 166-178
// GetNumMedals__21CCrashForCashDataSaveFQ221CCrashForCashDataSave11ECrashMedal
int CCrashForCashDataSave::GetNumMedals(ECrashMedal leMedal)
{
    // param CCrashForCashDataSave *this  (in $v0)
    // param ECrashMedal leMedal  (in $v0)
    {   // 0x001F7D00-0x001F7D38
        int lnMedalTotal;  // in $v0
        int lnZoneID;  // in $a2
    }
}

// 0x001F7D40-0x001F7D68 (40 bytes), lines 146-148
// InitSave__21CCrashForCashDataSaveFv
void CCrashForCashDataSave::InitSave()
{
    // param CCrashForCashDataSave *this  (in $v0)
    {   // 0x001F7D40-0x001F7D68
    }
}

