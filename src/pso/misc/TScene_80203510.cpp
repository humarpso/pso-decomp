#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(void *);
s32 TScene__sub_80203510(void *);

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((void *) (arg0));
    if (temp_r3 != 0U) {
        return TScene__sub_80203510((void *) (temp_r3 + 0x38));
    }
    return -1;
}

}
