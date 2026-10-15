#include "types.h"

extern "C" {

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0);
void close__19TWindowSubTradeMainFPv(void *arg0);
s32 clear_flag70_bit80__19TWindowSubTradeMainFPv(void *);
s32 get_status_flag__6TLobbyFPv();
s32 set_close_flag__19TWindowSubTradeMainFPv(void *);
s32 set_visible__19TWindowSubTradeMainFPv();
s32 clear_flag__19TWindowSubTradeMainFPv(void *);
s32 set_entry_state__20TWindowSubStatusDispFPvc(u32, s32);

void update_trade_state__19TWindowSubTradeMainFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        if (get_status_flag__6TLobbyFPv() != 0) {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(*(u32 *)((s8 *)arg0 + 0x80)), (s32)(2));
        } else {
            set_entry_state__20TWindowSubStatusDispFPvc((u32)(*(u32 *)((s8 *)arg0 + 0x80)), (s32)(1));
        }
    }
    clear_flag70_bit80__19TWindowSubTradeMainFPv(arg0);
    clear_flag__19TWindowSubTradeMainFPv(arg0);
}

void close__19TWindowSubTradeMainFPv(void *arg0) {
    set_visible__19TWindowSubTradeMainFPv();
    set_close_flag__19TWindowSubTradeMainFPv(arg0);
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc((u32)(*(u32 *)((s8 *)arg0 + 0x80)), (s32)(0));
    }
}

}
