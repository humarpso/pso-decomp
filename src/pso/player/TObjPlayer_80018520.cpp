#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
s32 fn_80156844(s32, s32, s32);

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (fn_80156844(arg0, arg1, 0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x38);
        return 1;
    }
    return 0;
}

}
