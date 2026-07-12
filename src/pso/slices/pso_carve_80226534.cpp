#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80226918();

s32 fn_80226534(s32 arg0, s32 arg1) {
    s32 var_r3;

    if (arg1 & 0x2000) {
        var_r3 = 0;
    } else {
        var_r3 = TLobby__sub_80226918();
    }
    if (var_r3 == -0x100) {
        return 0;
    }
    return 1;
}

}
