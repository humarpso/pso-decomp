#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_803DF7A8(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3) {
    if (M2C_FIELD(arg1, f32 *, 0) < M2C_FIELD(arg2, f32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 0) > M2C_FIELD(arg3, f32 *, 0)) {
        return 0;
    }
    if (M2C_FIELD(arg1, f32 *, 4) < M2C_FIELD(arg2, f32 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg0, f32 *, 4) > M2C_FIELD(arg3, f32 *, 4)) {
        return 0;
    }
    if (M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg2, f32 *, 8)) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, f32 *, 8) > M2C_FIELD(arg3, f32 *, 8)) >> 5;
}

}
