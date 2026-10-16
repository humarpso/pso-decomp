#include "types.h"
#include "pso/misc/TWindowMakeTeam.h"
#include "pso/misc/TWindowSubTradeMain.h"

extern "C" {

s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
int set_field_1c__6TLobbyFf(void*);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
s32 window_request_show(void * a0 = 0);

int TWindowMakeTeam::set_keyboard_flag62_bit2() { return set_flag62_bit2__16TKeyBoardControlFPv(*(void**)((char*)this + 0x20)); }

int TWindowMakeTeam::get_lobby_field_20() { return set_field_1c__6TLobbyFf(*(void**)((char*)this + 0x20)); }

}
