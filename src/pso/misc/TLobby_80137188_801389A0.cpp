#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Entry_80138B7C { u8 b[0x1C]; };

struct Card_80138B7C { u8 b[0x98]; };

struct Lobby_80138B7C { u8 pad[0x2C68]; Card_80138B7C cards[1]; };

extern "C" {
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
void return_to_main_menu__6TLobbyFv(void);
M2C_UNK close_all_windows__6TLobbyFv();
void __ct__13GameListEntryFv(void *);
s32 get_status_flag__6TLobbyFPv(u32);
void send_info__9TProtocolFR16TPlyGuildCardTag(s32, void *);
void send_action__9TProtocolFR13GameListEntryPcPc(s32, void *, void *, void *);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);
void send_and_handle__6TLobbyFPvii(u32, void *, s32);
extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern s32 TLobby__data_805D55A4;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern char TLobby__data_805DB0B0[4];
void update_card_list_window__6TLobbyFv(void);
}

extern "C" {

void update_scroll_close__6TLobbyFv(void);
void handle_short_list_input__6TLobbyFv(void);
void update_short_list__6TLobbyFv(void);
M2C_UNK close__14TAdScrollWinGCFPv(u32);
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK reset_controller_input_state();
M2C_UNK send_message_box_closed__9TProtocolFv(s32);
s32 is_message_window_ready(u32);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);

extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55F8;

void update_scroll_close__6TLobbyFv(void) {
    if ((u32) lbl_805D55F8 != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 0xE) != 0) {
            close__14TAdScrollWinGCFPv(lbl_805D55F8);
            lbl_805D55F8 = 0U;
            destroy_lobby_ui__6TLobbyFv();
            reset_controller_input_state();
            send_message_box_closed__9TProtocolFv(TLobby__data_805D5580);
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55DC;

void handle_short_list_input__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) TLobby__data_805D55DC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (is_message_window_ready(TLobby__data_805D55DC) == 0) {
                complete_reveal__14TWindowMessageFPv(TLobby__data_805D55DC);
            } else {
                TWindow__close(TLobby__data_805D55DC);
                TLobby__data_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(TLobby__data_805D55DC);
            TLobby__data_805D55DC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    reset_controller_input_state();
}

extern s8 lbl_8050E208[];
extern u32 TLobby__data_805D55CC;

void update_short_list__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) TLobby__data_805D55CC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (is_message_window_ready(TLobby__data_805D55CC) == 0) {
                complete_reveal__14TWindowMessageFPv(TLobby__data_805D55CC);
            } else {
                TWindow__close(TLobby__data_805D55CC);
                TLobby__data_805D55CC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(TLobby__data_805D55CC);
            TLobby__data_805D55CC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    reset_controller_input_state();
}
void update_card_list_window__6TLobbyFv(void) {
    s32 sel;
    u32 btn;
    if (TLobby__data_805D55D0 == 0) {
        return;
    }
    if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
        Entry_80138B7C e;
        sel = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
        TWindow__close(TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0;
        __ct__13GameListEntryFv(&e);
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&e, &((Lobby_80138B7C *)TLobby__data_805D5580)->cards[sel]);
        send_action__9TProtocolFR13GameListEntryPcPc(TLobby__data_805D5580, &e, TLobby__data_805DB0B0, TLobby__data_805DB0B0);
        if (TLobby__data_805D55C8 != 0) {
            TWindow__close(TLobby__data_805D55C8);
            TLobby__data_805D55C8 = 0;
        }
        close_all_windows__6TLobbyFv();
        return;
    }
    if (TLobby__data_805D55CC != 0) {
        sel = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
        if (sel != TLobby__data_805D55A4) {
            send_and_handle__6TLobbyFPvii(TLobby__data_805D55CC, &((Lobby_80138B7C *)TLobby__data_805D5580)->cards[sel].b[0x28], 3);
            complete_reveal__14TWindowMessageFPv(TLobby__data_805D55CC);
            if (TLobby__data_805D55C8 != 0) {
                TWindow__close(TLobby__data_805D55C8);
                TLobby__data_805D55C8 = 0;
            }
            TLobby__data_805D55A4 = sel;
            return;
        }
    }
    btn = (*(u32 **)lbl_8050E208)[4];
    if (btn & 0x400) {
        Entry_80138B7C e2;
        sel = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
        __ct__13GameListEntryFv(&e2);
        __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&e2, &((Lobby_80138B7C *)TLobby__data_805D5580)->cards[sel]);
        send_info__9TProtocolFR16TPlyGuildCardTag(TLobby__data_805D5580, &e2);
    } else if (btn & 2) {
        if (TLobby__data_805D55C8 != 0) {
            TWindow__close(TLobby__data_805D55C8);
            TLobby__data_805D55C8 = 0;
        } else {
            return_to_main_menu__6TLobbyFv();
        }
    }
}

}
