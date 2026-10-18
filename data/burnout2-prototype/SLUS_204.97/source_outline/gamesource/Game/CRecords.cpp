// I:\Burnout 2 Code\gamesource\Game\CRecords.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static char *kapcDefaultRecordNames[26];  // 0x002B8FD0
int kanDefaultColourIndices[22][4];  // 0x002C1720
static CDefaultTrackRecord kaDefaultChampTrackRecords[30];  // 0x002CC480
static CDefaultRecordsTable kaDefaultTimeAttackRecords[30];  // 0x002CCA20
static CDefaultRecordsTable kaDefaultCrashTop5Records[15];  // 0x002CCB10
ECheat CChampionshipProgression::_meActiveCheat;  // 0x00310300
static unsigned int _gunCurrentName;  // 0x00310C00
static unsigned int _gunCurrentCar;  // 0x00310C04
CGame gGame;  // 0x003186E0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CTimeAttackLogic gTimeAttackLogic;  // 0x003B0E30
CMenuManager gMenuManager;  // 0x003B0E60

// ---- functions ----

// 0x001E0D10-0x001E127C (1388 bytes), lines 990-1005
// Merge__8CRecordsFP8CRecords
void CRecords::Merge(CRecords *lpMergeRecords)
{
    // param CRecords *this  (in $s4)
    // param CRecords *lpMergeRecords  (in $s3)
    {   // 0x001E0D10-0x001E127C
        unsigned int lunCrashZone;  // in $s0
        unsigned int lunTrack;  // in $s0
    }
}

// 0x001E1280-0x001E1554 (724 bytes), lines 939-973
// SetPlayerRecordsName__8CRecordsFUiPc
void CRecords::SetPlayerRecordsName(unsigned int lunPlayer, char *lpcName)
{
    // param CRecords *this  (in $v0)
    // param unsigned int lunPlayer  (in $s1)
    // param char *lpcName  (in $s0)
    {   // 0x001E1280-0x001E1554
    }
}

// 0x001E1560-0x001E1840 (736 bytes), lines 887-922
// CheckIfHasNewRecord__8CRecordsFUi
int CRecords::CheckIfHasNewRecord(unsigned int lunPlayer)
{
    // param CRecords *this  (in $v0)
    // param unsigned int lunPlayer  (in $v0)
    {   // 0x001E1560-0x001E1840
    }
}

// 0x001E1840-0x001E19F4 (436 bytes), lines 821-867
// Update__8CRecordsFUi
void CRecords::Update(unsigned int lunPlayer)
{
    // param CRecords *this  (in $s2)
    // param unsigned int lunPlayer  (in $s1)
    {   // 0x001E1840-0x001E19F4
        unsigned int lunLap;  // in $s0
        ECheat leCheat;  // in $a0
    }
}

// 0x001E1A00-0x001E1B78 (376 bytes), lines 788-802
// Reset__8CRecordsFv
void CRecords::Reset()
{
    // param CRecords *this  (in $v0)
    {   // 0x001E1A00-0x001E1B78
        unsigned int lunCrashZone;  // in $a3
        unsigned int lunTrack;  // in $a1
    }
}

// 0x001E1B80-0x001E1F40 (960 bytes), lines 751-769
// Init__8CRecordsFv
void CRecords::Init()
{
    // param CRecords *this  (in $s0)
    {   // 0x001E1B80-0x001E1F40
        unsigned int lunCrashZone;  // in $s1
        unsigned int lunTrack;  // in $s1
    }
}

// 0x001E1F40-0x001E249C (1372 bytes), lines 623-648
// Update__13CTrackRecordsFUi
void CTrackRecords::Update(unsigned int lunPlayer)
{
    // param CTrackRecords *this  (in $s4)
    // param unsigned int lunPlayer  (in $s3)
    {   // 0x001E1F40-0x001E249C
        CScore *lpScore;  // in $s6
        unsigned int lunLap;  // in $s5
    }
}

// 0x001E2630-0x001E2848 (536 bytes), lines 455-498
// Merge__13CRecordsTableFP13CRecordsTable16ERecordTestTypes
void CRecordsTable::Merge(CRecordsTable *lpMergeRecordsTable, ERecordTestTypes leTestType)
{
    // param CRecordsTable *this  (in $s6)
    // param CRecordsTable *lpMergeRecordsTable  (in $s5)
    // param ERecordTestTypes leTestType  (in $s4)
    {   // 0x001E2630-0x001E2848
        ERecordTestTypes leTestResult;  // in $v0
        CRecord *lpRecord;  // in $s2
        unsigned int lunRecord;  // in $a3
        unsigned int lunMergeRecord;  // in $s1
        unsigned int lunThisRecord;  // in $s0
    }
}

// 0x001E2850-0x001E2A08 (440 bytes), lines 408-437
// Update__13CRecordsTableFfUi16ERecordTestTypes
void CRecordsTable::Update(float lrValue, unsigned int lunPlayer, ERecordTestTypes leTestType)
{
    // param CRecordsTable *this  (in $v0)
    // param float lrValue  (optimised away)
    // param unsigned int lunPlayer  (in $s1)
    // param ERecordTestTypes leTestType  (in $v0)
    {   // 0x001E2850-0x001E2A08
        CRecord *lpRecord;  // in $s0
        unsigned int lunRecord;  // in $t2
        unsigned int lunNewRecord;  // in $t1
    }
}

// 0x001E2A10-0x001E2AD0 (192 bytes), lines 59-78
// Init__7CRecordFv
void CRecord::Init()
{
    // param CRecord *this  (in $s1)
    {   // 0x001E2A10-0x001E2AD0
    }
}

