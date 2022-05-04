#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 10.1
//
//
// Resource Bindings:
//
// Name                                 Type  Format         Dim      HLSL Bind  Count
// ------------------------------ ---------- ------- ----------- -------------- ------
// TextureF_MS                       texture  float4        2dMS             t0      1 
//
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_POSITION              0   xyzw        0      POS   float       
// TEXCOORD                 0   xy          1     NONE   float   xy  
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_TARGET                0   xyzw        0   TARGET   float   xyzw
//
ps_4_1
dcl_globalFlags refactoringAllowed
dcl_resource_texture2dms(0) (float,float,float,float) t0
dcl_input_ps linear v1.xy
dcl_output o0.xyzw
dcl_temps 4
resinfo_uint r0.xy, l(0), t0.xyzw
sampleinfo_uint r0.z, t0.x
utof r0.xy, r0.xyxx
mul r0.xy, r0.xyxx, v1.xyxx
ftou r1.xy, r0.xyxx
mov r1.zw, l(0,0,0,0)
mov r2.xyzw, l(0,0,0,0)
mov r0.x, l(0)
loop 
  uge r0.y, r0.x, r0.z
  breakc_nz r0.y
  ldms r3.xyzw, r1.xyzw, t0.xyzw, r0.x
  add r2.xyzw, r2.xyzw, r3.xyzw
  iadd r0.x, r0.x, l(1)
endloop 
sampleinfo r0.x, t0.x
div o0.xyzw, r2.xyzw, r0.xxxx
ret 
// Approximately 18 instruction slots used
#endif

const BYTE g_PS_ResolveColor2D[] = {
    68,  88,  66,  67,  93,  61,  55,  147, 13,  181, 1,   129, 207, 120, 176, 100, 210, 126, 243,
    242, 1,   0,   0,   0,   128, 3,   0,   0,   5,   0,   0,   0,   52,  0,   0,   0,   172, 0,
    0,   0,   4,   1,   0,   0,   56,  1,   0,   0,   4,   3,   0,   0,   82,  68,  69,  70,  112,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   28,  0,   0,   0,
    1,   4,   255, 255, 0,   1,   0,   0,   72,  0,   0,   0,   60,  0,   0,   0,   2,   0,   0,
    0,   5,   0,   0,   0,   6,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   1,   0,
    0,   0,   13,  0,   0,   0,   84,  101, 120, 116, 117, 114, 101, 70,  95,  77,  83,  0,   77,
    105, 99,  114, 111, 115, 111, 102, 116, 32,  40,  82,  41,  32,  72,  76,  83,  76,  32,  83,
    104, 97,  100, 101, 114, 32,  67,  111, 109, 112, 105, 108, 101, 114, 32,  49,  48,  46,  49,
    0,   73,  83,  71,  78,  80,  0,   0,   0,   2,   0,   0,   0,   8,   0,   0,   0,   56,  0,
    0,   0,   0,   0,   0,   0,   1,   0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   15,
    0,   0,   0,   68,  0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   3,   0,   0,   0,
    1,   0,   0,   0,   3,   3,   0,   0,   83,  86,  95,  80,  79,  83,  73,  84,  73,  79,  78,
    0,   84,  69,  88,  67,  79,  79,  82,  68,  0,   171, 171, 171, 79,  83,  71,  78,  44,  0,
    0,   0,   1,   0,   0,   0,   8,   0,   0,   0,   32,  0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   3,   0,   0,   0,   0,   0,   0,   0,   15,  0,   0,   0,   83,  86,  95,  84,
    65,  82,  71,  69,  84,  0,   171, 171, 83,  72,  68,  82,  196, 1,   0,   0,   65,  0,   0,
    0,   113, 0,   0,   0,   106, 8,   0,   1,   88,  32,  0,   4,   0,   112, 16,  0,   0,   0,
    0,   0,   85,  85,  0,   0,   98,  16,  0,   3,   50,  16,  16,  0,   1,   0,   0,   0,   101,
    0,   0,   3,   242, 32,  16,  0,   0,   0,   0,   0,   104, 0,   0,   2,   4,   0,   0,   0,
    61,  16,  0,   7,   50,  0,   16,  0,   0,   0,   0,   0,   1,   64,  0,   0,   0,   0,   0,
    0,   70,  126, 16,  0,   0,   0,   0,   0,   111, 8,   0,   5,   66,  0,   16,  0,   0,   0,
    0,   0,   10,  112, 16,  0,   0,   0,   0,   0,   86,  0,   0,   5,   50,  0,   16,  0,   0,
    0,   0,   0,   70,  0,   16,  0,   0,   0,   0,   0,   56,  0,   0,   7,   50,  0,   16,  0,
    0,   0,   0,   0,   70,  0,   16,  0,   0,   0,   0,   0,   70,  16,  16,  0,   1,   0,   0,
    0,   28,  0,   0,   5,   50,  0,   16,  0,   1,   0,   0,   0,   70,  0,   16,  0,   0,   0,
    0,   0,   54,  0,   0,   8,   194, 0,   16,  0,   1,   0,   0,   0,   2,   64,  0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   54,  0,   0,   8,
    242, 0,   16,  0,   2,   0,   0,   0,   2,   64,  0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   54,  0,   0,   5,   18,  0,   16,  0,   0,   0,
    0,   0,   1,   64,  0,   0,   0,   0,   0,   0,   48,  0,   0,   1,   80,  0,   0,   7,   34,
    0,   16,  0,   0,   0,   0,   0,   10,  0,   16,  0,   0,   0,   0,   0,   42,  0,   16,  0,
    0,   0,   0,   0,   3,   0,   4,   3,   26,  0,   16,  0,   0,   0,   0,   0,   46,  0,   0,
    9,   242, 0,   16,  0,   3,   0,   0,   0,   70,  14,  16,  0,   1,   0,   0,   0,   70,  126,
    16,  0,   0,   0,   0,   0,   10,  0,   16,  0,   0,   0,   0,   0,   0,   0,   0,   7,   242,
    0,   16,  0,   2,   0,   0,   0,   70,  14,  16,  0,   2,   0,   0,   0,   70,  14,  16,  0,
    3,   0,   0,   0,   30,  0,   0,   7,   18,  0,   16,  0,   0,   0,   0,   0,   10,  0,   16,
    0,   0,   0,   0,   0,   1,   64,  0,   0,   1,   0,   0,   0,   22,  0,   0,   1,   111, 0,
    0,   5,   18,  0,   16,  0,   0,   0,   0,   0,   10,  112, 16,  0,   0,   0,   0,   0,   14,
    0,   0,   7,   242, 32,  16,  0,   0,   0,   0,   0,   70,  14,  16,  0,   2,   0,   0,   0,
    6,   0,   16,  0,   0,   0,   0,   0,   62,  0,   0,   1,   83,  84,  65,  84,  116, 0,   0,
    0,   18,  0,   0,   0,   4,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   3,   0,
    0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   1,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   1,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   3,   0,   0,   0,   0,   0,   0,   0,   2,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,
    0,   0,   0};
