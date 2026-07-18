#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32 arg0, u16 arg1);
s32 update_battle__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_802C4374(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
s32 update_battle_controller__10TObjPlayerFv();

s32 try_assign_battle_ctrl__10TObjPlayerFiUs(s32 arg0, u16 arg1) {
    s32 temp = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg1));
    if (temp == 0) {
        return 0;
    }
    TObjPlayer__sub_802C4374((void *)((void *) (arg0)), (s32)(temp));
    return 1;
}

s32 update_battle__10TObjPlayerFi(s32 arg0) {
    s32 r;
    r = update_battle_controller__10TObjPlayerFv();
    if (r == 0) {
        return 0;
    }
    TObjPlayer__sub_802C4374((void *)(arg0), (s32)(r));
    return 1;
}

}
