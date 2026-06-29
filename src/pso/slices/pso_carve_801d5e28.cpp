#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TFontSmallLobby__sub_801D6614(s16);

s16 fn_801D5E28(void *arg0) {
    s16 var_r31;

    var_r31 = M2C_FIELD(arg0, s16 *, 2);
    if (TFontSmallLobby__sub_801D6614(var_r31) == 0) {
        var_r31 = 0;
    }
    return var_r31;
}

}
