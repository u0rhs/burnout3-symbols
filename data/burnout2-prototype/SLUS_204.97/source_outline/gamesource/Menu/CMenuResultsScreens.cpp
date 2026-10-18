// I:\Burnout 2 Code\gamesource\Menu\CMenuResultsScreens.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CChampionshipStage CChampionshipProgression::_maChampionshipStages[22];  // 0x0029DDD0
int kanDefaultColourIndices[22][4];  // 0x002C1720
CTrackData CMenuManager::maTracks[30];  // 0x002C1A40
static char kacNameEntryChars[74];  // 0x002CD310
static CMenuImageData kaImageData[51];  // 0x002CD360
static B22dTexAreaTag kaImageTexArea[51];  // 0x002CD690
static B22dBoxTag kMenuPanelStandardBox;  // 0x002CD9C0
static B22dBoxTag kMenuPanelStandardInGameBox;  // 0x002CD9D0
static RwRGBAReal kColourBlueTrans;  // 0x002CD9E0
static float krResultCrashMPDamageWidth;  // 0x002CD9F0
static float krResultCrashMPMultiplierWidth;  // 0x002CD9F8
static float krResultCrashMPSumWidth;  // 0x002CDA00
static RwV2d kLessonResultsTextPos;  // 0x002CDA08
static RwV2d kLastSingleTextPos;  // 0x002CDA10
static RwV2d kNextRaceGPPos;  // 0x002CDA18
static RwV2d kNextRaceAwardsGPPos;  // 0x002CDA20
static RwV2d kLastCrashPos;  // 0x002CDA28
static B22dBoxTag kStandingsGPStandingsPanelBox;  // 0x002CDA30
static B22dBoxTag kStandingsCrashMPStandingsPanelBox;  // 0x002CDA40
static B22dBoxTag kTrackRecordsTimesPanelBox;  // 0x002CDA50
static B22dBoxTag kTrackRecordsScoresPanelBox;  // 0x002CDA60
static B22dBoxTag kRecordsTableRecordsPanelBox;  // 0x002CDA70
static RwV2d kTimeAttackLastTextPos;  // 0x002CDA80
static RwV2d kNameEntryTextPos;  // 0x002CDA88
ECheat CChampionshipProgression::_meActiveCheat;  // 0x00310300
static char *kpacBulletString;  // 0x003105D8
signed char CChampionshipProgression::_manPrevPointsOrder[4];  // 0x00310784
int CSettings::_mbIsMetric;  // 0x00310CB8
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
CAICar gaAICars[4];  // 0x00362A80
COnePlayerCRASH gOnePlayerCRASH;  // 0x003A7840
CTimeAttackLogic gTimeAttackLogic;  // 0x003B0E30
CMenuManager gMenuManager;  // 0x003B0E60
CMemoryCard gMemoryCard;  // 0x0043AC40
CMenuPanel _gPanel;  // 0x00454C50
CMenuPanel _gPanel2;  // 0x00454C70

// ---- functions ----

// 0x001EAE10-0x001EB21C (1036 bytes), lines 3534-3695
// AutoSaveUpdate__19CMenuResultsScreensFv
int CMenuResultsScreens::AutoSaveUpdate()
{
    // param CMenuResultsScreens *this  (in $s3)
    {   // 0x001EAE10-0x001EB21C
        EMemoryCardState leMemoryCardState;  // in $s1
        CControllerMapping *lpController;  // in $s0
    }
}

// 0x001EB220-0x001EB8B4 (1684 bytes), lines 3447-3519
// SetAutoSaveState__19CMenuResultsScreensFQ219CMenuResultsScreens14EAutoSaveState
void CMenuResultsScreens::SetAutoSaveState(EAutoSaveState leAutoSaveState)
{
    // param CMenuResultsScreens *this  (in $s2)
    // param EAutoSaveState leAutoSaveState  (in $v0)
    {   // 0x001EB220-0x001EB8B4
    }
}

// 0x001EB8C0-0x001EB9F0 (304 bytes), lines 3237-3294
// UpdateLastLessonDisplay__19CMenuResultsScreensFv
void CMenuResultsScreens::UpdateLastLessonDisplay()
{
    // param CMenuResultsScreens *this  (in $s1)
    {   // 0x001EB8C0-0x001EB9F0
    }
}

// 0x001EB9F0-0x001EBD08 (792 bytes), lines 3140-3183
// SetLastCrashOnePlayer__19CMenuResultsScreensFv
void CMenuResultsScreens::SetLastCrashOnePlayer()
{
    // param CMenuResultsScreens *this  (in $s1)
    {   // 0x001EB9F0-0x001EBD08
    }
}

