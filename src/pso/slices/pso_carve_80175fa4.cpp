#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern M2C_UNK lbl_80442A78;
extern const f32 lbl_805DB9B0;
extern const f32 lbl_805DB9B4;
extern const f32 lbl_805DB9B8;
extern const f32 lbl_805DB9BC;

void TOSensorGeneral01__vt14(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (M2C_FIELD(arg0, s32 *, 0xE8) + 0x28F);
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xF0) - 1);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        M2C_FIELD(arg0, s32 *, 0xEC) = 0;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0xCCC);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DB9B0);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B4) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 1;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9B8) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 2;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
        return;
    }
    if ((f32) temp_r0 < lbl_805DB9BC) {
        M2C_FIELD(arg0, s32 *, 0xEC) = 3;
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x147);
    }
}

}
