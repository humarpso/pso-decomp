#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 __nw__7TObjectFUl(M2C_UNK);
s32 TWindowHelpItem__ct(s32, s32, s32);
s32 fn_8026CBB8(M2C_UNK);

s32 TWindowSubTradeMain__sub_80330F4C(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0xBC);
    if (var_r31 != 0) {
        var_r31 = TWindowHelpItem__ct(var_r31, fn_8026CBB8(2), M2C_FIELD(arg0, s32 *, 0x28));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    return var_r31;
}

}
