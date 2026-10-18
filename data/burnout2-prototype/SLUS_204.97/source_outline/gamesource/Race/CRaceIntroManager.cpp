// I:\Burnout 2 Code\gamesource\Race\CRaceIntroManager.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static float _gaarPosMtx[4][4];  // 0x002D5E80
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0

// ---- functions ----

// 0x0023D470-0x0023D8D8 (1128 bytes), lines 685-765
// GetPointOnSpline__17CRaceIntroManagerFP5RwV3dP14CRaceIntroShotf
void CRaceIntroManager::GetPointOnSpline(RwV3d *lpOutput, CRaceIntroShot *lpShot, float lrT)
{
    // param CRaceIntroManager *this  (in $v0)
    // param RwV3d *lpOutput  (in $v0)
    // param CRaceIntroShot *lpShot  (in $v0)
    // param float lrT  ($sp+192)
    {   // 0x0023D470-0x0023D8D8
        int i;  // in $t2
        int lnLastNode;  // in $v0
        float laarPosMtx[4][4];  // $sp+128
        RwV4d laTempResults[4];  // $sp+64
        RwMatrixTag *lpResultMatrix;  // in $v1
        RwMatrixTag lMatrix;  // $sp+0
    }
}

// 0x0023D8E0-0x0023D998 (184 bytes), lines 594-609
// GetFOV__17CRaceIntroManagerFf
float CRaceIntroManager::GetFOV(float lrAmount)
{
    // param CRaceIntroManager *this  (in $s1)
    // param float lrAmount  (optimised away)
    {   // 0x0023D8E0-0x0023D998
        int lnUpperIndex;  // in $v0
        int lnLowerIndex;  // in $s0
        int lnRange;  // in $v0
    }
}

// 0x0023D9A0-0x0023DA2C (140 bytes), lines 578-589
// GetTotalIntroTime__17CRaceIntroManagerFv
float CRaceIntroManager::GetTotalIntroTime()
{
    // param CRaceIntroManager *this  (in $v0)
    {   // 0x0023D9A0-0x0023DA2C
        int lnIndex;  // in $a2
        float lrTime;  // $sp+0
    }
}

// 0x0023DA30-0x0023DB28 (248 bytes), lines 548-563
// GetActiveShotTime__17CRaceIntroManagerFv
float CRaceIntroManager::GetActiveShotTime()
{
    // param CRaceIntroManager *this  (in $v0)
    {   // 0x0023DA30-0x0023DB28
    }
}

// 0x0023DB30-0x0023DD4C (540 bytes), lines 479-531
// Slerp__17CRaceIntroManagerFP6RtQuatP6RtQuatP6RtQuatf
void CRaceIntroManager::Slerp(RtQuat *lpResult, RtQuat *lpQuatA, RtQuat *lpQuatB, float lrAmount)
{
    // param RtQuat *lpResult  (in $s2)
    // param RtQuat *lpQuatA  (in $s1)
    // param RtQuat *lpQuatB  (in $s0)
    // param float lrAmount  (optimised away)
    {   // 0x0023DB30-0x0023DD4C
        float lrSinAomt;  // $sp+80
        float lrSinAt;  // optimised away
        float lrSinA;  // optimised away
        float lrAngle;  // optimised away
    }
}

// 0x0023DD50-0x0023DD70 (32 bytes), lines 376-377
// FadeActiveShot__17CRaceIntroManagerFv
int CRaceIntroManager::FadeActiveShot()
{
    // param CRaceIntroManager *this  (in $v0)
    {   // 0x0023DD50-0x0023DD70
    }
}

// 0x0023DD70-0x0023DE00 (144 bytes), lines 346-371
// SetActiveShot__17CRaceIntroManagerFi
int CRaceIntroManager::SetActiveShot(int lnShotNumber)
{
    // param CRaceIntroManager *this  (in $v0)
    // param int lnShotNumber  (in $v0)
    {   // 0x0023DD70-0x0023DE00
    }
}

// 0x0023DE00-0x0023DF58 (344 bytes), lines 289-325
// GetOrientation__17CRaceIntroManagerFfP6RtQuat
void CRaceIntroManager::GetOrientation(float lrArrayPos, RtQuat *lpResult)
{
    // param CRaceIntroManager *this  (in $s1)
    // param float lrArrayPos  (optimised away)
    // param RtQuat *lpResult  (in $s0)
    {   // 0x0023DE00-0x0023DF58
        int lnFrame;  // in $a0
        RtQuat *lpUpperQuat;  // in $v0
        RtQuat *lpLowerQuat;  // in $v0
        float lrInterp;  // $sp+80
        int lnRange;  // in $v0
    }
}

// 0x0023DF60-0x0023E0E8 (392 bytes), lines 235-268
// GetPosition__17CRaceIntroManagerFfP5RwV3d
void CRaceIntroManager::GetPosition(float lrArrayPos, RwV3d *lpResult)
{
    // param CRaceIntroManager *this  (in $s1)
    // param float lrArrayPos  (optimised away)
    // param RwV3d *lpResult  (in $s0)
    {   // 0x0023DF60-0x0023E0E8
        RwV3d *lpLowerPos;  // in $v0
        int lnLowerIndex;  // in $s2
        int lnRange;  // in $v0
    }
}

// 0x0023E0F0-0x0023E3D0 (736 bytes), lines 104-214
// Reset__17CRaceIntroManagerFii
int CRaceIntroManager::Reset(int lbUseOutroData, int lbIsReplay)
{
    // param CRaceIntroManager *this  (in $s3)
    // param int lbUseOutroData  (in $s2)
    // param int lbIsReplay  (in $s1)
    {   // 0x0023E0F0-0x0023E3D0
    }
}

