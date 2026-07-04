#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_80138858();
M2C_UNK fn_801A66B8();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(u32);
s32 fn_802693B4(u32);
M2C_UNK fn_80269454(u32);
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
                TLobby__sub_80138858();
            }
        } else if (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0) {
            TWindow__close(lbl_805D55CC);
            lbl_805D55CC = 0U;
            TLobby__sub_80138858();
        }
    } else {
        TLobby__sub_80138858();
    }
    fn_801A66B8();
}

}
