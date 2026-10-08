#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void return_to_main_menu__6TLobbyFv(void);
void open_ship_block_select_menu__6TLobbyFiPvPv();
M2C_UNK show_seq_phase_message__6TLobbyFi(M2C_UNK);
M2C_UNK TWindow__close(u32);
M2C_UNK fn_801DB7EC(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern u32 TLobby__data_805D55C8;
extern u32 TLobby__data_805D55CC;
extern u32 TLobby__data_805D55D0;
extern u32 lbl_805D55E0;
extern u32 lbl_805D55E4;

void return_to_main_menu__6TLobbyFv(void) {
    u32 t;

    show_seq_phase_message__6TLobbyFi(6);
    t = lbl_805D55E0;
    if (t != 0U) {
        TWindow__close(t);
        lbl_805D55E0 = 0U;
    }
    t = lbl_805D55E4;
    if (t != 0U) {
        TWindow__close(t);
        lbl_805D55E4 = 0U;
    }
    t = TLobby__data_805D55CC;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55CC = 0U;
    }
    t = TLobby__data_805D55C8;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55C8 = 0U;
    }
    t = TLobby__data_805D55D0;
    if (t != 0U) {
        TWindow__close(t);
        TLobby__data_805D55D0 = 0U;
    }
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)&open_ship_block_select_menu__6TLobbyFiPvPv;
    fn_801DB7EC(TLobby__data_805D5580);
    TLobby__data_805D5594 = 7;
}

}
