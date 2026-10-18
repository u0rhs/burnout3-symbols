// objallinone.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
unsigned int _skyLightQWordsWritten;  // 0x00310B80
float *_skyLightFillPos;  // 0x00310B84

// ---- functions ----

// 0x0019D7F0-0x0019DD94 (1444 bytes), lines 74-219
void RxPipelineNodePS2AllApplyLight(RpLight *light, RwMatrixTag *inverseMat, float invScale, float recipInvScale)
{
    // param RpLight *light  (in $s1)
    // param RwMatrixTag *inverseMat  (in $v0)
    // param float invScale  ($sp+80)
    // param float recipInvScale  ($sp+80)
    {   // 0x0019D7F0-0x0019DD94
        RwMatrixTag *matrix;  // in $v0
        RwV3d *at;  // in $a0
        RwV3d *pos;  // in $v1
        RwFrame *frame;  // in $v0
        RwRGBAReal *color;  // in $s3
        RpLightType type;  // in $s2
    }
}

