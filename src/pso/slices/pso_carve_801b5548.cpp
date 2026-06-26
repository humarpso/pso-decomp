#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801AFDA8();
M2C_UNK fn_801BE8EC(s32, M2C_UNK);

void fn_801B5548(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_801AFDA8();
    if (temp_r3 & 0x20) {
        fn_801BE8EC(arg0, 0);
        return;
    }
    if (temp_r3 & 0x40) {
        fn_801BE8EC(arg0, 1);
        return;
    }
    fn_801BE8EC(arg0, 2);
}

}
