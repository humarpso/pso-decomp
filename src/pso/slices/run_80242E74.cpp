#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *fn_80243010();

void fn_80242E74(s16 arg0, s16 arg1) {
    void *temp_r3;

    temp_r3 = fn_80243010();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 0) = 0x1D;
        M2C_FIELD(temp_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(temp_r3, s16 *, 0x12) = arg1;
    }
}

void *fn_80243010();

void TBoss4Type3__sub_80242EBC(s16 arg0, s16 arg1, s16 arg2) {
    void *temp_r3;

    temp_r3 = fn_80243010();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 0) = 0xD;
        M2C_FIELD(temp_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(temp_r3, s16 *, 0x12) = arg1;
        M2C_FIELD(temp_r3, s16 *, 2) = arg2;
    }
}

}
