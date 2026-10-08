#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK GXLoadPosMtxImm(int, int);
extern s32 lbl_805D7774;
void load_camera_view_matrix(void);

typedef f32 Mtx_803E20B0[3][4];
typedef struct Cam_803E20B0 { u8 pad0[0x4C]; f32 f4C; u8 pad50[4]; f32 f54; } Cam_803E20B0;
typedef struct Vp_803E20B0 { u8 pad0[4]; u16 w; u16 h; } Vp_803E20B0;

M2C_UNK PSMTXIdentity(Mtx_803E20B0);
M2C_UNK GXSetCurrentMtx(u32);
extern Cam_803E20B0 lbl_8058CA60;
extern Vp_803E20B0 *lbl_805D7734;
}

extern "C" {

void load_screen_space_matrix__10TObjPlayerFv(void) {
    Mtx_803E20B0 m;
    f32 z;
    f32 s;

    PSMTXIdentity(m);
    z = lbl_8058CA60.f54;
    s = lbl_8058CA60.f4C / ((f32)lbl_805D7734->w / (f32)lbl_805D7734->h);
    m[0][0] = -z * s;
    m[0][2] = s * ((0.5f * (f32)lbl_805D7734->w) * z);
    m[1][1] = z;
    m[1][2] = (0.5f * (f32)(-lbl_805D7734->h)) * z;
    GXLoadPosMtxImm((int)m, 0);
    GXSetCurrentMtx(0);
}

#pragma push
#pragma scheduling off
void load_camera_view_matrix(void) {
    s32 var_r3;
    s32 var_r4;
    var_r3 = lbl_805D7774;
    var_r4 = 0;
    GXLoadPosMtxImm((int) (var_r3), (int) (0));
}
#pragma pop

}
