#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80266378(M2C_UNK);
s32 TWindowSubComCardList__sub_802757AC(s32, s32, s32, s32, s32);

s32 fn_80275484(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r3;

    fn_80266378(7);
    var_r3 = __nw__7TObjectFUl(0xA0);
    if (var_r3 != 0) {
        var_r3 = TWindowSubComCardList__sub_802757AC(var_r3, arg0, arg1, arg2, arg3);
    }
    return var_r3;
}

}
