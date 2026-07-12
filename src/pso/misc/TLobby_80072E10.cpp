#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_player_default_effect__6TLobbyFv(void);
s32 check_player_flag1__6TLobbyFPv();
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);

extern s32 lbl_805D53A0;

void play_player_default_effect__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}

}
