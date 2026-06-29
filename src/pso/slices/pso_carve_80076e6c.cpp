#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void __ct__16TPlyGuildCardTagFUsUl(void *arg0, s16 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0) = 0;
    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, s16 *, 2) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = arg2;
}

}
