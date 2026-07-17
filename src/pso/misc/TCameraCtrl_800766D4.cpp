#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 should_update__11TCameraCtrlFv(void);
s32 TCameraCtrl__sub_8006B368();
s32 check_player_state_flag_2__6TLobbyFPv();
s32 get_global_state__14TOKeyMachine01Fv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 is_split_screen();

extern s32 lbl_805D53A0;

s32 should_update__11TCameraCtrlFv(void) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) == 0U) || (check_player_state_flag_2__6TLobbyFPv() != 0)) {
            return 0;
        }
        if (TCameraCtrl__sub_8006B368() == 0) {
            return 0;
        }
        goto block_6;
    }
block_6:
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if (temp_r3 < 0xF) {
        if (temp_r3 == 0) {
            goto block_10;
        }
        goto block_11;
    }
    if (temp_r3 < 0x13) {
block_10:
        return 0;
    }
block_11:
    return 1;
}

}
