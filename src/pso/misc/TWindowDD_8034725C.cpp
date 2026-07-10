#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 classify_id__9TWindowDDFs(s16 arg0);
s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TWindowDD__sub_80347204(s16);
s32 TWindowDD__sub_80347238();

s32 classify_id__9TWindowDDFs(s16 arg0) {
    s32 var_r3;

    if (arg0 == 0x2E4) {
        return 0;
    }
    if (TWindowDD__sub_80347238() != 0) {
        return 1;
    }
    if (TWindowDD__sub_80347204(arg0) != 0) {
        return 2;
    }
    if (arg0 == 0x4F3) {
        return 3;
    }
    if (arg0 == 0x635) {
        return 4;
    }
    var_r3 = 7;
    if (arg0 == 0x650) {
        var_r3 = 5;
    }
    return var_r3;
}

s32 get_player_battle_flag_state__9TWindowDDFUs(u16 arg0) {
    s32 temp_r3_2;
    void *temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            return 0;
        }
        if (temp_r3_2 & 2) {
            return 2;
        }
        goto block_5;
    }
block_5:
    return 0;
}

}
