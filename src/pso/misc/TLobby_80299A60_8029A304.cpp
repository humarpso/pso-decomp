#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_retry_menu_select__6TLobbyFPv(void *arg0);
M2C_UNK set_retry_selection__6TLobbyFi(M2C_UNK);
M2C_UNK open_giveup_window__6TLobbyFPv(void *);
M2C_UNK send_giveup_to_all_players__6TLobbyFv(void *);
M2C_UNK close_giveup_window__6TLobbyFPv();
M2C_UNK play_effect_all_players__6TLobbyFPv(void *);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_selected_menu_value(u32);

extern M2C_UNK lbl_804DBE90[];

void handle_retry_menu_select__6TLobbyFPv(void *arg0) {
    s32 temp_r3;

    close_giveup_window__6TLobbyFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        open_giveup_window__6TLobbyFPv(arg0);
    }
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
        temp_r3 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0x2C));
        if (temp_r3 != 2) {
            set_retry_selection__6TLobbyFi(lbl_804DBE90[temp_r3]);
            send_giveup_to_all_players__6TLobbyFv(arg0);
            play_effect_all_players__6TLobbyFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x24) = 1;
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
}

}
