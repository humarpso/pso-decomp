#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_challenge_retry__6TLobbyFPv(void *arg0);
M2C_UNK TLobby__sub_80072308(s32);
M2C_UNK close_window_2c__6TLobbyFPv(void *);
M2C_UNK open_loss_menu__6TLobbyFPv(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK TLobby__sub_80072DA0();
M2C_UNK TLobby__sub_80072DD8(void *);
M2C_UNK play_player_default_effect__6TLobbyFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TWindowSubComCard__sub_8007341C(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

extern M2C_UNK lbl_8048D120[];
extern s8 lbl_8050E208[];

void update_challenge_retry__6TLobbyFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r31;

    TLobby__sub_80072DA0();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        open_loss_menu__6TLobbyFPv(arg0);
    }
    var_r31 = 0;
    if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 == 2) {
            var_r31 = 1;
            goto block_6;
        }
        TLobby__sub_80072308(lbl_8048D120[temp_r3]);
        send_45_and_close_windows__6TLobbyFv(arg0);
        play_player_default_effect__6TLobbyFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x24) = 1;
        M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        return;
    }
block_6:
    if ((var_r31 != 0) || (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 2) != 0)) {
        close_window_2c__6TLobbyFPv(arg0);
        send_45_and_close_windows__6TLobbyFv(arg0);
        TLobby__sub_80072DD8(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
}

}
