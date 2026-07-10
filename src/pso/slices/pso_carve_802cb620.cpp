#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK set_shake_preset__11TCameraCtrlFi(M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(M2C_UNK);

void fn_802CB620(void *arg0, u32 arg1) {
    if ((arg1 == TPlayerBattleCtrl4P__sub_801BA74C(0)) && ((s32) M2C_FIELD(arg0, s32 *, 0x3F4) <= 0)) {
        M2C_FIELD(arg0, s32 *, 0x3F4) = 0x1E;
        set_shake_preset__11TCameraCtrlFi(1);
    }
}

}
