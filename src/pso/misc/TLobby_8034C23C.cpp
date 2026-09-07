#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubComCard__sub_80225E80(void *, int);
M2C_UNK strncpy(int, int, int);
extern s32 lbl_805D6E98;
void TLobby__sub_8034C304(s32 arg0);
extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;
void reset_info_board__6TLobbyFv(void);
}

extern "C" {

void init_once_data__6TLobbyFUi(u32 arg0);
void flush_pending_send__6TLobbyFv(void);
s32 get_card_window_field__6TLobbyFv(void);
M2C_UNK TLobby__sub_801DA548(u32, s32);
M2C_UNK send_info_board_request__9TProtocolFv(u32);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);

extern u32 TLobby__data_805D5580;
extern s32 lbl_805D6E98;
extern u32 lbl_805D6E9C;

void init_once_data__6TLobbyFUi(u32 arg0) {
    if ((u32) lbl_805D6E9C == 0U) {
        lbl_805D6E9C = arg0;
        lbl_805D6E98 &= 0xFFFFFFFD;
        if ((u32) TLobby__data_805D5580 != 0U) {
            send_info_board_request__9TProtocolFv(TLobby__data_805D5580);
        }
    }
}

extern u32 TLobby__data_805D5580;
extern s32 lbl_805D6E98;

void flush_pending_send__6TLobbyFv(void) {
    if (lbl_805D6E98 & 1) {
        if ((u32) TLobby__data_805D5580 != 0U) {
            TLobby__sub_801DA548(TLobby__data_805D5580, get_card_window_field__6TLobbyFv());
        }
        lbl_805D6E98 &= 0xFFFFFFFE;
    }
}

s32 get_card_window_field__6TLobbyFv(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x20FC;
}
void TLobby__sub_8034C304(s32 arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(get_card_window__17TWindowSubComCardFUi((M2C_UNK)(0xFFFFU)) + 0x20FC);
    TWindowSubComCard__sub_80225E80((void *) (arg0), (int) (TLobby__sub_8001DC24()));
    strncpy((int) (temp_r31), (int) (TLobby__sub_8001DC24()), (int) (0xAB));
    M2C_FIELD(temp_r31, s8 *, 0xAB) = 0;
    lbl_805D6E98 |= 1;
}
void reset_info_board__6TLobbyFv(void) { (*(int *)&lbl_805D6E98) = 0; (*(int *)&lbl_805D6E9C) = 0; }

}
