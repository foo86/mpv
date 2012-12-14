#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.27.952.3022
//
//   fxc /Tps_2_0 /Fhz:\tmp\mplayer\libvo\d3d_shader_yuv.h
//    z:\tmp\mplayer\libvo\d3d_shader_yuv.hlsl /Vnd3d_shader_yuv
//
//
// Parameters:
//
//   float4x4 colormatrix;
//   sampler2D tex0;
//   sampler2D tex1;
//   sampler2D tex2;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   colormatrix  c0       4
//   tex0         s0       1
//   tex1         s1       1
//   tex2         s2       1
//

    ps_2_0
    def c4, 1, 0, 0, 0
    dcl t0.xy
    dcl t1.xy
    dcl t2.xy
    dcl_2d s0
    dcl_2d s1
    dcl_2d s2
    texld r0, t0, s0
    texld r1, t1, s1
    texld r2, t2, s2
    mov r0.y, r1.x
    mov r0.z, r2.x
    mov r0.w, c4.x
    dp4 r1.x, r0, c0
    dp4 r1.y, r0, c1
    dp4 r1.z, r0, c2
    dp4 r1.w, r0, c3
    mov oC0, r1

// approximately 11 instruction slots used (3 texture, 8 arithmetic)
#endif

const BYTE d3d_shader_yuv[] =
{
      0,   2, 255, 255, 254, 255, 
     67,   0,  67,  84,  65,  66, 
     28,   0,   0,   0, 215,   0, 
      0,   0,   0,   2, 255, 255, 
      4,   0,   0,   0,  28,   0, 
      0,   0,   0,   1,   0,   0, 
    208,   0,   0,   0, 108,   0, 
      0,   0,   2,   0,   0,   0, 
      4,   0,   2,   0, 120,   0, 
      0,   0,   0,   0,   0,   0, 
    136,   0,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
    144,   0,   0,   0,   0,   0, 
      0,   0, 160,   0,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      6,   0, 168,   0,   0,   0, 
      0,   0,   0,   0, 184,   0, 
      0,   0,   3,   0,   2,   0, 
      1,   0,  10,   0, 192,   0, 
      0,   0,   0,   0,   0,   0, 
     99, 111, 108, 111, 114, 109, 
     97, 116, 114, 105, 120,   0, 
      3,   0,   3,   0,   4,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 116, 101, 
    120,  48,   0, 171, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 116, 101, 
    120,  49,   0, 171, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 116, 101, 
    120,  50,   0, 171, 171, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0, 112, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  55,  46,  57,  53,  50, 
     46,  51,  48,  50,  50,   0, 
     81,   0,   0,   5,   4,   0, 
     15, 160,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   1,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   2,   0,   3, 176, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   0,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   1,   8,  15, 160, 
     31,   0,   0,   2,   0,   0, 
      0, 144,   2,   8,  15, 160, 
     66,   0,   0,   3,   0,   0, 
     15, 128,   0,   0, 228, 176, 
      0,   8, 228, 160,  66,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 176,   1,   8, 
    228, 160,  66,   0,   0,   3, 
      2,   0,  15, 128,   2,   0, 
    228, 176,   2,   8, 228, 160, 
      1,   0,   0,   2,   0,   0, 
      2, 128,   1,   0,   0, 128, 
      1,   0,   0,   2,   0,   0, 
      4, 128,   2,   0,   0, 128, 
      1,   0,   0,   2,   0,   0, 
      8, 128,   4,   0,   0, 160, 
      9,   0,   0,   3,   1,   0, 
      1, 128,   0,   0, 228, 128, 
      0,   0, 228, 160,   9,   0, 
      0,   3,   1,   0,   2, 128, 
      0,   0, 228, 128,   1,   0, 
    228, 160,   9,   0,   0,   3, 
      1,   0,   4, 128,   0,   0, 
    228, 128,   2,   0, 228, 160, 
      9,   0,   0,   3,   1,   0, 
      8, 128,   0,   0, 228, 128, 
      3,   0, 228, 160,   1,   0, 
      0,   2,   0,   8,  15, 128, 
      1,   0, 228, 128, 255, 255, 
      0,   0
};