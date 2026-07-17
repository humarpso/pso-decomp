#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_scroll__6TLobbyFPv(u8 *arg0);
void TLobby__sub_803CE544(u32 arg0, s32 arg1);
M2C_UNK set_scroll_position__6TLobbyFPvi(int, void *);
M2C_UNK TLobby__sub_803C8A14(int);
M2C_UNK set_scroll_offset__6TLobbyFPvi(int, int);
M2C_UNK TLobby__sub_803CE198(int, int, void *, void *);
s32 TLobby__sub_803CE1D0(int);
M2C_UNK TLobby__sub_803CE200();
M2C_UNK TLobby__sub_803CE220();

void update_scroll__6TLobbyFPv(u8 *arg0) {
    s32 spC;
    s32 sp8;

    M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1B0) + 1);
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1A8) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) >= (s32) M2C_FIELD(arg0, s32 *, 0x1BC))) {
        M2C_FIELD(arg0, s32 *, 0x1B0) = (s32) M2C_FIELD(arg0, s32 *, 0x1B8);
    }
    if (((s32) M2C_FIELD(arg0, u8 *, 0x1A9) == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B0) < TLobby__sub_803CE1D0((int) (M2C_FIELD(arg0, s32 *, 4))))) {
        TLobby__sub_803CE220();
        TLobby__sub_803CE198((int) (M2C_FIELD(arg0, s32 *, 4)), (int) (M2C_FIELD(arg0, s32 *, 0x1B0)), (void *) (&spC), (void *) (&sp8));
        set_scroll_offset__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 8)), (int) (spC / 2048));
        set_scroll_position__6TLobbyFPvi((int) (M2C_FIELD(arg0, s32 *, 8)), (void *) ((s32) (spC + sp8) / 2048));
        TLobby__sub_803C8A14((int) (M2C_FIELD(arg0, s32 *, 8)));
        TLobby__sub_803CE200();
    }
}

extern u32 lbl_805D75F8;
extern s32 lbl_805D75FC;

void TLobby__sub_803CE544(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        lbl_805D75F8 = 0U;
        lbl_805D75FC = 0;
        return;
    }
    lbl_805D75F8 = arg0;
    lbl_805D75FC = arg1;
}

}
