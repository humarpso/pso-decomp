#include "types.h"
#include "pso/misc/TWindowSubTradeMain.h"

extern "C" {

s32 clear_flag70_bit80__19TWindowSubTradeMainFv(void *);
s32 get_status_flag__6TLobbyFv();
s32 set_close_flag__19TWindowSubTradeMainFv(void *);
s32 set_visible__19TWindowSubTradeMainFv();
s32 clear_flag__19TWindowSubTradeMainFv(void *);
s32 set_entry_state__20TWindowSubStatusDispFSc(u32, s32);

void TWindowSubTradeMain::update_trade_state() {
    if ((u32) *(u32 *)((s8 *)this + 0x80) != 0U) {
        if (get_status_flag__6TLobbyFv() != 0) {
            set_entry_state__20TWindowSubStatusDispFSc((u32)(*(u32 *)((s8 *)this + 0x80)), (s32)(2));
        } else {
            set_entry_state__20TWindowSubStatusDispFSc((u32)(*(u32 *)((s8 *)this + 0x80)), (s32)(1));
        }
    }
    clear_flag70_bit80__19TWindowSubTradeMainFv(this);
    clear_flag__19TWindowSubTradeMainFv(this);
}

void TWindowSubTradeMain::close() {
    set_visible__19TWindowSubTradeMainFv();
    set_close_flag__19TWindowSubTradeMainFv(this);
    if ((u32) *(u32 *)((s8 *)this + 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFSc((u32)(*(u32 *)((s8 *)this + 0x80)), (s32)(0));
    }
}

}
