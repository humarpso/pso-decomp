#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801A3FEC();
s8 func_801A5E54__Fv();
s16 fn_80426BD8();

s32 fn_8014622C(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if (var_r31 > 0x12C) {
        return 0;
    }
    var_r31 += 1;
    fn_801A3FEC();
    if (func_801A5E54__Fv() != 0) {
        return 1;
    }
    if (fn_80426BD8() == 1) {
        return 2;
    }
    goto loop_1;
}

}
