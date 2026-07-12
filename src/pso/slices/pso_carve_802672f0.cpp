#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK TWindowSubStatusDisp__sub_80258CB8(void*, M2C_UNK, s32, s32);
extern const f32 lbl_805DD194;

void fn_802672F0(void *arg0, s8 arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_r29;
    s16 temp_r5;
    void *temp_r31;

    temp_r5 = M2C_FIELD(arg0, s16 *, 0x72);
    if (temp_r5 < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (arg1 & 8) {
            var_r29 = 0xD;
        } else if (arg1 & 4) {
            var_r29 = 0xF;
        } else {
            var_r29 = 0x33;
        }
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r5);
        TWindowSubStatusDisp__sub_80258CB8(temp_r31, var_r29, arg2, arg3);
        M2C_FIELD(temp_r31, f32 *, 8) = (f32) lbl_805DD194;
        if (arg1 & 2) {
            M2C_FIELD(temp_r31, s8 *, 0x1C) = 0xE;
            M2C_FIELD(temp_r31, u16 *, 0) = (u16) (M2C_FIELD(temp_r31, u16 *, 0) | 0x100);
        }
        M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
    }
}

}
