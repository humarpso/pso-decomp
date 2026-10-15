#include "types.h"

extern "C" {

s32 window_request_show(void * a0 = 0);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
s32 request_close__19TWindowSubTradeMainFPv(void *);
int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
int set_field_1c__6TLobbyFPvf(void*);

void TWindowSubShortMail__sub_80131998(void *arg0) {
    u16 temp_r3;

    temp_r3 = *(u16 *)((s8 *)arg0 + 0x1C);
    if (!(temp_r3 & 4)) {
        *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (temp_r3 | 4);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
            set_flag60_bit200__16TKeyBoardControlFPv(*(void **)((s8 *)arg0 + 0x24));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U) {
            request_close__19TWindowSubTradeMainFPv(*(void **)((s8 *)arg0 + 0x28));
        }
    }
}
void hide_window__19TWindowSubShortMailFPv(void *arg0) {
    u16 temp_r3;

    temp_r3 = *(u16 *)((s8 *)arg0 + 0x1C);
    if (temp_r3 & 4) {
        *(u16 *)((s8 *)arg0 + 0x1C) = (u16) (temp_r3 & 0xFFFFFFFB);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) {
            clear_flag60_bit200__16TKeyBoardControlFPv(*(void **)((s8 *)arg0 + 0x24));
        }
        if (!(*(u16 *)((s8 *)arg0 + 0x1C) & 1) && ((u32) *(u32 *)((s8 *)arg0 + 0x28) != 0U)) {
            window_request_show(*(void **)((s8 *)arg0 + 0x28));
        }
    }
}

}
