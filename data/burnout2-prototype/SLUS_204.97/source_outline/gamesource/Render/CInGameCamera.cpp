// I:\Burnout 2 Code\gamesource\Render\CInGameCamera.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
int _cameraIntersectionCallback(SRCCollSphere *, SRCCollisionTriangle *, void *);  // 0x00208DE0
static RwV3d kXAxis;  // 0x002D2580
static RwV3d kYAxis;  // 0x002D2590
static RwV3d kZAxis;  // 0x002D25A0
static RwV3d kZeroVector;  // 0x002D25B0
static unsigned int gValueTableCAMERABumperOffsetY[22];  // 0x002D25C0
static unsigned int gValueTableCAMERABumperOffsetZ[22];  // 0x002D2620
static unsigned int gValueTableCAMERABumperFOV[22];  // 0x002D2680
static unsigned int gValueTableCAMERABumperOffsetYBurn[22];  // 0x002D26E0
static unsigned int gValueTableCAMERABumperOffsetZBurn[22];  // 0x002D2740
static unsigned int gValueTableCAMERABumperFOVBurn[22];  // 0x002D27A0
static unsigned int gValueTableCAMERAFollowOffsetY[22];  // 0x002D2800
static unsigned int gValueTableCAMERAFollowOffsetZ[22];  // 0x002D2860
static unsigned int gValueTableCAMERAFollowLookAtY[22];  // 0x002D28C0
static unsigned int gValueTableCAMERAFollowLookAtZ[22];  // 0x002D2920
static unsigned int gValueTableCAMERAFollowSpringY[22];  // 0x002D2980
static unsigned int gValueTableCAMERAFollowSpringX[22];  // 0x002D29E0
static unsigned int gValueTableCAMERAFollowDownAngle[22];  // 0x002D2A40
static unsigned int gValueTableCAMERAFollowFOV[22];  // 0x002D2AA0
static unsigned int gValueTableCAMERAFollowOffsetYBurn[22];  // 0x002D2B00
static unsigned int gValueTableCAMERAFollowOffsetZBurn[22];  // 0x002D2B60
static unsigned int gValueTableCAMERAFollowFOVBurn[22];  // 0x002D2BC0
static unsigned int gValueTableCAMERALookBackOffsetY[22];  // 0x002D2C20
static unsigned int gValueTableCAMERALookBackOffsetZ[22];  // 0x002D2C80
static unsigned int gValueTableCAMERALookBackFOV[22];  // 0x002D2CE0
static unsigned int gValueTableCAMERAELBOffsetY[22];  // 0x002D2D40
static unsigned int gValueTableCAMERAELBOffsetZ[22];  // 0x002D2DA0
static unsigned int gValueTableCAMERAELBLookAtY[22];  // 0x002D2E00
static unsigned int gValueTableCAMERAELBLookAtZ[22];  // 0x002D2E60
static unsigned int gValueTableCAMERAELBSpringY[22];  // 0x002D2EC0
static unsigned int gValueTableCAMERAELBSpringX[22];  // 0x002D2F20
static unsigned int gValueTableCAMERAELBDownAngle[22];  // 0x002D2F80
static unsigned int gValueTableCAMERAELBFOV[22];  // 0x002D2FE0
static unsigned int gValueTableCAMERAELBOffsetYBurn[22];  // 0x002D3040
static unsigned int gValueTableCAMERAELBOffsetZBurn[22];  // 0x002D30A0
static unsigned int gValueTableCAMERAELBFOVBurn[22];  // 0x002D3100
static unsigned int gValueTableCAMERADebugTopdownOffsetY[22];  // 0x002D3160
static unsigned int gValueTableCAMERADebugTopdownOffsetZ[22];  // 0x002D31C0
static unsigned int gValueTableCAMERADebugTopdownFOV[22];  // 0x002D3220
static unsigned int gValueTableCAMERADebugTopdownOffsetYBurn[22];  // 0x002D3280
static unsigned int gValueTableCAMERADebugTopdownOffsetZBurn[22];  // 0x002D32E0
static unsigned int gValueTableCAMERADebugTopdownFOVBurn[22];  // 0x002D3340
static unsigned int gValueTableCAMERADebugTopdownLowerOffsetY[1];  // 0x002D3398
static unsigned int gValueTableCAMERADebugTopdownLowerOffsetZ[1];  // 0x002D33A0
static unsigned int gValueTableCAMERADebugTopdownLowerFOV[1];  // 0x002D33A8
static unsigned int gValueTableCAMERADebugTopdownLowerOffYBurn[1];  // 0x002D33B0
static unsigned int gValueTableCAMERADebugTopdownLowerOffZBurn[1];  // 0x002D33B8
static unsigned int gValueTableCAMERADebugTopdownLowerFOVBurn[1];  // 0x002D33C0
float CTimer::mrGameTimestepSeconds;  // 0x00310898
float CInGameCamera::_mrDebugTopdownLowerOffsetYValue;  // 0x00310C80
float CInGameCamera::_mrDebugTopdownLowerOffsetZValue;  // 0x00310C84
float CInGameCamera::_mrDebugTopdownLowerFOVValue;  // 0x00310C88
float CInGameCamera::_mrDebugTopdownLowerOffsetYBurnValue;  // 0x00310C8C
float CInGameCamera::_mrDebugTopdownLowerOffsetZBurnValue;  // 0x00310C90
float CInGameCamera::_mrDebugTopdownLowerFOVBurnValue;  // 0x00310C94
int CInGameCamera::_mbValuesRegistered;  // 0x00310C98
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CPlayerCar gaPlayerCars[4];  // 0x0034AD80
float CInGameCamera::_marBumperOffsetYValues[22];  // 0x00457650
float CInGameCamera::_marBumperOffsetZValues[22];  // 0x004576B0
float CInGameCamera::_marBumperFOVValues[22];  // 0x00457710
float CInGameCamera::_marBumperOffsetYBurnValues[22];  // 0x00457770
float CInGameCamera::_marBumperOffsetZBurnValues[22];  // 0x004577D0
float CInGameCamera::_marBumperFOVBurnValues[22];  // 0x00457830
float CInGameCamera::_marFollowOffsetYValues[22];  // 0x00457890
float CInGameCamera::_marFollowOffsetZValues[22];  // 0x004578F0
float CInGameCamera::_marFollowLookAtYValues[22];  // 0x00457950
float CInGameCamera::_marFollowLookAtZValues[22];  // 0x004579B0
float CInGameCamera::_marFollowSpringYValues[22];  // 0x00457A10
float CInGameCamera::_marFollowSpringXValues[22];  // 0x00457A70
float CInGameCamera::_marFollowDownAngleValues[22];  // 0x00457AD0
float CInGameCamera::_marFollowFOVValues[22];  // 0x00457B30
float CInGameCamera::_marFollowOffsetYBurnValues[22];  // 0x00457B90
float CInGameCamera::_marFollowOffsetZBurnValues[22];  // 0x00457BF0
float CInGameCamera::_marFollowFOVBurnValues[22];  // 0x00457C50
float CInGameCamera::_marLookBackExtOffsetYValues[22];  // 0x00457CB0
float CInGameCamera::_marLookBackExtOffsetZValues[22];  // 0x00457D10
float CInGameCamera::_marLookBackExtLookAtYValues[22];  // 0x00457D70
float CInGameCamera::_marLookBackExtLookAtZValues[22];  // 0x00457DD0
float CInGameCamera::_marLookBackExtSpringYValues[22];  // 0x00457E30
float CInGameCamera::_marLookBackExtSpringXValues[22];  // 0x00457E90
float CInGameCamera::_marLookBackExtDownAngleValues[22];  // 0x00457EF0
float CInGameCamera::_marLookBackExtFOVValues[22];  // 0x00457F50
float CInGameCamera::_marLookBackExtOffsetYBurnValues[22];  // 0x00457FB0
float CInGameCamera::_marLookBackExtOffsetZBurnValues[22];  // 0x00458010
float CInGameCamera::_marLookBackExtFOVBurnValues[22];  // 0x00458070
float CInGameCamera::_marLookBackOffsetYValues[22];  // 0x004580D0
float CInGameCamera::_marLookBackOffsetZValues[22];  // 0x00458130
float CInGameCamera::_marLookBackFOVValues[22];  // 0x00458190
float CInGameCamera::_marDebugTopdownOffsetYValues[22];  // 0x004581F0
float CInGameCamera::_marDebugTopdownOffsetZValues[22];  // 0x00458250
float CInGameCamera::_marDebugTopdownFOVValues[22];  // 0x004582B0
float CInGameCamera::_marDebugTopdownOffsetYBurnValues[22];  // 0x00458310
float CInGameCamera::_marDebugTopdownOffsetZBurnValues[22];  // 0x00458370
float CInGameCamera::_marDebugTopdownFOVBurnValues[22];  // 0x004583D0

