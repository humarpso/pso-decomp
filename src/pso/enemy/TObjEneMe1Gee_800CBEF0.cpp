#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern const f32 TObjEneMe1Gee__data_805DA0D4;
extern const f32 lbl_805DA13C;
void TObjEneMe1Gee__sub_800CBF58(u8 *arg0, f32 farg0);
}

extern "C" {

void TObjEneMe1Gee__sub_800CBF58(u8 *arg0, f32 farg0) {
    f32 temp_f3;
    temp_f3 = farg0 - M2C_FIELD(arg0, f32 *, 0x3F8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFF7FFFF);
    if (temp_f3 >= TObjEneMe1Gee__data_805DA0D4) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) + TObjEneMe1Gee__data_805DA0D4);
        return;
    }
    if (temp_f3 <= lbl_805DA13C) {
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3F8) - TObjEneMe1Gee__data_805DA0D4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x3F8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) | 0x80000);
}

}
