#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjMapCsn__sub_8007A728();
s32 fn_801949FC(s32, s32, s32);
s32 __nw__7TObjectFUl(M2C_UNK);

s32 fn_80194934(s32 arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x254);
    if (var_r31 != 0) {
        var_r31 = fn_801949FC(var_r31, TObjMapCsn__sub_8007A728(), arg0);
    }
    return var_r31;
}

}
