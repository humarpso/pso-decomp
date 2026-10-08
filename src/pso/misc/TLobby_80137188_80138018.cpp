#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_menu_windows__6TLobbyFv(void);
extern void open_ship_block_select_menu__6TLobbyFiPvPv(void);
M2C_UNK show_seq_phase_message__6TLobbyFi(M2C_UNK);
M2C_UNK TWindow__close(s32);
M2C_UNK fn_801DB760(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void close_menu_windows__6TLobbyFv(void) {
    show_seq_phase_message__6TLobbyFi(6);
    TWindow__close(lbl_805D55E0);
    lbl_805D55E0 = 0;
    TWindow__close(lbl_805D55E4);
    lbl_805D55E4 = 0;
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)open_ship_block_select_menu__6TLobbyFiPvPv;
    fn_801DB760(TLobby__data_805D5580);
    TLobby__data_805D5594 = 8;
}

}
