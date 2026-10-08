#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GameListEntry_80139538_80137188 { char pad[0x1C]; };
struct Root_80139538_80137188 { char pad[0x1DA8]; struct GameListEntry_80139538_80137188 entries[1]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_801397E8 { s32 a; s32 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_80139894 { s32 a; s32 b; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pair_8013990C { s32 a; s32 b; };

struct Pad_801395D8 { u8 pad[0x10]; u32 flags; };

struct Ent_801395D8 { u8 b[0x1C]; };

struct Lst_801395D8 { u8 pad[0x1DA8]; Ent_801395D8 e[1]; };

struct Flag_80139690 { u8 pad[0x2A]; s8 flag; };

extern "C" {
extern u32 TLobby__data_805D55DC;
extern const Pair_801397E8 lbl_8043EDF8[];
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
s32 get_seq_phase__6TLobbyFPv(s32);
void TLobby__sub_801397E8(s32 arg0);
extern u32 TLobby__data_805D55D8;
extern const Pair_80139894 lbl_8043EDF0[];
extern const f32 lbl_805DB0B8;
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
void set_field_1c__6TLobbyFPvf(u32 p, f32 f);
void TLobby__sub_80139894(s32 arg0);
extern u32 TLobby__data_805D55D8;
extern const Pair_8013990C lbl_8043EDE8[];
extern const f32 lbl_805DB0B8;
s32 get_window_layout_position(s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
int send_and_handle__6TLobbyFPvii(u32 p, int a1, int a2);
s32 get_seq_phase__6TLobbyFPv(s32);
void set_field_1c__6TLobbyFPvf(u32 p, f32 f);
void show_seq_phase_message__6TLobbyFi(s32 arg0);
M2C_UNK close_and_set_state_12__6TLobbyFv();
s32 get_status_flag__6TLobbyFPv(u32);
void send_info__9TProtocolFR16TPlyGuildCardTag(void *, void *);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(void *, void *, M2C_UNK *, M2C_UNK *);
void TWindow__close(void*);
s32 select_cursor_entry__6TLobbyFPv(u32);
extern char lbl_8043F084[];
extern s8 lbl_8050E208[];
extern struct Root_80139538_80137188 *TLobby__data_805D5580;
extern u32 TLobby__data_805D55D0;
extern M2C_UNK TLobby__data_805DB0B0;
void handle_team_select__6TLobbyFv(void);
void func_80019A68__Fv(void);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
void update_com_card_window__6TLobbyFv(void);
void update_state__6TLobbyFv(void);
void TLobby__sub_801384E4(void);
void update_scroll_close__6TLobbyFv(void);
void handle_short_list_input__6TLobbyFv(void);
void update_short_list__6TLobbyFv(void);
void update_card_list_window__6TLobbyFv(void);
void handle_comcard_window__6TLobbyFv(void);
void update_make_team_menu__6TLobbyFv(void);
void handle_create_game_window__6TLobbyFv(void);
void update__6TLobbyFv(void);
void TLobby__sub_80139094(void);
void update_block_jump_list__6TLobbyFv(void);
void update_ship_select_window__6TLobbyFv(void);
void handle_com_card__6TLobbyFv(void);
void update_game_list_menu__6TLobbyFv(void);
void update_menu_window__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
void handle_game_list_select__6TLobbyFv(void);
void handle_team_select__6TLobbyFv(void);
s32 query_task_active__6TLobbyFv(void);
s32 get_link_status__Fv(void);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
void close_windows_and_reset__16TQuestListOnlineFv(void *);
extern struct Root_80139538_80137188 *TLobby__data_805D5580;
extern u32 TLobby__data_805D5594;
extern s32 lbl_805D61AC;
void run_task__6TLobbyFv(void *self);
}

extern "C" {

void close_com_card_window__6TLobbyFv(void);
void handle_game_list_select__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
void update_menu_window__6TLobbyFv(void);
s32 get_selected_menu_value(void*);
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
        temp_r31 = get_selected_menu_value((void*)((void*)lbl_805D55E4));
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
            temp_r3 = get_selected_menu_value((void*)(lbl_805D55E0));
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

void handle_team_select__6TLobbyFv(void) {
    s32 idx;
    if (TLobby__data_805D55D0 != 0U) {
        if (get_status_flag__6TLobbyFPv(TLobby__data_805D55D0) != 0) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            TWindow__close((void*)(TLobby__data_805D55D0));
            TLobby__data_805D55D0 = 0U;
            send_action__9TProtocolFR13GameListEntryPcPc((void *)((*(Lst_801395D8 * *)&TLobby__data_805D5580)), (void *)(&(*(Lst_801395D8 * *)&TLobby__data_805D5580)->e[idx]), (M2C_UNK *)(lbl_8043F084), (M2C_UNK *)(&TLobby__data_805DB0B0));
            close_and_set_state_12__6TLobbyFv();
            return;
        }
        if ((*(Pad_801395D8 **)lbl_8050E208)->flags & 0x400) {
            idx = select_cursor_entry__6TLobbyFPv(TLobby__data_805D55D0);
            send_info__9TProtocolFR16TPlyGuildCardTag((*(Lst_801395D8 * *)&TLobby__data_805D5580), &(*(Lst_801395D8 * *)&TLobby__data_805D5580)->e[idx]);
        }
    }
}

struct Root_80139538_80137188;
#define CALL_80139690(f) ((void (*)(void *))f)(self)
void run_task__6TLobbyFv(void *self) {
    s32 r;
    switch (TLobby__data_805D5594) {
    case 1:
        CALL_80139690(handle_team_select__6TLobbyFv);
        break;
    case 2:
        CALL_80139690(handle_team_select__6TLobbyFv);
        break;
    case 3:
        CALL_80139690(handle_warp_menu_input__6TLobbyFv);
        break;
    case 4:
        CALL_80139690(update_menu_window__6TLobbyFv);
        break;
    case 6:
        CALL_80139690(update_game_list_menu__6TLobbyFv);
        break;
    case 9:
        CALL_80139690(handle_comcard_window__6TLobbyFv);
        break;
    case 10:
        CALL_80139690(handle_create_game_window__6TLobbyFv);
        break;
    case 5:
        CALL_80139690(handle_com_card__6TLobbyFv);
        break;
    case 7:
        CALL_80139690(update_ship_select_window__6TLobbyFv);
        break;
    case 8:
        CALL_80139690(update_block_jump_list__6TLobbyFv);
        break;
    case 12:
        CALL_80139690(TLobby__sub_80139094);
        return;
    case 13:
        CALL_80139690(update__6TLobbyFv);
        break;
    case 17:
        CALL_80139690(update_card_list_window__6TLobbyFv);
        break;
    case 20:
        CALL_80139690(update_short_list__6TLobbyFv);
        break;
    case 22:
        CALL_80139690(handle_short_list_input__6TLobbyFv);
        break;
    case 21:
        CALL_80139690(handle_game_list_select__6TLobbyFv);
        break;
    case 24:
        CALL_80139690(update_make_team_menu__6TLobbyFv);
        break;
    case 26:
        CALL_80139690(update_scroll_close__6TLobbyFv);
        break;
    case 25:
        CALL_80139690(update_com_card_window__6TLobbyFv);
        break;
    case 23:
        return;
    }
    if (lbl_805D61AC != 0) {
        func_80019A68__Fv();
    }
    r = query_task_active__6TLobbyFv();
    if (((Flag_80139690 *)TLobby__data_805D5580)->flag != 0 || get_link_status__Fv() == 0 || r < 0) {
        Flag_80139690 *d = (Flag_80139690 *)TLobby__data_805D5580;
        d->flag = 0;
        close_windows_and_reset__16TQuestListOnlineFv(d);
        if (r < 0) {
            update_state__6TLobbyFv();
            return;
        }
        while (TAdPlayerLoadGC__sub_801E1B50(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) == -1) {
        }
        TLobby__sub_801384E4();
    }
}

void TLobby__sub_801397E8(s32 arg0) {
    if (TLobby__data_805D55DC == 0) {
        Pair_801397E8 tmp = lbl_8043EDF8[0];
        TLobby__data_805D55DC = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc2), &tmp);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55DC, get_seq_phase__6TLobbyFPv(arg0), 1);
}

void close_com_card_window__6TLobbyFv(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((void*)((void*)TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
}
void TLobby__sub_80139894(s32 arg0) {
    if (TLobby__data_805D55D8 == 0) {
        Pair_80139894 tmp = lbl_8043EDF0[0];
        TLobby__data_805D55D8 = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc1), &tmp);
        set_field_1c__6TLobbyFPvf(TLobby__data_805D55D8, lbl_805DB0B8);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55D8, arg0, 1);
}
void show_seq_phase_message__6TLobbyFi(s32 arg0) {
    if (TLobby__data_805D55D8 == 0) {
        Pair_8013990C tmp = lbl_8043EDE8[0];
        TLobby__data_805D55D8 = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0xc1), &tmp);
        set_field_1c__6TLobbyFPvf(TLobby__data_805D55D8, lbl_805DB0B8);
    }
    send_and_handle__6TLobbyFPvii(TLobby__data_805D55D8, get_seq_phase__6TLobbyFPv(arg0), 1);
}

}
