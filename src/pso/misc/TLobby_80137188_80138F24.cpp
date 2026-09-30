#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pad_80139094 { u8 pad[0x10]; u32 flags; };

struct Pad_80139104 { u8 pad[0x10]; u32 flags; };

struct Ent_80139104 { u8 b[0x1C]; };

struct Lst_80139104 { u8 pad[0x1DA8]; Ent_80139104 e[1]; };

struct Pad_801391BC { u8 pad[0x10]; u32 flags; };

struct Ent_801391BC { u8 b[0x1C]; };

struct Lst_801391BC { u8 pad[0x1DA8]; Ent_801391BC e[1]; };

extern "C" {
extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D55B4;
void init__23TAdSinglePlyChrSelectGCFv(void);
void TKeyBoardControl__sub_8000F91C(s32);
void TKeyBoardControl__sub_8000F9CC(s32);
void queue_destruction__7TObjectFv(void *);
void TLobby__sub_80139094(void *self);
void close_and_set_state_12__6TLobbyFv();
s32 get_status_flag__6TLobbyFPv(u32);
void send_info__9TProtocolFR16TPlyGuildCardTag(void *, void *);
void send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, char *, char *);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern char lbl_8043F06C[];
extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern u32 TLobby__data_805D55D0;
extern char TLobby__data_805DB0B0;
void TLobby__sub_80139104(void);
void close_and_set_state_12__6TLobbyFv();
s32 get_status_flag__6TLobbyFPv(u32);
void send_info__9TProtocolFR16TPlyGuildCardTag(void *, void *);
void send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, char *, char *);
M2C_UNK TWindow__close(u32);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern char lbl_8043F078[];
extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern u32 TLobby__data_805D55D0;
extern char TLobby__data_805DB0B0;
void TLobby__sub_801391BC(void);
}

extern "C" {

void handle_com_card__6TLobbyFv(void);
void handle_create_game_window__6TLobbyFv(void);
void update__6TLobbyFv(void);
M2C_UNK TKeyBoardControl__sub_801A66B8();
s32 TLobby__sub_8013AD50(u32);
s32 TLobby__sub_8013AD5C(u32);
s8 TLobby__sub_8013AD6C(u32);
s32 TLobby__sub_8013AD74(u32);
M2C_UNK TLobby__sub_80269454(u32);
s32 TMCFormatSequence__sub_802693B4(u32);
s32 TWindowMakeTeam__sub_80264B24(u32);
s32 TWindowMakeTeam__sub_80264B38(u32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK TWindow__close(u32);
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK close_com_card_window__6TLobbyFv();
M2C_UNK close_menu_windows__6TLobbyFv();
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK send_server_time_accepted__9TProtocolFv(s32);
s8 get_mode__6TLobbyFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_enabled__15TWindowMakeTeamFPv(u32);
s32 is_visible__17TWindowSubComCardFPv(void*);
M2C_UNK return_to_main_menu__6TLobbyFv();
M2C_UNK send_create_game__9TProtocolFPcPcUcUcUcUc(s32, s32, s32, u8, u8, u8, s32);

extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55EC;

void handle_create_game_window__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r30;
    u8 temp_r29;
    u8 temp_r28;
    u8 temp_r27;
    s32 temp_r0;

    if ((u32) lbl_805D55EC != 0U) {
        if (TLobby__sub_8013AD74(lbl_805D55EC) != 0) {
            temp_r3 = TWindowMakeTeam__sub_80264B38(lbl_805D55EC);
            if (temp_r3 != 0) {
                temp_r30 = TWindowMakeTeam__sub_80264B24(lbl_805D55EC);
                temp_r29 = TLobby__sub_8013AD6C(lbl_805D55EC) == 2;
                temp_r28 = is_enabled__15TWindowMakeTeamFPv(lbl_805D55EC);
                temp_r27 = get_mode__6TLobbyFPv(lbl_805D55EC) == 1;
                temp_r0 = TLobby__sub_8013AD5C(lbl_805D55EC);
                send_create_game__9TProtocolFPcPcUcUcUcUc(TLobby__data_805D5580, temp_r3, temp_r30, temp_r28, temp_r29, temp_r27, temp_r0);
                destroy_lobby_ui__6TLobbyFv();
                return;
            }
            close_all_windows__6TLobbyFv();
            return;
        }
        if (TLobby__sub_8013AD50(lbl_805D55EC) != 0) {
            close_all_windows__6TLobbyFv();
        }
    }
}

extern s8 lbl_8050E208[];
extern s32 TLobby__data_805D5580;
extern u32 TLobby__data_805D55DC;

void update__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55DC != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 8) != 0) {
            if (TMCFormatSequence__sub_802693B4(TLobby__data_805D55DC) == 0) {
                TLobby__sub_80269454(TLobby__data_805D55DC);
            } else {
                TWindow__close(TLobby__data_805D55DC);
                TLobby__data_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
                send_server_time_accepted__9TProtocolFv(TLobby__data_805D5580);
            }
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    TKeyBoardControl__sub_801A66B8();
}

extern u32 lbl_805D55E4;

void TLobby__sub_80139094(void *self) {
    if (((*(Pad_80139094 **)lbl_8050E208)->flags & 8) || TLobby__data_805D55B4++ > 0xe10) {
        init__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F91C(2);
        TKeyBoardControl__sub_8000F9CC(0x12);
        queue_destruction__7TObjectFv(self);
    }
}

void TLobby__sub_80139104(void) {
    s32 idx;
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc((*(Lst_80139104 * *)&TLobby__data_805D5580), &(*(Lst_80139104 * *)&TLobby__data_805D5580)->e[idx], lbl_8043F06C, &TLobby__data_805DB0B0);
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if ((*(Pad_80139104 **)lbl_8050E208)->flags & 0x400) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            send_info__9TProtocolFR16TPlyGuildCardTag((*(Lst_80139104 * *)&TLobby__data_805D5580), &(*(Lst_80139104 * *)&TLobby__data_805D5580)->e[idx]);
        }
    }
}

void TLobby__sub_801391BC(void) {
    s32 idx;
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close(TLobby__data_805D55D0);
            TLobby__data_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc((*(Lst_801391BC * *)&TLobby__data_805D5580), &(*(Lst_801391BC * *)&TLobby__data_805D5580)->e[idx], lbl_8043F078, &TLobby__data_805DB0B0);
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if ((*(Pad_801391BC **)lbl_8050E208)->flags & 0x400) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            send_info__9TProtocolFR16TPlyGuildCardTag((*(Lst_801391BC * *)&TLobby__data_805D5580), &(*(Lst_801391BC * *)&TLobby__data_805D5580)->e[idx]);
        }
    }
}

void handle_com_card__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E4 != 0U) {
        if (is_visible__17TWindowSubComCardFPv((void*)lbl_805D55E4) != 0) {
            close_com_card_window__6TLobbyFv();
            temp_r3 = TWindowSubComCard__sub_80265BF8(lbl_805D55E4);
            switch (temp_r3) {
            case 0:
                return_to_main_menu__6TLobbyFv();
                return;
            case 1:
                close_menu_windows__6TLobbyFv();
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
