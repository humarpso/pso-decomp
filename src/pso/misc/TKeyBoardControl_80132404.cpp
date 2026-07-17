#include "types.h"

extern "C" {

u8 get_key_state_2__16TKeyBoardControlFPv(void* p);
u8 get_key_state__16TKeyBoardControlFPv(void* p);

u8 get_key_state__16TKeyBoardControlFPv(void* p) { return *(u8*)((char*)p + 0x1); }

}
