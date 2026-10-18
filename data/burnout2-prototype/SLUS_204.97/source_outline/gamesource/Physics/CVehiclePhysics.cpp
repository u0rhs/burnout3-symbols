// I:\Burnout 2 Code\gamesource\Physics\CVehiclePhysics.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
static RwV3d kZeroVector;  // 0x002C9E70
/* vtable */ void *CVehiclePhysics::__vtable[];  // 0x0030F220
static float krAngularAirResistance;  // 0x0031058C
static float krAirResistance;  // 0x00310590
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CDebugManager gDebugManager;  // 0x003B2D30
CCollidingBodyWorldTriangleData gWorldTriangles;  // 0x0043B1C0

// ---- functions ----

// 0x001CD4A0-0x001CD538 (152 bytes), lines 1397-1412
// ResetCrashEffects__15CVehiclePhysicsFv
void CVehiclePhysics::ResetCrashEffects()
{
    // param CVehiclePhysics *this  (in $s0)
    {   // 0x001CD4A0-0x001CD538
        int i;  // in $a1
    }
}

// 0x001CD540-0x001CD584 (68 bytes), lines 1370-1380
// ReAttachWheels__15CVehiclePhysicsFv
void CVehiclePhysics::ReAttachWheels()
{
    // param CVehiclePhysics *this  (in $v0)
    {   // 0x001CD540-0x001CD584
        int lnWheel;  // in $a1
    }
}

// 0x001CD590-0x001CD840 (688 bytes), lines 1281-1350
// DetachBodywork__15CVehiclePhysicsFi
CPropPhysics *CVehiclePhysics::DetachBodywork(int lnIndex)
{
    // param CVehiclePhysics *this  (in $s3)
    // param int lnIndex  (in $s2)
    {   // 0x001CD590-0x001CD840
        SRCBBox *lpBBox;  // in $t0
        RwMatrixTag *lpBitMatrix;  // in $s1
        RwV3d lVel;  // $sp+80
        CPropPhysics *lpProp;  // in $s0
    }
}

// 0x001CD840-0x001CDBAC (876 bytes), lines 1184-1263
// DetachWheel__15CVehiclePhysicsFi
CPropPhysics *CVehiclePhysics::DetachWheel(int lnWheelIndex)
{
    // param CVehiclePhysics *this  (in $s4)
    // param int lnWheelIndex  (in $s3)
    {   // 0x001CD840-0x001CDBAC
        RwV3d lVel;  // $sp+112
        CPropPhysics *lpProp;  // in $s0
    }
}

// 0x001CDBB0-0x001CDD94 (484 bytes), lines 1092-1166
// ApplyDamage__15CVehiclePhysicsFP5RwV3df
void CVehiclePhysics::ApplyDamage(RwV3d *lpPointOfImpact, float lrImpulse)
{
    // param CVehiclePhysics *this  (in $v0)
    // param RwV3d *lpPointOfImpact  (in $v0)
    // param float lrImpulse  ($sp+0)
    {   // 0x001CDBB0-0x001CDD94
        SRCBBox *lpBox;  // in $t0
        int lnBodywork;  // in $a3
        int lnIndex;  // in $a3
    }
}

