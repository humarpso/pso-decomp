#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80292D34(void);
s32 TLobby__sub_80292CA4(s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowSubStatusDisp__sub_8006F094();
M2C_UNK TWindowSubStatusDisp__sub_8006F190(M2C_UNK);

s32 TLobby__sub_80292D34(void) {
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;

    TWindowSubStatusDisp__sub_8006F190(-1);
    var_r31 = TWindowSubStatusDisp__sub_8006F094();
    var_r30 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U) {
            temp_r3 = TLobby__sub_80292CA4(var_r30);
            if (var_r31 > temp_r3) {
                var_r31 = temp_r3;
            }
        }
        var_r30 += 1;
    } while (var_r30 < 4);
    return var_r31;
}

}
