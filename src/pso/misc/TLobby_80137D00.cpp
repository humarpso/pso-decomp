#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_com_card_window__6TLobbyFv(void);
M2C_UNK close_all_windows__6TLobbyFv();
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(void*);
M2C_UNK fn_801DB0AC(s32, s32);

extern s32 TLobby__data_805D5580;
extern u32 lbl_805D55E4;

void update_com_card_window__6TLobbyFv(void) {
    s32 temp_r31;

    if ((u32) lbl_805D55E4 != 0U) {
        temp_r31 = TWindowSubComCard__sub_80265BF8((void*)lbl_805D55E4);
        if (is_visible__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            fn_801DB0AC(TLobby__data_805D5580, temp_r31);
            close_all_windows__6TLobbyFv();
            return;
        }
        if (get_status_flag__17TWindowSubComCardFPv(lbl_805D55E4) != 0) {
            close_all_windows__6TLobbyFv();
        }
    } else {
        close_all_windows__6TLobbyFv();
    }
}

}
