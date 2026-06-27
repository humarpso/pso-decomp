#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8002AE74(void *, M2C_UNK);
M2C_UNK fn_800E2DE4(void *, M2C_UNK);

void fn_800E14A0(void *arg0) {
    s16 temp_r5;
    void *temp_r7;

    temp_r7 = M2C_FIELD(arg0, void **, 0x37C);
    M2C_FIELD(temp_r7, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r7, s32 *, 0x18) & 0xFFFFFFFE);
    M2C_FIELD(arg0, s32 *, 0x384) = 1;
    M2C_FIELD(arg0, s32 *, 0x388) = 0;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x39C), s16 *, 0x32C);
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) ((s32) (temp_r5 + 1) / 2);
    M2C_FIELD(arg0, s32 *, 0x3BC) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    fn_800E2DE4(arg0, 0x10);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 1);
    fn_8002AE74(arg0, 9);
}

}
