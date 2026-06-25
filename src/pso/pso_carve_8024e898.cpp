#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8024E898(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg0, f32 *, 0x3C)) || (M2C_FIELD(arg1, f32 *, 0xC) < M2C_FIELD(arg0, f32 *, 0x40)) || (M2C_FIELD(arg1, f32 *, 0) > M2C_FIELD(arg0, f32 *, 0x44)) || (M2C_FIELD(arg1, f32 *, 4) > M2C_FIELD(arg0, f32 *, 0x48))) {
        return 0;
    }
    return 1;
}

}
