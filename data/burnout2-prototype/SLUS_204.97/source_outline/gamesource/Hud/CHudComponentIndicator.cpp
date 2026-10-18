// I:\Burnout 2 Code\gamesource\Hud\CHudComponentIndicator.cpp
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
void RenderImage(B22dObjectAnimatablesTag *);  // 0x001B0D60
B22dFrameAnimatablesTag C2dFrame::mgIdentityAnimatables;  // 0x002B4DC0
RwRGBAReal kColourYellow;  // 0x002C4E20
/* vtable */ void *CHudComponentIndicator::__vtable[];  // 0x0030F690
CRace gRace;  // 0x0031D4B0
CTrack gTrack;  // 0x0031F280
CMenuManager gMenuManager;  // 0x003B0E60
CRenderer gRenderer;  // 0x00434440

// ---- functions ----

// 0x001FAB00-0x001FAC80 (384 bytes), lines 156-231
// Update__22CHudComponentIndicatorFf
void CHudComponentIndicator::Update(float lrTimestep)
{
    // param CHudComponentIndicator *this  (in $v0)
    // param float lrTimestep  ($sp+0)
    {   // 0x001FAB00-0x001FAC80
        CRaceCar *lpRaceCar;  // in $a2
        unsigned int lxIndicate;  // in $v0
        unsigned int lbIndicatorActivate;  // in $v1
    }
}

// 0x001FAC80-0x001FAE70 (496 bytes), lines 98-136
// Create__22CHudComponentIndicatorFfffUiPv
int CHudComponentIndicator::Create(float lrPosX, float lrPosY, float lrSize, void *lpData)
{
    // param CHudComponentIndicator *this  (in $s2)
    // param float lrPosX  (optimised away)
    // param float lrPosY  (optimised away)
    // param float lrSize  (optimised away)
    // param void *lpData  (in $v0)
    {   // 0x001FAC80-0x001FAE70
        B22dTexAreaTag lTexArea;  // $sp+96
        float lrSizeY;  // optimised away
        float lrSizeX;  // optimised away
    }
}

// 0x001FAE70-0x001FAE98 (40 bytes), lines 73-77
// IncrementCounts__22CHudComponentIndicatorFPiPiPiPi
void CHudComponentIndicator::IncrementCounts(int *lpnLayerCounter, int *lpnFrameCounter, int *lpnObjectCounter)
{
    // param int *lpnLayerCounter  (in $v0)
    // param int *lpnFrameCounter  (in $v0)
    // param int *lpnObjectCounter  (in $v0)
    {   // 0x001FAE70-0x001FAE98
    }
}

