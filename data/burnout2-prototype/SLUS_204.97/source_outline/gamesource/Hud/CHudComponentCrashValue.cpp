// I:\Burnout 2 Code\gamesource\Hud\CHudComponentCrashValue.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderText(B22dObjectAnimatablesTag *);  // 0x001B0A40
C2dFont CMenuGfx::maFonts[3];  // 0x002B4F00
RwRGBAReal kColourGreen;  // 0x002C4E30
/* vtable */ void *CHudComponentCrashValue::__vtable[];  // 0x0030F540
CRace gRace;  // 0x0031D4B0
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001EA780-0x001EA8F8 (376 bytes), lines 382-419
// AddNewValue__23CHudComponentCrashValueFffUi
ECrashValueText CHudComponentCrashValue::AddNewValue(float lrPosX, float lrPosY, unsigned int lunValue)
{
    // param CHudComponentCrashValue *this  (in $s4)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param unsigned int lunValue  (in $s3)
    {   // 0x001EA780-0x001EA8F8
        ECrashValueText leCrashValueText;  // in $v0
        unsigned int lunText;  // in $s1
        C2dFont *lpFont;  // in $s0
    }
}

// 0x001EA900-0x001EAA74 (372 bytes), lines 314-362
// UpdateFadingText__23CHudComponentCrashValueFf
void CHudComponentCrashValue::UpdateFadingText(float lrTimeStep)
{
    // param CHudComponentCrashValue *this  (in $s2)
    // param float lrTimeStep  (optimised away)
    {   // 0x001EA900-0x001EAA74
        RwV3d lScreenPosition;  // $sp+96
        unsigned int lunText;  // in $s0
    }
}

// 0x001EAA80-0x001EACC4 (580 bytes), lines 231-298
// DetectCrashes__23CHudComponentCrashValueFv
void CHudComponentCrashValue::DetectCrashes()
{
    // param CHudComponentCrashValue *this  (in $s5)
    {   // 0x001EAA80-0x001EACC4
        RwV3d lCameraToTraffic;  // $sp+192
        RwV3d *lpCameraPosition;  // in $s7
        RwMatrixTag *lpCamMatrix;  // in $s3
        ECrashValueText leCrashValueText;  // in $v0
        CCollidingBody *lpCollidingBody;  // in $v1
        unsigned int lunCrashValue;  // $sp+172
        unsigned int lunNumCrashingCars;  // in $v0
        unsigned int lunCar;  // in $s2
        CScore *lpScore;  // in $s1
        RwV3d lScreenPosition;  // $sp+176
        RwV3d *lpTrafficPosition;  // in $v0
        RwMatrixTag *lpTrafficMatrix;  // in $s0
    }
}

// 0x001EACD0-0x001EAD0C (60 bytes), lines 161-164
// Update__23CHudComponentCrashValueFf
void CHudComponentCrashValue::Update(float lrTimeStep)
{
    // param CHudComponentCrashValue *this  (in $s0)
    // param float lrTimeStep  (optimised away)
    {   // 0x001EACD0-0x001EAD0C
    }
}

// 0x001EAD10-0x001EAD48 (56 bytes), lines 134-145
// Create__23CHudComponentCrashValueFfffUiPv
int CHudComponentCrashValue::Create(void *lpData)
{
    // param CHudComponentCrashValue *this  (in $v0)
    // param void *lpData  (in $v0)
    {   // 0x001EAD10-0x001EAD48
        unsigned int lunText;  // in $v1
    }
}

// 0x001EAD50-0x001EAD78 (40 bytes), lines 105-109
// IncrementCounts__23CHudComponentCrashValueFPiPiPiPi
void CHudComponentCrashValue::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001EAD50-0x001EAD78
    }
}

// 0x001EAD80-0x001EAE08 (136 bytes), lines 69-83
// Initialise__23CHudComponentCrashValueFii
void CHudComponentCrashValue::Initialise(int lnLayer)
{
    // param CHudComponentCrashValue *this  (in $s0)
    // param int lnLayer  (in $v0)
    {   // 0x001EAD80-0x001EAE08
        unsigned int lunText;  // in $s1
    }
}

