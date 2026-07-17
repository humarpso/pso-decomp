#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0);
void *TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 get_id__11TMainCursorFPv(s32);

s32 get_battle_ctrl_id__10TObjPlayerFUs(u16 arg0) {
    u32 temp_r3;
    void *temp_r3_2;

    temp_r3_2 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3_2 == NULL) {
        return 0xFFFF;
    }
    temp_r3 = M2C_FIELD(temp_r3_2, u32 *, 0x424);
    if (temp_r3 == 0U) {
        return 0xFFFF;
    }
    return get_id__11TMainCursorFPv(temp_r3 + 0x4F8);
}

}
