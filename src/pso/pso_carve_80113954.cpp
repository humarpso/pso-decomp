#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 fn_8001972C();
M2C_UNK fn_8010B58C(s32, u8);

void TItemMag__vt44(s32 arg0) {
    u8 temp_r3;
    u8 var_r4;

    temp_r3 = fn_8001972C();
    var_r4 = temp_r3;
    if (temp_r3 >= 0x42U) {
        var_r4 = 0x42;
    }
    fn_8010B58C(arg0, var_r4);
}

}
