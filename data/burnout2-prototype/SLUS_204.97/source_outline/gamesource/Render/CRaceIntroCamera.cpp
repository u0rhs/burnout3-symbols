// I:\Burnout 2 Code\gamesource\Render\CRaceIntroCamera.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CMenuManager gMenuManager;  // 0x003B0E60

// ---- functions ----

// 0x0025A1F0-0x0025A744 (1364 bytes), lines 342-397
// UpdateStandardCamera__16CRaceIntroCameraFv
void CRaceIntroCamera::UpdateStandardCamera()
{
    // param CRaceIntroCamera *this  (in $s3)
    {   // 0x0025A1F0-0x0025A744
        float rS;  // $sp+160
        RtQuat lCameraOrientation;  // $sp+128
        RwV3d lCameraPosition;  // $sp+144
        RwMatrixTag *lpMatrix;  // in $s1
        RwFrame *lpFrame;  // in $s0
    }
}

// 0x0025A750-0x0025A9A4 (596 bytes), lines 226-326
// Update__16CRaceIntroCameraFP7CCamera
void CRaceIntroCamera::Update(CCamera *lpParentCamera)
{
    // param CRaceIntroCamera *this  (in $s2)
    // param CCamera *lpParentCamera  (in $s1)
    {   // 0x0025A750-0x0025A9A4
        RwRGBA black;  // $sp+76
        RwRGBA lFadeCol;  // $sp+72
        float lrTimeElapsed;  // optimised away
    }
}

// 0x0025A9B0-0x0025AAAC (252 bytes), lines 169-208
// StartReplayIntro__16CRaceIntroCameraFv
int CRaceIntroCamera::StartReplayIntro()
{
    // param CRaceIntroCamera *this  (in $s0)
    {   // 0x0025A9B0-0x0025AAAC
    }
}

// 0x0025AAB0-0x0025ABCC (284 bytes), lines 70-113
// StartIntro__16CRaceIntroCameraFv
int CRaceIntroCamera::StartIntro()
{
    // param CRaceIntroCamera *this  (in $s1)
    {   // 0x0025AAB0-0x0025ABCC
    }
}