// 0x001EBD10-0x001EC0F0 (992 bytes), lines 3064-3125
// SetLastTimeAttack__19CMenuResultsScreensFv
void CMenuResultsScreens::SetLastTimeAttack()
{
    // param CMenuResultsScreens *this  (in $s0)
    {   // 0x001EBD10-0x001EC0F0
        unsigned int lunLap;  // in $a0
        float lrFastestLap;  // $sp+112
        EStringID leHeadingStringID;  // in $s1
    }
}

// 0x001EC0F0-0x001EC604 (1300 bytes), lines 2990-3049
// SetLastChampionship__19CMenuResultsScreensFi9EStringID
void CMenuResultsScreens::SetLastChampionship(EStringID leHeadingStringID)
{
    // param CMenuResultsScreens *this  (in $s1)
    // param EStringID leHeadingStringID  (in $s0)
    {   // 0x001EC0F0-0x001EC604
        int lnCurrentRow;  // in $s3
        CChampionshipUnlockedStats *lpUnlockedStats;  // in $s2
    }
}

// 0x001EC610-0x001ECB2C (1308 bytes), lines 2892-2950
// SetLastSingleOnePlayer__19CMenuResultsScreensFi
void CMenuResultsScreens::SetLastSingleOnePlayer(int lbFinished)
{
    // param CMenuResultsScreens *this  (in $s3)
    // param int lbFinished  (in $s2)
    {   // 0x001EC610-0x001ECB2C
        int lbDisplayLapTime;  // in $s5
        CScore *lpScore;  // in $s4
    }
}

// 0x001ECB30-0x001ECE98 (872 bytes), lines 2809-2851
// SetNextRaceGP__19CMenuResultsScreensFv
void CMenuResultsScreens::SetNextRaceGP()
{
    // param CMenuResultsScreens *this  (in $s0)
    {   // 0x001ECB30-0x001ECE98
        CChampionshipStats lChampionshipStats;  // $sp+96
        EStringID leHeadingStringID;  // in $s1
        EStageID leStageID;  // in $v0
    }
}

// 0x001ECEA0-0x001ED7C0 (2336 bytes), lines 2705-2794
// SetValueRecords__19CMenuResultsScreensFi
void CMenuResultsScreens::SetValueRecords(int lbIsScoreValues)
{
    // param CMenuResultsScreens *this  (in $s2)
    // param int lbIsScoreValues  (in $s4)
    {   // 0x001ECEA0-0x001ED7C0
        CTrackRecords *lpTrackRecords;  // in $s3
        CRecord *lpRecord;  // in $a1
    }
}

// 0x001ED7C0-0x001EDDE0 (1568 bytes), lines 2571-2689
// SetRecordsTableRecords__19CMenuResultsScreensFP13CRecordsTableii
void CMenuResultsScreens::SetRecordsTableRecords(CRecordsTable *lpRecordsTable, int lbFrontEnd, int lbIsMoneyValues)
{
    // param CMenuResultsScreens *this  (in $s5)
    // param CRecordsTable *lpRecordsTable  (in $s6)
    // param int lbFrontEnd  (in $s7)
    // param int lbIsMoneyValues  (in $s4)
    {   // 0x001ED7C0-0x001EDDE0
        unsigned int lunLap;  // in $a0
        float lrFastestLap;  // $sp+160
        char *lpacValueString;  // in $v0
        CRecord *lpRecord;  // in $v0
        unsigned int lunRow;  // in $s0
    }
}

// 0x001EDDE0-0x001EEBE4 (3588 bytes), lines 2402-2553
// SetTrackRecords__19CMenuResultsScreensFv
void CMenuResultsScreens::SetTrackRecords()
{
    // param CMenuResultsScreens *this  (in $s4)
    {   // 0x001EDDE0-0x001EEBE4
        CTrackRecords *lpTrackRecords;  // in $s0
        ETrackID leTrackID;  // $sp+188
        int lbDisplayLapTimes;  // in $fp
        CRecord *lpRecord;  // in $a3
        unsigned int lunRow;  // in $s1
    }
}

// 0x001EEBF0-0x001EEE70 (640 bytes), lines 2325-2387
// SetNewRecord__19CMenuResultsScreensFUi
void CMenuResultsScreens::SetNewRecord(unsigned int lunPlayer)
{
    // param CMenuResultsScreens *this  (in $s2)
    // param unsigned int lunPlayer  (in $v0)
    {   // 0x001EEBF0-0x001EEE70
        unsigned int lunRow;  // in $v1
        EStringID leSubHeadingID;  // in $a2
        unsigned int lunCharacter;  // in $a1
    }
}

