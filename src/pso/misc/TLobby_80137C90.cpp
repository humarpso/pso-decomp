#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_player_window__6TLobbyFv(void);
void init_player_window_effect__6TLobbyFv(void);
M2C_UNK clear_lobby_flag__10TObjPlayerFPv();
M2C_UNK init_effect_5f0__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);

extern s32 lbl_805D53A0;

void update_player_window__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        clear_lobby_flag__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
}

extern s32 lbl_805D53A0;

void init_player_window_effect__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        init_effect_5f0__10TObjPlayerFPv();
    }
    TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
}

}
