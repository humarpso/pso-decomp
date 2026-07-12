#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK TLobby__sub_80072DA0(void *);
M2C_UNK play_default_effect__6TLobbyFPv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 check_flag_100__10TObjPlayerFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s8 lbl_8050E208[];
extern s32 lbl_805D53A0;

void handle_challenge_retry_confirm(void *arg0) {
    play_default_effect__6TLobbyFPv();
    if ((TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) && (check_flag_100__10TObjPlayerFPv() == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 4) != 0)) {
        send_45_and_close_windows__6TLobbyFv(arg0);
        TLobby__sub_80072DA0(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
    }
}

}
