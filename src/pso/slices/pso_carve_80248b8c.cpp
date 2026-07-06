#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80248BE8(s32, s32, s32);
M2C_UNK fn_80267704(M2C_UNK);

s32 fn_80248B8C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    fn_80267704(0x23);
    temp_r31 = fn_80248BE8(arg0, arg1, arg2);
    fn_80267704(3);
    return temp_r31;
}

}
