#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_alpha_char__20TWindowSubStatusDispFUs(u16 arg0);

s32 is_alpha_char__20TWindowSubStatusDispFUs(u16 arg0) {
    if (arg0 < 0x41U) {
        return 0;
    }
    if (arg0 > 0x7AU) {
        return 0;
    }
    if (arg0 >= 0x61U) {
        return 1;
    }
    return arg0 <= 0x5AU ? 1 : 0;
}

}
