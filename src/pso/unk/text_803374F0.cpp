#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 fn_803374F8(s32 arg0, s32 arg1);
void fn_803374F0(s32 arg0, s32 arg1, s8 arg2);
}

extern "C" {

void fn_803374F0(s32 arg0, s32 arg1, s8 arg2) {
    M2C_FIELD((arg0 + arg1), s8 *, 0) = arg2;
}

u8 fn_803374F8(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + arg1), u8 *, 0);
}

}