// ---- functions ----

// 0x002042E0-0x00204D7C (2716 bytes), lines 1922-2054
// UpdatePursuitEnd__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdatePursuitEnd(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s3)
    // param CRaceCar *lpCar  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $s2)
    {   // 0x002042E0-0x00204D7C
        RwV2d viewwindow;  // $sp+296
        RwV3d away;  // $sp+280
        float lrLastY;  // $sp+304
        RwV3d away;  // $sp+264
        RwMatrixTag *pCamMatrix;  // in $v0
        RwFrame *pCamFrame;  // in $s0
        RwMatrixTag carMatrix;  // $sp+160
        RwMatrixTag targetMatrix;  // $sp+96
        RwV3d yaxis;  // $sp+248
        RwV3d currentPos;  // $sp+232
        float FOV;  // optimised away
        float switchTime;  // optimised away
        float yVelocity;  // optimised away
    }
}

// 0x00204D80-0x002058D4 (2900 bytes), lines 1750-1897
// UpdatePursuitStartLine__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdatePursuitStartLine(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s4)
    // param CRaceCar *lpCar  (in $s3)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $s2)
    {   // 0x00204D80-0x002058D4
        RwV2d viewwindow;  // $sp+344
        RwV3d away;  // $sp+328
        float lrLastY;  // $sp+352
        float lrTime;  // optimised away
        RwV3d away;  // $sp+312
        RwMatrixTag *pCamMatrix;  // in $s0
        RwFrame *pCamFrame;  // in $s5
        RwMatrixTag targetMatrix;  // $sp+208
        RwMatrixTag carMatrix;  // $sp+144
        RwV3d yaxis;  // $sp+296
        RwV3d currentPos;  // $sp+280
        float FOV;  // optimised away
        float switchTime;  // optimised away
        float yVelocity;  // optimised away
    }
}

