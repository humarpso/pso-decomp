#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802D2870_TLobby__data_80540BD0
{
  M2C_UNK value;
  u8 remaining[0x3DC];
};

extern "C" {
void set_trade_field_4__6TLobbyFii(s32, s32);
M2C_UNK TLobby__sub_802D1F30(void *, void *);
extern M2C_UNK TLobby__trade_window_state[];
extern s32 lbl_805D53A0;
extern u8 TLobby__data_805D688A;
extern s32 TLobby__data_805D688C;
void TWindowSubTradeMain__sub_802D2870(void);
extern u16 lbl_805D6888;
s32 TWindowSubTradeMain__sub_802D2808(void);
}

extern "C" {

void TWindowSubTradeMain__sub_802D2824(void);
void TWindowSubTradeMain__sub_802D2834(void);
s32 TWindowSubTradeMain__sub_802D2844(void);
void TWindowSubTradeMain__sub_802D2850(void);
void TWindowSubTradeMain__sub_802D2860(void);
void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1);
void transfer_trade_item_amount__6TLobbyFPvUii(void *, void *, void *);
void move_trade_item_amount__6TLobbyFPvUii(void *, void *, void *);
void send_modify_trade_proposal__6TLobbyFcii(int, void *, void *);
void draw_item_slot__19TWindowSubTradeMainFPv(void *);

extern u16 lbl_805D6888;

s32 TWindowSubTradeMain__sub_802D2808(void) {
    u16 v = lbl_805D6888;
    if (!(v & 0x20)) {
        return 0;
    }
    return (v & 0x40) ? 1 : 0;
}

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

extern M2C_UNK TLobby__trade_window_state[];
extern void *TLobby__data_805D6898;

typedef struct RecoveredGlobal_802D2870_TLobby__data_80540BD0 RecoveredGlobal_802D2870_TLobby__data_80540BD0;
typedef char RecoveredGlobal_802D2870_TLobby__data_80540BD0_size[((sizeof(RecoveredGlobal_802D2870_TLobby__data_80540BD0)) == 0x3E0) ? (1) : (-1)];
void TWindowSubTradeMain__sub_802D2870(void) {
  M2C_UNK *temp_r31;
  TLobby__sub_802D1F30((void *) (&(*(RecoveredGlobal_802D2870_TLobby__data_80540BD0 *)&TLobby__trade_window_state).value), (void *) lbl_805D53A0);
  temp_r31 = (M2C_UNK *) ((u8 *) ((M2C_UNK *) (((u8 *) (&(*(RecoveredGlobal_802D2870_TLobby__data_80540BD0 *)&TLobby__trade_window_state).value)) + 0x1F0)));
  TLobby__sub_802D1F30((void *) temp_r31, (void *) ((s32) ((s8) (TLobby__data_805D688A & 0xFFFFFFFFFFFFFFFFu))));
  set_trade_field_4__6TLobbyFii((s32) temp_r31, TLobby__data_805D688C);
}

void draw_offer__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    send_modify_trade_proposal__6TLobbyFcii(2, arg0, arg1);
    transfer_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state, arg0, arg1);
    if (TLobby__data_805D6898 != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
    }
}

extern M2C_UNK TLobby__trade_window_state[];
extern void *TLobby__data_805D6898;

void draw_request__19TWindowSubTradeMainFPvPv(void *arg0, void *arg1) {
    send_modify_trade_proposal__6TLobbyFcii(1, arg0, arg1);
    move_trade_item_amount__6TLobbyFPvUii(TLobby__trade_window_state, arg0, arg1);
    if (TLobby__data_805D6898 != NULL) {
        draw_item_slot__19TWindowSubTradeMainFPv(TLobby__data_805D6898);
    }
}

}
