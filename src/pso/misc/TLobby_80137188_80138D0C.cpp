#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct GLE_80138D3C_80137188 { char pad[0x1c]; };
struct GBig_80138D3C_80137188 { char pad[0x1da8]; GLE_80138D3C_80137188 arr[1]; };

extern "C" {
int is_visible__17TWindowSubComCardFPv(void *);
int get_status_flag__17TWindowSubComCardFPv(void *);
void open_make_team_window__6TLobbyFi(s32);
M2C_UNK close_all_windows__6TLobbyFv();
void close_com_card_window__6TLobbyFv(void);
void TLobby__sub_8013990C(s32);
M2C_UNK TWindow__close(s32);
s32 get_selected_menu_value(void *);
extern u8 *lbl_805D55E0;
extern u8 *lbl_805D55E4;
extern u8 *lbl_805D55E8;
extern s32 lbl_805D560C;
extern u8 lbl_805D5610;
void TLobby__sub_80138DFC(void);
}

extern "C" {

s32 __ct__13GameListEntryFv(s32 arg0);
void handle_comcard_window__6TLobbyFv(void);
M2C_UNK TWindow__close(s32);
M2C_UNK __ct__16TPlyGuildCardTagFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 is_keyboard_active__17TWindowSubComCardFPv(u32);
M2C_UNK queue_destruction__7TObjectFv(u32);
s32 realloc_buffer__17TWindowSubComCardFPv(u32);
M2C_UNK send_action__9TProtocolFR13GameListEntryPcPc(GBig_80138D3C_80137188 *, GLE_80138D3C_80137188 *, M2C_UNK *, s32, GBig_80138D3C_80137188 *);
s32 update_keyboard__17TWindowSubComCardFPv(u32);

s32 __ct__13GameListEntryFv(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}

extern GBig_80138D3C_80137188 *TLobby__data_805D5580;
extern s32 lbl_805D55F0;
extern u32 lbl_805D55F4;
extern s32 lbl_805D5600;
extern M2C_UNK TLobby__data_805DB0B0;

void handle_comcard_window__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55F4 != 0U) {
        if (is_keyboard_active__17TWindowSubComCardFPv(lbl_805D55F4) != 0) {
            queue_destruction__7TObjectFv(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            close_all_windows__6TLobbyFv();
            return;
        }
        if (update_keyboard__17TWindowSubComCardFPv(lbl_805D55F4) != 0) {
            temp_r3 = realloc_buffer__17TWindowSubComCardFPv(lbl_805D55F4);
            send_action__9TProtocolFR13GameListEntryPcPc(TLobby__data_805D5580, &TLobby__data_805D5580->arr[lbl_805D5600], &TLobby__data_805DB0B0, temp_r3, TLobby__data_805D5580);
            free__11TOBoss4RockFUi(temp_r3);
            queue_destruction__7TObjectFv(lbl_805D55F4);
            lbl_805D55F4 = 0U;
            TWindow__close(lbl_805D55F0);
            lbl_805D55F0 = 0;
            destroy_lobby_ui__6TLobbyFv();
        }
    }
}
void TLobby__sub_80138DFC(void) {
    s32 temp_r3;
    if ((s8) lbl_805D5610 == 0) {
        lbl_805D560C = 0;
        lbl_805D5610 = 1;
    }
    if ((void *) lbl_805D55E8 != NULL) {
        temp_r3 = get_selected_menu_value(lbl_805D55E8);
        if ((s32) lbl_805D560C != temp_r3) {
            lbl_805D560C = temp_r3;
            switch (temp_r3) {
            case 0:
                TLobby__sub_8013990C(0x11);
                break;
            case 1:
                TLobby__sub_8013990C(0x12);
                break;
            }
        }
        if (is_visible__17TWindowSubComCardFPv(lbl_805D55E8) != 0) {
            TWindow__close((s32)(lbl_805D55E8));
            lbl_805D55E8 = NULL;
            close_com_card_window__6TLobbyFv();
            if ((void *) lbl_805D55E0 != NULL) {
                TWindow__close((s32)(lbl_805D55E0));
                lbl_805D55E0 = NULL;
            }
            if ((void *) lbl_805D55E4 != NULL) {
                TWindow__close((s32)(lbl_805D55E4));
                lbl_805D55E4 = NULL;
            }
            switch (temp_r3) {
            case 0:
                open_make_team_window__6TLobbyFi(1);
                return;
            case 1:
                open_make_team_window__6TLobbyFi(2);
                return;
            }
        } else if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E8) != 0) {
            close_all_windows__6TLobbyFv();
        }
    }
}

}