// 0x001CDDA0-0x001CEBCC (3628 bytes), lines 725-1066
// UpdateSuspension__15CVehiclePhysicsFf
void CVehiclePhysics::UpdateSuspension(float lrTimeStep)
{
    // param CVehiclePhysics *this  (in $s4)
    // param float lrTimeStep  (optimised away)
    {   // 0x001CDDA0-0x001CEBCC
        float lrAngle;  // $sp+448
        RwV3d lRotate;  // $sp+288
        RwV3d lScale;  // $sp+272
        RwV3d *pos;  // in $s5
        RwV3d *at;  // in $v0
        RwV3d *up;  // in $v0
        RwMatrixTag *mat;  // in $s0
        float _tmp;  // $sp+448
        float _result;  // optimised away
        float z;  // optimised away
        float roundWheelAngle;  // $sp+448
        float cosa;  // optimised away
        float sina;  // optimised away
        float cost;  // $sp+448
        float sint;  // optimised away
        float _tmp;  // $sp+448
        float _result;  // optimised away
        float z;  // optimised away
        float sin_steerAngle;  // optimised away
        float fric;  // optimised away
        float lrPenetration;  // optimised away
        RwV3d *lpCarUp;  // in $s2
        int lnNumConstraints;  // in $s6
        RwV3d lConstrain;  // $sp+256
        float lrAttachHeight;  // optimised away
        int lbBump;  // in $s7
        RwV3d *lpUpVec;  // in $s1
        RwV3d lImpulse[4];  // $sp+192
        RwV3d lTemp;  // $sp+240
        float lrSpringExtension;  // optimised away
        float lrSpringLength;  // optimised away
        float lrSpringForce;  // optimised away
        int lnNumImpulses;  // in $s5
        int lnWheel;  // in $s0
    }
}

// 0x001CEBD0-0x001CF0DC (1292 bytes), lines 370-707
// CollideWheels__15CVehiclePhysicsFv
void CVehiclePhysics::CollideWheels()
{
    // param CVehiclePhysics *this  (in $s4)
    {   // 0x001CEBD0-0x001CF0DC
        int lnIndex;  // in $s6
        float distance;  // optimised away
        float lrBottomPointRear;  // optimised away
        float lrTopPointRear;  // optimised away
        float lrBottomPointFront;  // $sp+512
        float lrTopPointFront;  // optimised away
        RwV3d lineDir;  // $sp+480
        RwV3d laLineEndPoints[6];  // $sp+304
        RwV3d laLineStartPoints[6];  // $sp+224
        RwV3d *up;  // in $s0
        int lnWheel;  // in $v1
    }
}

// 0x001CF260-0x001CF344 (228 bytes), lines 256-299
// Update__15CVehiclePhysicsFf
void CVehiclePhysics::Update(float lrTimeStep)
{
    // param CVehiclePhysics *this  (in $s0)
    // param float lrTimeStep  (optimised away)
    {   // 0x001CF260-0x001CF344
        float lrAngularVel;  // $sp+48
        float lrAirResistance;  // optimised away
    }
}

// 0x001CF350-0x001CF358 (8 bytes), lines 237-237
// Destroy__15CVehiclePhysicsFv
void CVehiclePhysics::Destroy()
{
    // param CVehiclePhysics *this  (in $v0)
    {   // 0x001CF350-0x001CF358
    }
}

// 0x001CF360-0x001CF368 (8 bytes), lines 218-218
// Shutdown__15CVehiclePhysicsFv
void CVehiclePhysics::Shutdown()
{
    // param CVehiclePhysics *this  (in $v0)
    {   // 0x001CF360-0x001CF368
    }
}

// 0x001CF370-0x001CF560 (496 bytes), lines 157-200
// Reset__15CVehiclePhysicsFv
void CVehiclePhysics::Reset()
{
    // param CVehiclePhysics *this  (in $s2)
    {   // 0x001CF370-0x001CF560
        RwMatrixTag *lpMatrix;  // in $v1
        int i;  // in $s0
    }
}

// 0x001CF560-0x001CF5A8 (72 bytes), lines 127-140
// Setup__15CVehiclePhysicsFv
void CVehiclePhysics::Setup()
{
    // param CVehiclePhysics *this  (in $s0)
    {   // 0x001CF560-0x001CF5A8
        int i;  // in $a1
    }
}

// 0x001CF5B0-0x001CF6B0 (256 bytes), lines 75-110
// Init__15CVehiclePhysicsFv
void CVehiclePhysics::Init()
{
    // param CVehiclePhysics *this  (in $s0)
    {   // 0x001CF5B0-0x001CF6B0
        int i;  // in $t0
    }
}

