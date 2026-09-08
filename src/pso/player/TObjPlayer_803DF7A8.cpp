#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803E1D1C_lbl_804FC780 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
M2C_UNK GXLoadPosMtxImm(void *, int);
extern RecoveredGlobal_803E1D1C_lbl_804FC780 lbl_804FC780;
extern s32 lbl_805D7774;
void TObjPlayer__sub_803E1D1C(s32 arg0);
}

extern "C" {

void calc_bounds__10TObjPlayerFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2);
void reset_particle_counter__10TObjPlayerFv(void);
void set_effect_active__10TObjPlayerFv(void);
s32 test_aabb_overlap__10TObjPlayerFPvPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3);

s32 test_aabb_overlap__10TObjPlayerFPvPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    if (M2C_FIELD(arg1, f32 *, 0) < M2C_FIELD(arg2, f32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0) > M2C_FIELD(arg3, f32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg1, f32 *, 4) < M2C_FIELD(arg2, f32 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 4) > M2C_FIELD(arg3, f32 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg2, f32 *, 8)) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, f32 *, 8) > M2C_FIELD(arg3, f32 *, 8)) >> 5;
}

void calc_bounds__10TObjPlayerFPvPvPv(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg0, f32 *, 0xC));
    M2C_FIELD(arg2, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0xC));
}

extern s8 lbl_805D77C8;

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803E1D1C_lbl_804FC780_size[sizeof(RecoveredGlobal_803E1D1C_lbl_804FC780) == 0x28 ? 1 : -1];
void TObjPlayer__sub_803E1D1C(s32 arg0) {
    GXLoadPosMtxImm((void *) (lbl_805D7774), (int) (M2C_FIELD(((u8 *)(&lbl_804FC780.value) + (arg0 * 4)), s32 *, 0)));
}
#pragma pop

void set_effect_active__10TObjPlayerFv(void) {
    lbl_805D77C8 = 1;
}

extern s8 lbl_805D77C8;

void reset_particle_counter__10TObjPlayerFv(void) {
    lbl_805D77C8 = 0;
}

}
