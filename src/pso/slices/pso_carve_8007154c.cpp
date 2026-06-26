#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *fn_802029E8(M2C_UNK);

s32 fn_8007154C(void) {
    s32 var_r3;

    var_r3 = 0x1E - *fn_802029E8(0xFFFF);
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
