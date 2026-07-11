#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_array_entry__20TWindowSubStatusDispFPvi(void*, s16);
extern f32 lbl_805DD18C;
extern f32 lbl_805DD190;

void fn_80267C1C(void *arg0) {
    u16 temp_r4;
    void *temp;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (!(temp_r4 & 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 | 0x20);
        temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD18C + M2C_FIELD(temp, f32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DD190);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
