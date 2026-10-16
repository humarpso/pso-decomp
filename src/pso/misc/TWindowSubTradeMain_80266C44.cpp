#include "types.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 get_status_flag__6TLobbyFv();
s32 set_visible__19TWindowSubTradeMainFv();

void TWindowSubTradeMain::update_trade_state() {
    if ((u32) *(u32 *)((s8 *)this + 0x80) != 0U) {
        if (get_status_flag__6TLobbyFv() != 0) {
            ((TWindowSubStatusDisp *)(*(u32 *)((s8 *)this + 0x80)))->set_entry_state((s32)(2));
        } else {
            ((TWindowSubStatusDisp *)(*(u32 *)((s8 *)this + 0x80)))->set_entry_state((s32)(1));
        }
    }
    clear_flag70_bit80();
    clear_flag();
}

void TWindowSubTradeMain::close() {
    set_visible__19TWindowSubTradeMainFv();
    set_close_flag();
    if ((u32) *(u32 *)((s8 *)this + 0x80) != 0U) {
        ((TWindowSubStatusDisp *)(*(u32 *)((s8 *)this + 0x80)))->set_entry_state((s32)(0));
    }
}

}
