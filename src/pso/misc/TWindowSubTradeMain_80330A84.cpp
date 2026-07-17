#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 refresh_item_list__19TWindowSubTradeMainFPvPv(u32, s32);
s32 TLobby__sub_802D29AC();
s32 set_trade_state__19TWindowSubTradeMainFPvs(u32, s32);
s32 TLobby__sub_802D299C();
void TWindowSubTradeMain__sub_80330A84(void* p);

void TWindowSubTradeMain__sub_80330A84(void* p) { *(u8*)((char*)p + 0x1c) = 30; }
void forward_to_child__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x40);
    if (temp != 0U) {
        set_trade_state__19TWindowSubTradeMainFPvs(temp, (s16) arg1);
    }
}
void notify_child_if_present__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    u32 temp = M2C_FIELD(arg0, u32 *, 0x3C);
    if (temp != 0U) {
        set_trade_state__19TWindowSubTradeMainFPvs(temp, (s16) arg1);
    }
}
void draw_item_slot__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        refresh_item_list__19TWindowSubTradeMainFPvPv(M2C_FIELD(arg0, u32 *, 0x40), TLobby__sub_802D29AC());
    }
}
void update_trade_window__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        refresh_item_list__19TWindowSubTradeMainFPvPv(M2C_FIELD(arg0, u32 *, 0x3C), TLobby__sub_802D299C());
        set_trade_state__19TWindowSubTradeMainFPvs(M2C_FIELD(arg0, u32 *, 0x3C), 3);
    }
}

}
