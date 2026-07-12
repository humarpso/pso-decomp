#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TRaderMapCore__sub_801A6D10(s32 arg1, s32 arg2);

s32 TRaderMapCore__sub_801A6D10(s32 arg1, s32 arg2) {
    return (arg2 & 0xFF0FFFFF) | ((arg2 << 0x16) & 0x3C000000);
}

}
