#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80070DA8();
extern M2C_UNK lbl_8048C9D8[];

s32 fn_80070D64(void) {
    s32 var_r3;

    var_r3 = fn_80070DA8();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

}
