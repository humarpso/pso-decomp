#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GameListEntry_80139538_80137188 { char pad[0x1C]; };
struct Root_80139538_80137188 { char pad[0x1DA8]; struct GameListEntry_80139538_80137188 entries[1]; };

extern "C" {

void close_com_card_window__6TLobbyFv(void);
void handle_game_list_select__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
void update_menu_window__6TLobbyFv(void);
s32 TWindowSubComCard__sub_80265BF8(void*);
void TWindow__close(void*);
M2C_UNK close_all_windows__6TLobbyFPv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK close_and_send_text_list__6TLobbyFv();
M2C_UNK close_and_set_state_12__6TLobbyFv();
M2C_UNK create_warp_menu__6TLobbyFv();
s32 get_flag_bit2__6TLobbyFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 get_status_flag__6TLobbyFPv(u32);
s32 is_visible__17TWindowSubComCardFPv(void*);
M2C_UNK open_city_warp_menu__6TLobbyFv();
M2C_UNK open_menu_window__6TLobbyFv();
M2C_UNK open_warp_menu__6TLobbyFv();
M2C_UNK request_game_list__6TLobbyFv();
s32 select_cursor_entry__6TLobbyFPv(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, M2C_UNK *, M2C_UNK *);

extern u32 lbl_805D55E4;

void update_menu_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)((void*)lbl_805D55E4));
        if (is_visible__17TWindowSubComCardFPv((void*)(lbl_805D55E4)) != 0) {
            switch (temp_r31) {
            case 0:
                request_game_list__6TLobbyFv();
                return;
            case 1:
                open_menu_window__6TLobbyFv();
                return;
            case 2:
                close_all_windows__6TLobbyFPv();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern u32 lbl_805D55E0;

void handle_warp_menu_input__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E0 != 0U) {
        if (is_visible__17TWindowSubComCardFPv((void*)((void*)lbl_805D55E0)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8((void*)(lbl_805D55E0));
            switch (temp_r3) {
            case 0:
                create_warp_menu__6TLobbyFv();
                return;
            case 1:
                open_warp_menu__6TLobbyFv();
                return;
            case 2:
                close_and_send_text_list__6TLobbyFv();
                return;
            case 3:
                open_city_warp_menu__6TLobbyFv();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E0) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern struct Root_80139538_80137188 *TLobby__data_805D5580;
extern u32 TLobby__data_805D55D0;
extern M2C_UNK TLobby__data_805DB0B0;

void handle_game_list_select__6TLobbyFv(void) {
    s32 temp_r31;

    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            temp_r31 = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close((void*)(TLobby__data_805D55D0));
            TLobby__data_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc(TLobby__data_805D5580, &TLobby__data_805D5580->entries[temp_r31], &TLobby__data_805DB0B0, &TLobby__data_805DB0B0);
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if (get_flag_bit2__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            TWindow__close((void*)(TLobby__data_805D55D0));
            TLobby__data_805D55D0 = 0U;
            close_all_windows__6TLobbyFv();
        }
    }
}

extern u32 TLobby__data_805D55D8;

void close_com_card_window__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((void*)((void*)TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
}

}
