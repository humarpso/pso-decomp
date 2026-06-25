#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80011138(s32, s32);
M2C_UNK fn_801D4AEC(s32, s32, s32, s32);
s32 fn_801D4F14(s32, s32);

s32 fn_801D4BB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 == -1) {
        fn_80011138(arg1, arg3);
        return 1;
    }
    temp_r3 = fn_801D4F14(arg0, arg2);
    if (temp_r3 == 0) {
        return 0;
    }
    fn_801D4AEC(arg0, arg1, temp_r3, arg3);
    return 1;
}

}
