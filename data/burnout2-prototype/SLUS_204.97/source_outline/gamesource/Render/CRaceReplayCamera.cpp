// I:\Burnout 2 Code\gamesource\Render\CRaceReplayCamera.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kYAxis;  // 0x002D3F08
static unsigned int kxCameraBehaviourMask;  // 0x00310628
static unsigned int kxCameraTypeMask;  // 0x0031062C
EReplayCameraBehaviourFlag leBehaviours;  // 0x00310CBC
CGame gGame;  // 0x003186E0
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280

// ---- functions ----

// 0x00210F70-0x00211224 (692 bytes), lines 1410-1463
// ApplyCameraState__17CRaceReplayCameraFv
void CRaceReplayCamera::ApplyCameraState()
{
    // param CRaceReplayCamera *this  (in $s2)
    {   // 0x00210F70-0x00211224
        RwMatrixTag *lpMatrix;  // in $s1
        RwFrame *lpFrame;  // in $s0
    }
}

// 0x00211230-0x0021157C (844 bytes), lines 1314-1393
// ApplySteadinessEffect__17CRaceReplayCameraFi
void CRaceReplayCamera::ApplySteadinessEffect()
{
    // param CRaceReplayCamera *this  (in $s1)
    {   // 0x00211230-0x0021157C
        int yshrinking;  // at 0x00310CC8
        int xshrinking;  // at 0x00310CC0
        signed char init;  // at 0x00310CCC
        signed char init;  // at 0x00310CC4
    }
}

// 0x00211580-0x00211588 (8 bytes), lines 1297-1297
// ApplyHandicamEffect__17CRaceReplayCameraFi
void CRaceReplayCamera::ApplyHandicamEffect()
{
    {   // 0x00211580-0x00211588
    }
}

// 0x00211590-0x00211790 (512 bytes), lines 1169-1225
// ApplyProximityShake__17CRaceReplayCameraFi
void CRaceReplayCamera::ApplyProximityShake(int lbInterpolated)
{
    // param CRaceReplayCamera *this  (in $s0)
    // param int lbInterpolated  (in $v0)
    {   // 0x00211590-0x00211790
        float lrDistSquared;  // $sp+48
        float lrOuterRadiusSquared;  // optimised away
        float lrInnerRadiusSquared;  // optimised away
        float lrShakeExtent;  // optimised away
    }
}

// 0x00211790-0x00211924 (404 bytes), lines 1075-1116
// ApplyDynamicFOV__17CRaceReplayCameraFi
void CRaceReplayCamera::ApplyDynamicFOV()
{
    // param CRaceReplayCamera *this  (in $s0)
    {   // 0x00211790-0x00211924
        float lrFOV;  // $sp+64
        float ViewRadius;  // optimised away
        float lrFocalLength;  // optimised away
        RwV3d fLen;  // $sp+48
    }
}

// 0x00211930-0x00211ED4 (1444 bytes), lines 926-1058
// AnimatedTargetCameraUpdate__17CRaceReplayCameraFv
void CRaceReplayCamera::AnimatedTargetCameraUpdate()
{
    // param CRaceReplayCamera *this  (in $s1)
    {   // 0x00211930-0x00211ED4
        RwV3d offset;  // $sp+240
        RwV3d target;  // $sp+224
        RwMatrixTag *carMatrix;  // in $v0
        float lrP;  // $sp+256
        RwMatrixTag *carMatrix;  // in $v0
        float lrP;  // $sp+256
        RwV3d lEndPos;  // $sp+208
        RwV3d lStartPos;  // $sp+192
        CGt2dMatrix lEndMat;  // $sp+96
        CGt2dMatrix lStartMat;  // $sp+64
        float lrCarDist;  // optimised away
        float lrStartCarDist;  // optimised away
    }
}

// 0x00211EE0-0x00212194 (692 bytes), lines 822-873
// StaticCarCameraUpdate__17CRaceReplayCameraFv
void CRaceReplayCamera::StaticCarCameraUpdate()
{
    // param CRaceReplayCamera *this  (in $s2)
    {   // 0x00211EE0-0x00212194
        float rS;  // $sp+176
        RwMatrixTag lMat;  // $sp+80
        RwV3d offset;  // $sp+160
        RwV3d offset;  // $sp+144
        RwMatrixTag *carMatrix;  // in $s1
        RwMatrixTag *lpCamMatrix;  // in $s0
    }
}

// 0x002121A0-0x00212338 (408 bytes), lines 780-806
// StaticPanCameraUpdate__17CRaceReplayCameraFv
void CRaceReplayCamera::StaticPanCameraUpdate()
{
    // param CRaceReplayCamera *this  (in $s0)
    {   // 0x002121A0-0x00212338
        RwV3d offset;  // $sp+64
        RwV3d target;  // $sp+48
        RwMatrixTag *carMatrix;  // in $v0
        RwMatrixTag *lpCamMatrix;  // in $s1
    }
}

// 0x00212340-0x0021242C (236 bytes), lines 747-764
// StaticCameraUpdate__17CRaceReplayCameraFv
void CRaceReplayCamera::StaticCameraUpdate()
{
    // param CRaceReplayCamera *this  (in $s0)
    {   // 0x00212340-0x0021242C
        float rS;  // optimised away
    }
}

// 0x00212430-0x0021271C (748 bytes), lines 644-731
// TriggerUpdate__17CRaceReplayCameraFv
void CRaceReplayCamera::TriggerUpdate()
{
    // param CRaceReplayCamera *this  (in $s1)
    {   // 0x00212430-0x0021271C
    }
}

// 0x00212720-0x00212A04 (740 bytes), lines 461-597
// TriggerTransition__17CRaceReplayCameraFv
void CRaceReplayCamera::TriggerTransition()
{
    // param CRaceReplayCamera *this  (in $s0)
    {   // 0x00212720-0x00212A04
        unsigned int lxFlags;  // in $a0
        float lrTransitionTime;  // optimised away
    }
}

// 0x00212A10-0x00212B8C (380 bytes), lines 411-445
// Slerp__17CRaceReplayCameraFf
void CRaceReplayCamera::Slerp(float lrAmount)
{
    // param CRaceReplayCamera *this  (in $s0)
    // param float lrAmount  (optimised away)
    {   // 0x00212A10-0x00212B8C
        float lrTerm2;  // optimised away
        float lrTerm1;  // optimised away
        float lrInvSin;  // optimised away
        float lrAngle;  // optimised away
    }
}

// 0x00212B90-0x00212FB0 (1056 bytes), lines 100-340
// Update__17CRaceReplayCameraFP7CCameraP8CRaceCar
void CRaceReplayCamera::Update(CCamera *lpParentCamera, CRaceCar *lpCar)
{
    // param CRaceReplayCamera *this  (in $s4)
    // param CCamera *lpParentCamera  (in $s3)
    // param CRaceCar *lpCar  (in $s0)
    {   // 0x00212B90-0x00212FB0
        RwMatrixTag *lpMatrix;  // in $s0
        RwV3d *lpPos;  // in $v0
        RwV3d *lpPos;  // in $v0
        RwMatrixTag *lpCamMatrix;  // in $s1
        CReplayTriggerData *lpLastCollided;  // in $s0
    }
}

// 0x00212FB0-0x00212FF8 (72 bytes), lines 69-82
// Init__17CRaceReplayCameraFP7CCamera
int CRaceReplayCamera::Init(CCamera *lpParentCamera)
{
    // param CRaceReplayCamera *this  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    {   // 0x00212FB0-0x00212FF8
    }
}

