#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
void set_param__12TObjEneLappyFPvi(void *, s32);
M2C_UNK TObjPlayer__sub_800AFB30(void *, int);
extern const f32 lbl_805D9BE0;
void TObjPlayer__sub_800ACAA8(u8 *arg0);
}

extern "C" {

void clamp_stat_354__10TObjPlayerFPv(void *arg0);

extern f32 lbl_805D9BD8;
extern f32 lbl_805D9BDC;

void clamp_stat_354__10TObjPlayerFPv(void *arg0) {
    f32 lo = lbl_805D9BD8;
    if (M2C_FIELD(arg0, f32 *, 0x354) < lo) {
        M2C_FIELD(arg0, f32 *, 0x354) = lo;
    } else if (lbl_805D9BDC < M2C_FIELD(arg0, f32 *, 0x354)) {
        M2C_FIELD(arg0, f32 *, 0x354) = (f32) lbl_805D9BDC;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) M2C_FIELD(arg0, f32 *, 0x354);
}
void TObjPlayer__sub_800ACAA8(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r0 >= 1) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 2);
        TObjPlayer__sub_800AFB30((void *) (arg0), (int) (2));
        return;
    }
    if (temp_r0 <= 0) {
        if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) < lbl_805D9BE0) {
            M2C_FIELD(arg0, s32 *, 0x368) = 1;
            set_param__12TObjEneLappyFPvi(arg0, 2);
            TObjPlayer__sub_800AFB30((void *) (arg0), (int) (2));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 1);
        TObjPlayer__sub_800AFB30((void *) (arg0), (int) (1));
    }
}

}
