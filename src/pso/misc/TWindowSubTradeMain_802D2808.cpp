#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubTradeMain__sub_802D2824(void);
void TWindowSubTradeMain__sub_802D2834(void);
s32 TWindowSubTradeMain__sub_802D2844(void);
void TWindowSubTradeMain__sub_802D2850(void);
void TWindowSubTradeMain__sub_802D2860(void);
void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void TLobby__sub_802D1DE4(void *, void *, void *);
void TLobby__sub_802D1E64(void *, void *, void *);
void TLobby__sub_802D3228(int, void *, void *);
void draw_item_slot__19TWindowSubTradeMainFPv(void *);

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2824(void) {
    lbl_805D6888 &= 0xFFFFFF7F;
}

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2834(void) {
    lbl_805D6888 |= 0x80;
}

extern u16 lbl_805D6888;

s32 TWindowSubTradeMain__sub_802D2844(void) {
    return ((u16) lbl_805D6888 >> 4U) & 1;
}

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2850(void) {
    lbl_805D6888 &= 0xFFFFFFEF;
}

extern u16 lbl_805D6888;

void TWindowSubTradeMain__sub_802D2860(void) {
    lbl_805D6888 |= 0x10;
}

extern M2C_UNK TLobby__data_80540BD0[];
extern void *TLobby__data_805D6898;

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    TLobby__sub_802D3228(2, arg0, arg1);
    TLobby__sub_802D1DE4(TLobby__data_80540BD0, arg0, arg1);
    if (TLobby__data_805D6898 != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
    }
}

extern M2C_UNK TLobby__data_80540BD0[];
extern void *TLobby__data_805D6898;

void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    TLobby__sub_802D3228(1, arg0, arg1);
    TLobby__sub_802D1E64(TLobby__data_80540BD0, arg0, arg1);
    if (TLobby__data_805D6898 != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
    }
}

}
