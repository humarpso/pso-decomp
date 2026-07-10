#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801389A0(void);
void TLobby__sub_80138A0C(void);
void TLobby__sub_80138AC4(void);
M2C_UNK TAdScrollWinGC__sub_803274D0(u32);
M2C_UNK TLobby__sub_8013872C();
M2C_UNK TLobby__close_all_windows();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK fn_801A66B8();
M2C_UNK fn_801DA1DC(s32);
s32 fn_802693B4(u32);
M2C_UNK fn_80269454(u32);

extern s8 lbl_8050E208[];
extern s32 lbl_805D5580;
extern u32 lbl_805D55F8;

void TLobby__sub_801389A0(void) {
    if ((u32) lbl_805D55F8 != 0U) {
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208 + 0x20, 0xE) != 0) {
            TAdScrollWinGC__sub_803274D0(lbl_805D55F8);
            lbl_805D55F8 = 0U;
            TLobby__sub_8013872C();
            fn_801A66B8();
            fn_801DA1DC(lbl_805D5580);
        }
    } else {
        TLobby__close_all_windows();
    }
}

extern s8 lbl_8050E208[];
extern u32 lbl_805D55DC;

void TLobby__sub_80138A0C(void) {
    void *temp_r31;

    if ((u32) lbl_805D55DC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (fn_802693B4(lbl_805D55DC) == 0) {
                fn_80269454(lbl_805D55DC);
            } else {
                TWindow__close(lbl_805D55DC);
                lbl_805D55DC = 0U;
                TLobby__close_all_windows();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(lbl_805D55DC);
            lbl_805D55DC = 0U;
            TLobby__close_all_windows();
        }
    } else {
        TLobby__close_all_windows();
    }
    fn_801A66B8();
}

extern s8 lbl_8050E208[];
extern u32 lbl_805D55CC;

void TLobby__sub_80138AC4(void) {
    void *temp_r31;

    if ((u32) lbl_805D55CC != 0U) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) {
            if (fn_802693B4(lbl_805D55CC) == 0) {
                fn_80269454(lbl_805D55CC);
            } else {
                TWindow__close(lbl_805D55CC);
                lbl_805D55CC = 0U;
                TLobby__close_all_windows();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(lbl_805D55CC);
            lbl_805D55CC = 0U;
            TLobby__close_all_windows();
        }
    } else {
        TLobby__close_all_windows();
    }
    fn_801A66B8();
}

}