// 0x001EEE70-0x001EF21C (940 bytes), lines 2232-2309
// SetStandingsCrashMultiPlayer__19CMenuResultsScreensFv
void CMenuResultsScreens::SetStandingsCrashMultiPlayer()
{
    // param CMenuResultsScreens *this  (in $s2)
    {   // 0x001EEE70-0x001EF21C
        unsigned int lunNumPlayers;  // in $s7
        CScore *lpaPlayerScores;  // in $fp
        unsigned char *lpun8PrevPlayersSortedByScore;  // $sp+172
        unsigned char *lpun8PlayersSortedByScore;  // $sp+168
        CTurnBasedCRASH *lpCurrentGame;  // in $s0
        unsigned int lunPrevPlayer;  // in $s5
        unsigned int lunPos2;  // in $v1
        unsigned int lunPos;  // in $s4
        unsigned int lunRow;  // in $s3
    }
}

// 0x001EF220-0x001EF5D4 (948 bytes), lines 2134-2215
// SetStandingsGPFrontEnd__19CMenuResultsScreensFv
void CMenuResultsScreens::SetStandingsGPFrontEnd()
{
    // param CMenuResultsScreens *this  (in $s1)
    {   // 0x001EF220-0x001EF5D4
        ECarID lePlayerCarID;  // in $v0
        unsigned int lunPlayerCarColour;  // $sp+160
        ECarID leCarID;  // in $s4
        unsigned int lunCarColour;  // in $s6
        EStringID leDriverNameID;  // in $a0
        unsigned int lunPos;  // in $s3
        unsigned int lunRow;  // in $s2
    }
}

// 0x001EF5E0-0x001EFA00 (1056 bytes), lines 2033-2119
// SetStandingsTwoPlayer__19CMenuResultsScreensFv
void CMenuResultsScreens::SetStandingsTwoPlayer()
{
    // param CMenuResultsScreens *this  (in $s0)
    {   // 0x001EF5E0-0x001EFA00
        CRaceCar *lpRaceCar;  // in $s3
        unsigned int lunPlayer;  // in $s2
        unsigned int launPlayerRow[2];  // $sp+120
        unsigned int lunRow;  // in $s1
    }
}

// 0x001EFA00-0x001EFF88 (1416 bytes), lines 1899-2018
// SetStandingsGP__19CMenuResultsScreensFv
void CMenuResultsScreens::SetStandingsGP()
{
    // param CMenuResultsScreens *this  (in $s5)
    {   // 0x001EFA00-0x001EFF88
        int lnRacePoints;  // in $s3
        CRaceCar *lpRaceCar;  // in $s2
        unsigned int lunPos2;  // in $v0
        unsigned int lunPos;  // in $s1
        unsigned int lunRow;  // in $s0
    }
}

// 0x001EFF90-0x001F0374 (996 bytes), lines 1817-1884
// SetResultDrivingLesson__19CMenuResultsScreensFv
void CMenuResultsScreens::SetResultDrivingLesson()
{
    // param CMenuResultsScreens *this  (in $s2)
    {   // 0x001EFF90-0x001F0374
        ELessonObjective leLessonObjective;  // in $s4
        float lrResult;  // $sp+144
        ELessonID leLessonID;  // in $s3
        char *lpacResultString;  // in $v0
    }
}

// 0x001F0380-0x001F06BC (828 bytes), lines 1747-1802
// SetResultCrashMultiPlayer__19CMenuResultsScreensFv
void CMenuResultsScreens::SetResultCrashMultiPlayer()
{
    // param CMenuResultsScreens *this  (in $s3)
    {   // 0x001F0380-0x001F06BC
        CScore *lpScore;  // in $s0
    }
}

// 0x001F06C0-0x001F0D5C (1692 bytes), lines 1637-1725
// SetResultTwoPlayer__19CMenuResultsScreensFii9EStringID9EStringID
void CMenuResultsScreens::SetResultTwoPlayer(int lbDisplayLapTime, int lbFinished, EStringID lePlayer1StringID, EStringID lePlayer2StringID)
{
    // param CMenuResultsScreens *this  (in $s6)
    // param int lbDisplayLapTime  (in $s5)
    // param int lbFinished  (in $fp)
    // param EStringID lePlayer1StringID  (in $s1)
    // param EStringID lePlayer2StringID  (in $s0)
    {   // 0x001F06C0-0x001F0D5C
        CScore *lpScore;  // in $s2
        unsigned int lunColumn;  // in $s1
        unsigned int lunPlayer;  // in $s0
    }
}

