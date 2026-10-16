#include "types.h"
#include "pso/misc/TWindowSubShortMail.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowSubTradeMain.h"

extern "C" {

s32 window_request_show(void * a0 = 0);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);

void TWindowSubShortMail__sub_80131998(void *arg0) {
    u16 temp_r3;

    temp_r3 = *(u16 *)((s8 *)arg0 + 0x1C);
    if (!(temp_r3 & 4)) {
        *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (temp_r3 | 4);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
            set_flag60_bit200__16TKeyBoardControlFPv(*(void **)((s8 *)arg0 + 0x24));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            ((TWindowSubTradeMain *)(*(void **)((s8 *)arg0 + 0x28)))->request_close();
        }
    }
}
void TWindowSubShortMail::hide_window() {
    u16 temp_r3;

    temp_r3 = *(u16 *)((s8 *)this + 0x1C);
    if (temp_r3 & 4) {
        *(u16 *)((s8 *)this + 0x1C) = (u16) (temp_r3 & 0xFFFFFFFB);
        if ((u32) *(u32 *)((s8 *)this + 0x24) != 0U) {
            clear_flag60_bit200__16TKeyBoardControlFPv(*(void **)((s8 *)this + 0x24));
        }
        if (!(*(u16 *)((s8 *)this + 0x1C) & 1) && ((u32) *(u32 *)((s8 *)this + 0x28) != 0U)) {
            window_request_show(*(void **)((s8 *)this + 0x28));
        }
    }
}

}
