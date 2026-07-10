#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll_close__6TLobbyFv(void);
void handle_short_list_input__6TLobbyFv(void);
void update_short_list__6TLobbyFv(void);
M2C_UNK close__14TAdScrollWinGCFPv(u32);
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK fn_801A66B8();
M2C_UNK fn_801DA1DC(s32);
s32 fn_802693B4(u32);
M2C_UNK fn_80269454(u32);

extern s8 lbl_8050E208[];
extern s32 lbl_805D5580;
extern u32 lbl_805D55F8;

void update_scroll_close__6TLobbyFv(void) {
    if ((u32) lbl_805D55F8 != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 0xE) != 0) {
            close__14TAdScrollWinGCFPv(lbl_805D55F8);
            lbl_805D55F8 = 0U;
            destroy_lobby_ui__6TLobbyFv();
            fn_801A66B8();
            fn_801DA1DC(lbl_805D5580);
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

extern s8 lbl_8050E208[];
extern u32 lbl_805D55DC;

void handle_short_list_input__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) lbl_805D55DC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (fn_802693B4(lbl_805D55DC) == 0) {
                fn_80269454(lbl_805D55DC);
            } else {
                TWindow__close(lbl_805D55DC);
                lbl_805D55DC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(lbl_805D55DC);
            lbl_805D55DC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    fn_801A66B8();
}

extern s8 lbl_8050E208[];
extern u32 lbl_805D55CC;

void update_short_list__6TLobbyFv(void) {
    void *temp_r31;

    if ((u32) lbl_805D55CC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (fn_802693B4(lbl_805D55CC) == 0) {
                fn_80269454(lbl_805D55CC);
            } else {
                TWindow__close(lbl_805D55CC);
                lbl_805D55CC = 0U;
                close_all_windows__6TLobbyFv();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(lbl_805D55CC);
            lbl_805D55CC = 0U;
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    fn_801A66B8();
}

}
