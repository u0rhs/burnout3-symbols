// I:\Burnout 2 Code\gamesource\Render\CCrashReplayCamera.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
char *gaacCrashCameraNames[32];
static RwV3d kYAxis;  // 0x002D33C8
static unsigned int gValueTableCRASHOffsetX[32];  // 0x002D33E0
static unsigned int gValueTableCRASHOffsetY[32];  // 0x002D3460
static unsigned int gValueTableCRASHOffsetZ[32];  // 0x002D34E0
static unsigned int gValueTableCRASHFOV[32];  // 0x002D3560
float CTimer::mrGameTimestepSeconds;  // 0x00310898
int CTimer::mbSloMo;  // 0x003108A0
int CCrashReplayCamera::_mbValuesRegistered;  // 0x00310C9C
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
float CCrashReplayCamera::_marOffsetXValues[32];  // 0x00458460
float CCrashReplayCamera::_marOffsetYValues[32];  // 0x004584E0
float CCrashReplayCamera::_marOffsetZValues[32];  // 0x00458560
float CCrashReplayCamera::_marFOVValues[32];  // 0x004585E0

// ---- functions ----

// 0x00208E80-0x0020A61C (6044 bytes), lines 950-1370
// UpdateCarnageCam__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdateCarnageCam()
{
    // param CCrashReplayCamera *this  (in $s4)
    {   // 0x00208E80-0x0020A61C
        RwMatrixTag *lpCamMat;  // in $v0
        float u3;  // optimised away
        float u2;  // optimised away
        float lrRightDist;  // $sp+288
        float lrLeftDist;  // optimised away
        RwV3d lRight;  // $sp+272
        RwV3d lLeft;  // $sp+256
        int lnD1;  // in $s1
        int lnC1;  // in $s5
        int lnB1;  // in $s6
        int lnA1;  // in $s7
        int lnD0;  // in $fp
        int lnC0;  // $sp+224
        int lnB0;  // $sp+208
        int lnA0;  // $sp+192
        float Speed;  // $sp+288
        RwV3d lForwards;  // $sp+240
        float Dist;  // optimised away
        float lCurrentParam;  // $sp+288
        float lStackParam;  // optimised away
        float StartDist;  // $sp+288
        float u;  // optimised away
        int CurrNode;  // in $s3
        RwMatrixTag *pCamMatrix;  // in $s1
        CLane *pRacingLane;  // in $s0
    }
}

// 0x0020A620-0x0020A6FC (220 bytes), lines 894-928
// _MoveAlongLane__FP5CLaneff
static float _MoveAlongLane(CLane *pLane, float Node, float Speed)
{
    // param CLane *pLane  (in $v0)
    // param float Node  ($sp+0)
    // param float Speed  ($sp+0)
    {   // 0x0020A620-0x0020A6FC
        int CurrNode;  // in $v1
        float Param;  // optimised away
        float SectionLength;  // $sp+0
    }
}

// 0x0020A700-0x0020AA00 (768 bytes), lines 825-888
// UpdateInterestPan__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdateInterestPan()
{
    // param CCrashReplayCamera *this  (in $s1)
    {   // 0x0020A700-0x0020AA00
        RwV3d lWallNormal;  // $sp+64
        float lrColDist;  // $sp+76
        RwMatrixTag *lpCamMat;  // in $s0
    }
}

// 0x0020AA00-0x0020AD08 (776 bytes), lines 741-807
// UpdateInterestTrack__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdateInterestTrack()
{
    // param CCrashReplayCamera *this  (in $s0)
    {   // 0x0020AA00-0x0020AD08
        RwV3d lWallNormal;  // $sp+64
        float lrColDist;  // $sp+76
        RwMatrixTag *lpCamMat;  // in $s1
    }
}

// 0x0020AD10-0x0020B0B0 (928 bytes), lines 671-723
// UpdatePlayerPan__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdatePlayerPan()
{
    // param CCrashReplayCamera *this  (in $s1)
    {   // 0x0020AD10-0x0020B0B0
        RwV3d lWallNormal;  // $sp+48
        float lrColDist;  // $sp+60
        RwMatrixTag *lpCamMat;  // in $s0
    }
}

// 0x0020B0B0-0x0020B4D0 (1056 bytes), lines 597-653
// UpdatePlayerTrack__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdatePlayerTrack()
{
    // param CCrashReplayCamera *this  (in $s1)
    {   // 0x0020B0B0-0x0020B4D0
        RwV3d lWallNormal;  // $sp+48
        float lrColDist;  // $sp+60
        RwMatrixTag *lpCamMat;  // in $s0
    }
}

// 0x0020B4D0-0x0020B8B8 (1000 bytes), lines 479-579
// UpdateCamera__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdateCamera()
{
    // param CCrashReplayCamera *this  (in $s2)
    {   // 0x0020B4D0-0x0020B8B8
        float lrFOV;  // optimised away
        RwFrame *lpCamFrame;  // in $s1
        RwMatrixTag *lpCamMat;  // in $s0
    }
}

// 0x0020B8C0-0x0020BBEC (812 bytes), lines 380-443
// SelectCameraFromList__18CCrashReplayCameraFv
void CCrashReplayCamera::SelectCameraFromList()
{
    // param CCrashReplayCamera *this  (in $s0)
    {   // 0x0020B8C0-0x0020BBEC
    }
}

// 0x0020BBF0-0x0020BCF8 (264 bytes), lines 336-364
// UpdateCameraList__18CCrashReplayCameraFv
void CCrashReplayCamera::UpdateCameraList()
{
    // param CCrashReplayCamera *this  (in $s3)
    {   // 0x0020BBF0-0x0020BCF8
        int lnIndex;  // in $s1
        float lrColDist;  // $sp+92
        RwV3d *lpCarPos;  // in $s0
        RwV3d lDesiredPosition;  // $sp+80
    }
}

// 0x0020BD00-0x0020BF4C (588 bytes), lines 226-302
// Update__18CCrashReplayCameraFP8CRaceCarP7CCameraP11CCameraData
void CCrashReplayCamera::Update(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CCrashReplayCamera *this  (in $s2)
    // param CRaceCar *lpCar  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x0020BD00-0x0020BF4C
    }
}

// 0x0020BF50-0x0020C018 (200 bytes), lines 191-205
// RegisterValues__18CCrashReplayCameraFv
void CCrashReplayCamera::RegisterValues()
{
    {   // 0x0020BF50-0x0020C018
        int lnCamera;  // in $s1
    }
}

// 0x0020C020-0x0020C030 (16 bytes), lines 174-177
// Init__18CCrashReplayCameraFP7CCameraP11CCameraData
int CCrashReplayCamera::Init(CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CCrashReplayCamera *this  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x0020C020-0x0020C030
    }
}

