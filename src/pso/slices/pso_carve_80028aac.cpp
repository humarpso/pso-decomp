#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss4Type2__sub_80141FA8(s32, s32);

void fn_80028AAC(void *arg0, s32 arg1, s32 arg2) {
    if (TBoss4Type2__sub_80141FA8(arg1, arg2) >= 0) {
        M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x65C) = -1;
}

}
