#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 fn_8027D2A0(void *, s8);

void fn_8027D2EC(void *arg0) {
    s32 var_r30;
    s32 var_r29;
    u16 *temp_r31;
    u16 *temp_r3;

    var_r29 = 1;
    var_r30 = 0;
    do {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, var_r30 + 2);
        if (fn_8027D2A0(arg0, (s8) var_r30) == 0) {
            *temp_r31 |= 2;
        } else {
            var_r29 = 0;
            *temp_r31 &= 0xFFFFFFFD;
        }
        var_r30 += 1;
    } while (var_r30 < 6);
    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    if (var_r29 != 0) {
        M2C_FIELD(arg0, s8 *, 0x61) = -1;
        *temp_r3 |= 2;
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 4);
        return;
    }
    *temp_r3 &= 0xFFFFFFFD;
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFFFFFFFB);
}

}
