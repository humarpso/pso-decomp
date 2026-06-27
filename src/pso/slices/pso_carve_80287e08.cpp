#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80287AD8(s32);
s32 TWindowTimer__ct();

s32 fn_80287E08(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowTimer__ct();
    }
    fn_80287AD8(var_r31);
    return var_r31;
}

}
