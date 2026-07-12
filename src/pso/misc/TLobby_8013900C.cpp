#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__6TLobbyFv(void);
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK fn_801DB4E4(s32);
s32 TMCFormatSequence__sub_802693B4(u32);
M2C_UNK TLobby__sub_80269454(u32);

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
                fn_801DB4E4(TLobby__data_805D5580);
            }
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
    TKeyBoardControl__sub_801A66B8();
}

}
