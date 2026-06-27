#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 fn_801C010C(s32, s32);
s32 fn_801D9988(u8);
u8 fn_801D9BE8(s32, s32);

s32 fn_801D9A44(s32 arg0, s32 arg1, u8 arg2) {
    if (fn_801D9988(arg2) != 0) {
        return 1;
    }
    if (arg2 > fn_801C010C(arg0, arg1)) {
        return 0;
    }
    return arg2 <= fn_801D9BE8(arg0, arg1) ? 1 : 0;
}

}
