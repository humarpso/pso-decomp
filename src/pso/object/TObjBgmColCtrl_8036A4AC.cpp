#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all_zones__14TObjBgmColCtrlFi(s32 arg0);
s32 TLobby__sub_8039DAFC(s32, s32);
M2C_UNK fn_8036A514(s32);
s32 fn_8036A5B4(s32);
s32 fn_8036A648(s32);

void update_all_zones__14TObjBgmColCtrlFi(s32 arg0) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (fn_8036A5B4(var_r31) != 1) {
            if (TLobby__sub_8039DAFC(fn_8036A648(var_r31), arg0) == 0) {
                fn_8036A514(var_r31);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 0x31);
}

}
