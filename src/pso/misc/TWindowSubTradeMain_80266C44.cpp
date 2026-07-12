#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0);
void close__19TWindowSubTradeMainFPv(void *arg0);
M2C_UNK clear_flag70_bit80__19TWindowSubTradeMainFPv(void *);
s32 TLobby__sub_8013AD38();
M2C_UNK TWindowSubTradeMain__sub_80187D24(void *);
M2C_UNK TWindowSubTradeMain__sub_80187D34();
M2C_UNK TWindowSubTradeMain__sub_80268468(void *);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(u32, M2C_UNK);

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        if (TLobby__sub_8013AD38() != 0) {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(2));
        } else {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(1));
        }
    }
    clear_flag70_bit80__19TWindowSubTradeMainFPv(arg0);
    TWindowSubTradeMain__sub_80268468(arg0);
}

void close__19TWindowSubTradeMainFPv(void *arg0) {
    TWindowSubTradeMain__sub_80187D34();
    TWindowSubTradeMain__sub_80187D24(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(0));
    }
}

}
