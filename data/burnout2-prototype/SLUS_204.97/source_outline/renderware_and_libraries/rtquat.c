// rtquat.c
// Outline rebuilt from the debug information of SLUS_204.97 (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- variables defined in or used by this file ----
RtQuat *QuatFromXDiagDomMatrix(RtQuat *, RwMatrixTag *);  // 0x00210CB0
RtQuat *QuatFromYDiagDomMatrix(RtQuat *, RwMatrixTag *);  // 0x00210D30
RtQuat *QuatFromZDiagDomMatrix(RtQuat *, RwMatrixTag *);  // 0x00210DB0

// ---- functions ----

// 0x00210CB0-0x00210D30 (128 bytes), lines 157-168
static RtQuat *QuatFromXDiagDomMatrix(RtQuat *qpQuat, RwMatrixTag *mpMatrix)
{
    // param RtQuat *qpQuat  (in $v0)
    // param RwMatrixTag *mpMatrix  (in $v0)
    {   // 0x00210CB0-0x00210D30
        float _result;  // optimised away
        float rS;  // optimised away
    }
}

// 0x00210D30-0x00210DB0 (128 bytes), lines 178-189
static RtQuat *QuatFromYDiagDomMatrix(RtQuat *qpQuat, RwMatrixTag *mpMatrix)
{
    // param RtQuat *qpQuat  (in $v0)
    // param RwMatrixTag *mpMatrix  (in $v0)
    {   // 0x00210D30-0x00210DB0
        float _result;  // optimised away
        float rS;  // optimised away
    }
}

// 0x00210DB0-0x00210E30 (128 bytes), lines 199-210
static RtQuat *QuatFromZDiagDomMatrix(RtQuat *qpQuat, RwMatrixTag *mpMatrix)
{
    // param RtQuat *qpQuat  (in $v0)
    // param RwMatrixTag *mpMatrix  (in $v0)
    {   // 0x00210DB0-0x00210E30
        float _result;  // optimised away
        float rS;  // optimised away
    }
}

// 0x00210E30-0x00210F64 (308 bytes), lines 235-276
int RtQuatConvertFromMatrix(RtQuat *qpQuat, RwMatrixTag *mpMatrix)
{
    // param RtQuat *qpQuat  (in $v0)
    // param RwMatrixTag *mpMatrix  (in $v0)
    {   // 0x00210E30-0x00210F64
        float rTR;  // optimised away
    }
}