// 0x002058E0-0x00205F78 (1688 bytes), lines 1583-1728
// UpdateDebugTopdownLower__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdateDebugTopdownLower(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s4)
    // param CRaceCar *lpCar  (in $s3)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x002058E0-0x00205F78
        RwV3d flen;  // $sp+272
        RwV2d viewwindow;  // $sp+264
        RwMatrixTag *pCamMatrix;  // in $s1
        RwFrame *pCamFrame;  // in $s0
        RwMatrixTag carMatrix;  // $sp+144
        RwV3d xaxis;  // $sp+248
        RwV3d offset;  // $sp+232
        float currentSpringY;  // optimised away
        float FOV;  // optimised away
        float angleY;  // optimised away
        float angleX;  // optimised away
        RwV3d carLookAtPos;  // $sp+216
    }
}

// 0x00205F80-0x002066F4 (1908 bytes), lines 1416-1561
// UpdateDebugTopdown__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdateDebugTopdown(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s4)
    // param CRaceCar *lpCar  (in $s3)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00205F80-0x002066F4
        RwV3d flen;  // $sp+288
        RwV2d viewwindow;  // $sp+280
        RwMatrixTag *pCamMatrix;  // in $s2
        RwFrame *pCamFrame;  // in $s1
        RwMatrixTag carMatrix;  // $sp+160
        RwV3d xaxis;  // $sp+264
        RwV3d offset;  // $sp+248
        float currentSpringY;  // optimised away
        float FOV;  // optimised away
        float angleY;  // optimised away
        float angleX;  // optimised away
        RwV3d carLookAtPos;  // $sp+232
        ECarID eCarID;  // in $s0
    }
}

// 0x00206700-0x00206DA0 (1696 bytes), lines 1204-1394
// UpdateUserControlled__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdateUserControlled(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s0)
    // param CRaceCar *lpCar  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00206700-0x00206DA0
        RwV3d lPos;  // $sp+160
        float lrZ;  // optimised away
        float lrF;  // $sp+176
        float lrD;  // $sp+176
        float lrY;  // optimised away
        float lrX;  // optimised away
        float lrYaw;  // optimised away
        float lrRoll;  // optimised away
        float lrPitch;  // $sp+176
        float lrDistance;  // $sp+176
        float lrYAngle;  // optimised away
        float lrXAngle;  // optimised away
        float lrFOV;  // optimised away
        RwMatrixTag *lpCarMatrix;  // in $s3
        RwMatrixTag *lpCamMatrix;  // in $s2
        RwFrame *lpCamFrame;  // in $s1
    }
}

