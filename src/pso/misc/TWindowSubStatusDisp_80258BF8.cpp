#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_80258BF8(void *arg0, u8 arg1, s32 arg2, s32 arg3);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DCF04;

void TWindowSubStatusDisp__sub_80258BF8(void *arg0, u8 arg1, s32 arg2, s32 arg3) {
    u8 var_r0;

    var_r0 = arg1;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF04;
    if (arg1 == 0x18) {
        var_r0 = 0x16;
    }
    M2C_FIELD(arg0, u8 *, 0x1C) = var_r0;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x28) = -1;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg2, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x145);
    if (arg1 == 0x18) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
    }
}

}
