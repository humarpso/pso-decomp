#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubComCard__sub_80202990();

s32 fn_801A529C(s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TWindowSubComCard__sub_80202990();
    if (temp_r3 == NULL) {
        return 0;
    }
    return (M2C_FIELD(temp_r3, s32 *, 0x10) & arg2) ? 1 : 0;
}

void *TWindowSubComCard__sub_80202990();

void fn_801A52E8(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TWindowSubComCard__sub_80202990();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) & arg2);
        M2C_FIELD(temp_r3, s32 *, 0x10) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x10) | arg1);
    }
}

void fn_801A5338(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0x40058;
    }
}

}
