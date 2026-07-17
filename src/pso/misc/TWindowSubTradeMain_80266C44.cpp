#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0);
void close__19TWindowSubTradeMainFPv(void *arg0);
M2C_UNK clear_flag70_bit80__19TWindowSubTradeMainFPv(void *);
s32 get_status_flag__6TLobbyFPv();
M2C_UNK set_close_flag__19TWindowSubTradeMainFPv(void *);
M2C_UNK set_visible__19TWindowSubTradeMainFPv();
M2C_UNK clear_flag__19TWindowSubTradeMainFPv(void *);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(u32, M2C_UNK);

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        if (get_status_flag__6TLobbyFPv() != 0) {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(2));
        } else {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(1));
        }
    }
    clear_flag70_bit80__19TWindowSubTradeMainFPv(arg0);
    clear_flag__19TWindowSubTradeMainFPv(arg0);
}

void close__19TWindowSubTradeMainFPv(void *arg0) {
    set_visible__19TWindowSubTradeMainFPv();
    set_close_flag__19TWindowSubTradeMainFPv(arg0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc((u32)(M2C_FIELD(arg0, u32 *, 0x80)), (M2C_UNK)(0));
    }
}

}