// 0x00206DA0-0x002072F8 (1368 bytes), lines 1104-1184
// UpdateBumper__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdateBumper(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s4)
    // param CRaceCar *lpCar  (in $s3)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00206DA0-0x002072F8
        RwV3d flen;  // $sp+256
        RwV2d viewwindow;  // $sp+248
        RwMatrixTag *pCamMatrix;  // in $s1
        RwFrame *pCamFrame;  // in $s5
        RwMatrixTag carMatrix;  // $sp+160
        ECarID eCarID;  // in $s0
        RwV3d offset;  // $sp+232
        float FOV;  // optimised away
    }
}

// 0x00207300-0x00208210 (3856 bytes), lines 768-1072
// UpdateFollow__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdateFollow(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s4)
    // param CRaceCar *lpCar  (in $s3)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00207300-0x00208210
        RwV3d flen;  // $sp+496
        RwV3d carAt;  // $sp+480
        float dot;  // optimised away
        SRCCollSphere sphere;  // $sp+288
        int i;  // in $s7
        RwV3d normal;  // $sp+464
        RwV2d viewwindow;  // $sp+456
        RwV3d end;  // $sp+440
        RwV3d start;  // $sp+424
        float edgeDistance;  // $sp+508
        float diffY;  // $sp+512
        float dotp;  // $sp+512
        RwV3d camAtXZ;  // $sp+408
        RwV3d carAtXZ;  // $sp+392
        float diffX;  // optimised away
        float desiredAngleX;  // $sp+512
        RwV3d carAt;  // $sp+376
        RwMatrixTag *pCamMatrix;  // in $s1
        RwFrame *pCamFrame;  // in $s0
        RwMatrixTag carMatrix;  // $sp+224
        float speed;  // optimised away
        RwV3d xaxis;  // $sp+360
        RwV3d yaxis;  // $sp+344
        RwV3d offset;  // $sp+328
        float currentSpringY;  // optimised away
        float FOV;  // optimised away
        float angleY;  // optimised away
        float angleX;  // optimised away
        RwV3d carLookAtPos;  // $sp+312
        float downAngle;  // optimised away
        ECarID eCarID;  // in $s2
    }
}

// 0x00208210-0x0020861C (1036 bytes), lines 359-417
// UpdateLookback__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::UpdateLookback(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $s4)
    // param CRaceCar *lpCar  (in $s0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00208210-0x0020861C
        RwV3d flen;  // $sp+240
        RwV2d viewwindow;  // $sp+232
        RwMatrixTag *pCamMatrix;  // in $s1
        RwFrame *pCamFrame;  // in $s0
        RwMatrixTag carMatrix;  // $sp+144
        ECarID eCarID;  // in $s6
        RwV3d offset;  // $sp+216
        float FOV;  // optimised away
    }
}

// 0x00208620-0x0020873C (284 bytes), lines 266-336
// Update__13CInGameCameraFP8CRaceCarP7CCameraP11CCameraData
void CInGameCamera::Update(CRaceCar *lpCar, CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $v0)
    // param CRaceCar *lpCar  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00208620-0x0020873C
    }
}

// 0x00208740-0x00208754 (20 bytes), lines 243-247
// Init__13CInGameCameraFP7CCameraP11CCameraData
int CInGameCamera::Init(CCamera *lpParentCamera, CCameraData *lpaStackData)
{
    // param CInGameCamera *this  (in $v0)
    // param CCamera *lpParentCamera  (in $v0)
    // param CCameraData *lpaStackData  (in $v0)
    {   // 0x00208740-0x00208754
    }
}

// 0x00208760-0x00208DD8 (1656 bytes), lines 162-223
// RegisterValues__13CInGameCameraFv
void CInGameCamera::RegisterValues()
{
    {   // 0x00208760-0x00208DD8
        int lnCar;  // in $s4
    }
}

// 0x00208DE0-0x00208E74 (148 bytes), lines 125-146
// _cameraIntersectionCallback__FP13SRCCollSphereP20SRCCollisionTrianglePv
static int _cameraIntersectionCallback(SRCCollisionTriangle *pCollTriangle, void *pData)
{
    // param SRCCollisionTriangle *pCollTriangle  (in $v0)
    // param void *pData  (in $v0)
    {   // 0x00208DE0-0x00208E74
        RwV3d *pNormal;  // in $v0
    }
}

