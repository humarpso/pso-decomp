#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_com_card__6TLobbyFv(void);
M2C_UNK close_menu_windows__6TLobbyFv();
M2C_UNK return_to_main_menu__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
M2C_UNK TLobby__sub_80139860();
s32 TWindowSubComCard__sub_8007341C(void*);
s32 TWindowSubComCard__sub_80073DB8(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

extern u32 lbl_805D55E4;

void handle_com_card__6TLobbyFv(void) {
    s32 temp_r3;

    if ((u32) lbl_805D55E4 != 0U) {
        if (TWindowSubComCard__sub_8007341C((void*)lbl_805D55E4) != 0) {
            TLobby__sub_80139860();
            temp_r3 = TWindowSubComCard__sub_80265BF8(lbl_805D55E4);
            switch (temp_r3) {
            case 0:
                return_to_main_menu__6TLobbyFv();
                return;
            case 1:
                close_menu_windows__6TLobbyFv();
                return;
            }
        } else if (TWindowSubComCard__sub_80073DB8(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
