#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802C6508(void);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);

s32 TAdMultiPlyChrSelectGC__sub_802C6508(void) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    var_r30 = 0;
    do {
        if (TAdMultiPlyChrSelectGC__sub_802C6848(var_r30) != 0) {
            var_r31 += 1;
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

}
