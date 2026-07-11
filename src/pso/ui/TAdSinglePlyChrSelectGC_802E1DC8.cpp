#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802E1DC8(void *arg0);

s32 TAdSinglePlyChrSelectGC__sub_802E1DC8(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x44);
    var_r3 = 0;
    if (temp_r4 & 0x400) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x800) {
        var_r3 += 1;
    }
    if (temp_r4 & 0x1000) {
        return var_r3 + 1;
    }
    return var_r3;
}

}
