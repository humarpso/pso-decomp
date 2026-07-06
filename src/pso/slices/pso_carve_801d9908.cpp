#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801D9988(u8);

u8 fn_801D9908(M2C_UNK arg0, u8 arg1, u8 arg2) {
    u8 var_r3;

    if (fn_801D9988(arg1) != 0) {
        return arg1;
    }
    var_r3 = arg1;
    if (arg1 > arg2) {
        var_r3 = arg2;
    }
    return var_r3;
}

}
