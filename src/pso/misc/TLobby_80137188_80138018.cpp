#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_menu_windows__6TLobbyFv(void);
extern void TLobby__sub_8013703C(void);
M2C_UNK TLobby__sub_8013990C(M2C_UNK);
M2C_UNK TWindow__close(s32);
M2C_UNK fn_801DB760(void *);

extern void *TLobby__data_805D5580;
extern s32 TLobby__data_805D5594;
extern s32 lbl_805D55E0;
extern s32 lbl_805D55E4;

void close_menu_windows__6TLobbyFv(void) {
    TLobby__sub_8013990C(6);
    TWindow__close(lbl_805D55E0);
    lbl_805D55E0 = 0;
    TWindow__close(lbl_805D55E4);
    lbl_805D55E4 = 0;
    M2C_FIELD(TLobby__data_805D5580, void **, 0xBBE4) = (void *)TLobby__sub_8013703C;
    fn_801DB760(TLobby__data_805D5580);
    TLobby__data_805D5594 = 8;
}

}
