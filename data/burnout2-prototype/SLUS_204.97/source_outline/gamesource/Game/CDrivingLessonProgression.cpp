// I:\Burnout 2 Code\gamesource\Game\CDrivingLessonProgression.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacLessonNames[6];
ELessonObjective CDrivingLessonProgression::_maeLessonObjectives[6];  // 0x002B9040
CDrivingLesson CDrivingLessonProgression::_maDrivingLessons[6];  // 0x002B9060
static unsigned int gValueTableLESSONGoldMedal[6];  // 0x002CDC00
static unsigned int gValueTableLESSONSilverMedal[6];  // 0x002CDC20
static unsigned int gValueTableLESSONBronzeMedal[6];  // 0x002CDC40
static unsigned int gValueTableLESSONInitialBurn[6];  // 0x002CDC60
CGame gGame;  // 0x003186E0

// ---- functions ----

// 0x001F2FB0-0x001F3038 (136 bytes), lines 461-559
// RegisterValues__25CDrivingLessonProgressionFv
void CDrivingLessonProgression::RegisterValues()
{
    {   // 0x001F2FB0-0x001F3038
        int lnIndex;  // in $t4
    }
}

// 0x001F3040-0x001F3364 (804 bytes), lines 311-442
// LessonFinished__25CDrivingLessonProgressionFv
void CDrivingLessonProgression::LessonFinished()
{
    // param CDrivingLessonProgression *this  (in $v0)
    {   // 0x001F3040-0x001F3364
        ELessonMedal leCurrentMedal;  // in $v1
        ELessonObjective leCurrentObjective;  // in $t0
    }
}

// 0x001F3370-0x001F33A0 (48 bytes), lines 295-300
// Init__25CDrivingLessonProgressionFv
void CDrivingLessonProgression::Init()
{
    // param CDrivingLessonProgression *this  (in $s0)
    {   // 0x001F3370-0x001F33A0
    }
}

// 0x001F33A0-0x001F33D4 (52 bytes), lines 289-291
// InitSave__29CDrivingLessonProgressionSaveFv
void CDrivingLessonProgressionSave::InitSave()
{
    // param CDrivingLessonProgressionSave *this  (in $v0)
    {   // 0x001F33A0-0x001F33D4
    }
}

// 0x001F33E0-0x001F3438 (88 bytes), lines 267-281
// SetAllLocked__29CDrivingLessonProgressionSaveFi
void CDrivingLessonProgressionSave::SetAllLocked(int lbLock)
{
    // param CDrivingLessonProgressionSave *this  (in $v0)
    // param int lbLock  (in $v0)
    {   // 0x001F33E0-0x001F3438
        int lnLesson;  // in $a3
    }
}

// 0x001F3440-0x001F3478 (56 bytes), lines 248-259
// GetNumMedals__29CDrivingLessonProgressionSaveF12ELessonMedal
int CDrivingLessonProgressionSave::GetNumMedals(ELessonMedal leMedal)
{
    // param CDrivingLessonProgressionSave *this  (in $v0)
    // param ELessonMedal leMedal  (in $v0)
    {   // 0x001F3440-0x001F3478
        int lnMedalTotal;  // in $v0
        int lnLesson;  // in $a2
    }
}

// 0x001F3480-0x001F3490 (16 bytes), lines 240-241
// GetMedal__25CDrivingLessonProgressionF9ELessonID
ELessonMedal CDrivingLessonProgression::GetMedal(ELessonID leLessonID)
{
    // param CDrivingLessonProgression *this  (in $v0)
    // param ELessonID leLessonID  (in $v0)
    {   // 0x001F3480-0x001F3490
    }
}

// 0x001F3490-0x001F3498 (8 bytes), lines 221-221
// SetCurrentLesson__25CDrivingLessonProgressionF9ELessonID
void CDrivingLessonProgression::SetCurrentLesson(ELessonID leLessonID)
{
    // param CDrivingLessonProgression *this  (in $v0)
    // param ELessonID leLessonID  (in $v0)
    {   // 0x001F3490-0x001F3498
    }
}

// 0x001F34A0-0x001F34A8 (8 bytes), lines 214-214
// GetLastAttemptScore__25CDrivingLessonProgressionFv
float CDrivingLessonProgression::GetLastAttemptScore()
{
    // param CDrivingLessonProgression *this  (in $v0)
    {   // 0x001F34A0-0x001F34A8
    }
}

// 0x001F34B0-0x001F34B8 (8 bytes), lines 208-208
// GetLastAttemptMedal__25CDrivingLessonProgressionFv
ELessonMedal CDrivingLessonProgression::GetLastAttemptMedal()
{
    // param CDrivingLessonProgression *this  (in $v0)
    {   // 0x001F34B0-0x001F34B8
    }
}

// 0x001F34C0-0x001F34DC (28 bytes), lines 201-202
// GetCurrentLessonObjective__25CDrivingLessonProgressionFv
ELessonObjective CDrivingLessonProgression::GetCurrentLessonObjective()
{
    // param CDrivingLessonProgression *this  (in $v0)
    {   // 0x001F34C0-0x001F34DC
    }
}

// 0x001F34E0-0x001F34E8 (8 bytes), lines 196-196
// GetCurrentLessonID__25CDrivingLessonProgressionFv
ELessonID CDrivingLessonProgression::GetCurrentLessonID()
{
    // param CDrivingLessonProgression *this  (in $v0)
    {   // 0x001F34E0-0x001F34E8
    }
}

// 0x001F34F0-0x001F3510 (32 bytes), lines 189-190
// GetCurrentLesson__25CDrivingLessonProgressionFv
CDrivingLesson *CDrivingLessonProgression::GetCurrentLesson()
{
    // param CDrivingLessonProgression *this  (in $v0)
    {   // 0x001F34F0-0x001F3510
    }
}

// 0x001F3510-0x001F352C (28 bytes), lines 183-184
// GetLesson__25CDrivingLessonProgressionF9ELessonID
CDrivingLesson *CDrivingLessonProgression::GetLesson(ELessonID leLessonID)
{
    // param ELessonID leLessonID  (in $v0)
    {   // 0x001F3510-0x001F352C
    }
}

// 0x001F3530-0x001F354C (28 bytes), lines 121-122
// GetLessonObjective__14CDrivingLessonCFv
ELessonObjective CDrivingLesson::GetLessonObjective() const
{
    // param CDrivingLesson *this  (in $v0)
    {   // 0x001F3530-0x001F354C
    }
}

