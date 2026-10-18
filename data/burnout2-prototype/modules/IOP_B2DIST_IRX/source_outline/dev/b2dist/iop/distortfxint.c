// C:\dev\b2dist\iop\distortfxint.c
// Outline rebuilt from the debug information of B2DIST.IRX (Burnout 2 prototype, 29 July 2002).
// No code survives: these are the declarations, parameters, locals and where each
// value lived ($reg, or $sp+offset). Types are in ../types.h. Addresses are of that build.

// ---- functions ----

// 0x00000C38-0x00000D2C (244 bytes), lines 178-199
void DistortFXIntReset(DistortFXIntState *fx)
{
    // param DistortFXIntState *fx  (in $s0)
    {   // 0x00000C38-0x00000D2C
        int band;  // in $s2
        DistortFXIntBandInfo *bs;  // in $s1
    }
}

// 0x00000D2C-0x00000D34 (8 bytes), lines 206-206
void DistortFXIntSetSampleRate(DistortFXIntState *fx, int samplerate)
{
    // param DistortFXIntState *fx  (in $v0)
    // param int samplerate  (in $v0)
    {   // 0x00000D2C-0x00000D34
    }
}

// 0x00000D34-0x00000D3C (8 bytes), lines 213-213
void DistortFXIntSetFrameSize(DistortFXIntState *fx, int samples)
{
    // param DistortFXIntState *fx  (in $v0)
    // param int samples  (in $v0)
    {   // 0x00000D34-0x00000D3C
    }
}

// 0x00000D3C-0x00000DB4 (120 bytes), lines 218-223
void DistortFXIntSetFrequency(DistortFXIntState *fx, int band, int centrefreq)
{
    // param DistortFXIntState *fx  (in $s1)
    // param int band  (in $v0)
    // param int centrefreq  (in $v0)
    {   // 0x00000D3C-0x00000DB4
        DistortFXIntBandInfo *bs;  // in $s0
    }
}

// 0x00000DB4-0x00000DE8 (52 bytes), lines 44-60
int DIV1616(int x, int y)
{
    // param int x  (in $v0)
    // param int y  (in $v0)
    {   // 0x00000DB4-0x00000DE8
        int result;  // in $v0
    }
}

// 0x00000DE8-0x00000E1C (52 bytes), lines 25-41
int MULT1616(int x, int y)
{
    // param int x  (in $v0)
    // param int y  (in $v0)
    {   // 0x00000DE8-0x00000E1C
        int result;  // in $v0
    }
}

// 0x00000E1C-0x00000E94 (120 bytes), lines 228-233
void DistortFXIntSetPeakGain(DistortFXIntState *fx, int band, int gain)
{
    // param DistortFXIntState *fx  (in $s1)
    // param int band  (in $v0)
    // param int gain  (in $v0)
    {   // 0x00000E1C-0x00000E94
        DistortFXIntBandInfo *bs;  // in $s0
    }
}

// 0x00000E94-0x00000EE4 (80 bytes), lines 239-251
void DistortFXIntSetWaveshape(DistortFXIntState *fx, int band, int distortion, int immediate)
{
    // param DistortFXIntState *fx  (in $v0)
    // param int band  (in $v0)
    // param int distortion  (in $v0)
    // param int immediate  (in $v0)
    {   // 0x00000E94-0x00000EE4
        DistortFXIntBandInfo *bs;  // in $a1
    }
}

// 0x00000EE4-0x00000F34 (80 bytes), lines 257-269
void DistortFXIntSetGain(DistortFXIntState *fx, int band, int gain, int immediate)
{
    // param DistortFXIntState *fx  (in $v0)
    // param int band  (in $v0)
    // param int gain  (in $v0)
    // param int immediate  (in $v0)
    {   // 0x00000EE4-0x00000F34
        DistortFXIntBandInfo *bs;  // in $a1
    }
}

// 0x00000F34-0x00000FBC (136 bytes), lines 275-289
void DistortFXIntSetVolumes(DistortFXIntState *fx, int channel, int voll, int volr, int immediate)
{
    // param DistortFXIntState *fx  (in $v0)
    // param int channel  (in $v0)
    // param int voll  (in $v0)
    // param int volr  (in $v0)
    // param int immediate  ($sp+16)
    {   // 0x00000F34-0x00000FBC
    }
}

// 0x00000FBC-0x0000146C (1200 bytes), lines 296-376
void DistortFXIntProcess(DistortFXIntState *fx, short *ina, short *inb, short *outl, short *outr)
{
    // param DistortFXIntState *fx  (in $s6)
    // param short *ina  (in $v0)
    // param short *inb  ($sp+80)
    // param short *outl  (in $v0)
    // param short *outr  ($sp+88)
    {   // 0x00000FBC-0x0000146C
        int s;  // in $fp
        DistortFXIntBandInfo *bs;  // in $s3
        short *end;  // $sp+68
        short *out2;  // in $s7
        short *out;  // in $s2
        short *in;  // in $s1
        int band;  // $sp+64
        int oldvolr;  // $sp+60
        int oldvoll;  // $sp+56
        int drymix;  // in $v0
        int wetmix;  // in $v0
        int highpass;  // in $v0
        int shape;  // in $v0
        int y0;  // in $v0
        int x0;  // in $v0
    }
}

