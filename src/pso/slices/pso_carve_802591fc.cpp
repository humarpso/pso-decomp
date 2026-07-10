#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DCF0C;

void fn_802591FC(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF0C;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = fn_80259268(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
