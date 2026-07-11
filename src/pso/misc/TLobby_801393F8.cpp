#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_menu_window__6TLobbyFv(void);
void handle_warp_menu_input__6TLobbyFv(void);
M2C_UNK open_city_warp_menu__6TLobbyFv();
M2C_UNK close_and_send_text_list__6TLobbyFv();
M2C_UNK open_warp_menu__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFPv();
M2C_UNK open_menu_window__6TLobbyFv();
M2C_UNK request_game_list__6TLobbyFv();
M2C_UNK create_warp_menu__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowSubComCard__sub_8007341C(void*);
s32 TWindowSubComCard__sub_80073DB8(u32);
s32 TWindowSubComCard__sub_80265BF8(void*);

extern u32 lbl_805D55E4;

void update_menu_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)((void*)lbl_805D55E4));
        if (TWindowSubComCard__sub_8007341C((void*)(lbl_805D55E4)) != 0) {
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
        } else if (TWindowSubComCard__sub_80073DB8(lbl_805D55E4) != 0) {
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
        if (TWindowSubComCard__sub_8007341C((void*)((void*)lbl_805D55E0)) != 0) {
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
        } else if (TWindowSubComCard__sub_80073DB8(lbl_805D55E0) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
