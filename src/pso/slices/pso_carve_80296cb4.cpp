#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_80296CB4(void *arg0) {
    s32 temp_r0;
    s32 var_ctr;
    s32 var_r4;
    s32 var_r6;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
    var_r6 = 0;
    var_r4 = 0;
    for (var_ctr = temp_r0; var_ctr > 0; var_ctr--) {
        if (var_r4 == (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
            break;
        }
        var_r6 += 1;
        var_r4 += 1;
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    M2C_FIELD(arg0, s32 *, 0x50) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x54) = var_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x30) > 0xA) {
        M2C_FIELD(arg0, s32 *, 0x44) = 9;
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (var_r6 / 9);
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) ((s32) (M2C_FIELD(arg0, s32 *, 0x30) + 8) / 9);
        M2C_FIELD(arg0, s32 *, 0x54) = (s32) (var_r6 % 9);
        M2C_FIELD(arg0, s32 *, 0x50) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) - (M2C_FIELD(arg0, s32 *, 0x48) * 9));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x50) > 9) {
            M2C_FIELD(arg0, s32 *, 0x50) = 9;
        }
    }
}

}