// 0x001F0D60-0x001F125C (1276 bytes), lines 1550-1618
// SetResultOnePlayer__19CMenuResultsScreensFii
void CMenuResultsScreens::SetResultOnePlayer(int lbDisplayLapTime, int lbFinished)
{
    // param CMenuResultsScreens *this  (in $s2)
    // param int lbDisplayLapTime  (in $s1)
    // param int lbFinished  (in $s4)
    {   // 0x001F0D60-0x001F125C
        CScore *lpScore;  // in $s3
    }
}

// 0x001F1260-0x001F1354 (244 bytes), lines 1350-1372
// GetCarNameString__19CMenuResultsScreensFUi
char *CMenuResultsScreens::GetCarNameString(unsigned int lunCarIndex)
{
    // param unsigned int lunCarIndex  (in $v0)
    {   // 0x001F1260-0x001F1354
        unsigned int lunIndex;  // in $a1
    }
}

// 0x001F1360-0x001F1460 (256 bytes), lines 1152-1177
// GetCommaNumberString__19CMenuResultsScreensFPcUi
unsigned int CMenuResultsScreens::GetCommaNumberString(char *lpcDest, unsigned int lunNum)
{
    // param char *lpcDest  (in $v0)
    // param unsigned int lunNum  (in $v0)
    {   // 0x001F1360-0x001F1460
        unsigned int lunKil;  // in $v0
        unsigned int lunMil;  // in $a3
        unsigned int lunBil;  // in $v1
    }
}

// 0x001F1460-0x001F1538 (216 bytes), lines 1033-1049
// ClearScreen__19CMenuResultsScreensFi
void CMenuResultsScreens::ClearScreen(int lbFrontEnd)
{
    // param CMenuResultsScreens *this  (in $v0)
    // param int lbFrontEnd  (in $v0)
    {   // 0x001F1460-0x001F1538
    }
}

// 0x001F1540-0x001F1BAC (1644 bytes), lines 818-1016
// Update__19CMenuResultsScreensFv
int CMenuResultsScreens::Update()
{
    // param CMenuResultsScreens *this  (in $s1)
    {   // 0x001F1540-0x001F1BAC
        char lcChar;  // in $a0
        unsigned int lunStrlen;  // in $s2
        int lbConfirm;  // in $v1
        int lnCurrentEntry;  // in $v0
        unsigned int lunActualPlayer;  // in $s4
        unsigned int lunPlayer;  // in $s3
        int lbColumnUpdated;  // in $v0
        CControllerMapping *lpController;  // in $s2
    }
}

// 0x001F1BB0-0x001F1BFC (76 bytes), lines 791-802
// ShowScreen__19CMenuResultsScreensFi
int CMenuResultsScreens::ShowScreen(int lbFrontEnd)
{
    // param CMenuResultsScreens *this  (in $s0)
    // param int lbFrontEnd  (in $v0)
    {   // 0x001F1BB0-0x001F1BFC
    }
}

// 0x001F1C00-0x001F1CE0 (224 bytes), lines 768-775
// HideScreen__19CMenuResultsScreensFv
void CMenuResultsScreens::HideScreen()
{
    // param CMenuResultsScreens *this  (in $v0)
    {   // 0x001F1C00-0x001F1CE0
    }
}

// 0x001F1CE0-0x001F2F4C (4716 bytes), lines 311-753
// SetScreen__19CMenuResultsScreensF20EMenuResultsScreenIDi
int CMenuResultsScreens::SetScreen(EMenuResultsScreenID leScreenID, int lbFrontEnd)
{
    // param CMenuResultsScreens *this  (in $s1)
    // param EMenuResultsScreenID leScreenID  (in $s2)
    // param int lbFrontEnd  (in $s0)
    {   // 0x001F1CE0-0x001F2F4C
        ECheat leCheat;  // in $v1
        EStringID leHeadingStringID;  // in $v0
        unsigned int lunHeadingStringID;  // in $v0
        EStringID lePlayer2StringID;  // in $v0
        EStringID lePlayer1StringID;  // in $v0
        EStringID lePlayer2StringID;  // in $v0
        EStringID lePlayer1StringID;  // in $v0
    }
}

// 0x001F2F70-0x001F2FAC (60 bytes), lines 264-269
// Initialise__19CMenuResultsScreensFv
void CMenuResultsScreens::Initialise()
{
    // param CMenuResultsScreens *this  (in $v0)
    {   // 0x001F2F70-0x001F2FAC
    }
}

