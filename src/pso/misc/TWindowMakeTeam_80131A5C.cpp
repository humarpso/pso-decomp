#include "types.h"

extern "C" {

int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
s32 request_close__19TWindowSubTradeMainFPv(void *);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
int set_field_1c__6TLobbyFPvf(void*);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
s32 window_request_show(void * a0 = 0);

int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p) { return set_flag62_bit2__16TKeyBoardControlFPv(*(void**)((char*)p + 0x20)); }

int get_lobby_field_20__15TWindowMakeTeamFPv(void* p) { return set_field_1c__6TLobbyFPvf(*(void**)((char*)p + 0x20)); }

}
