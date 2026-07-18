#include "types.h"

extern "C" {

int get_flag__11TWindowChatFPv(void* a0 = 0);
int TWindowChat__sub_8025CB70(void* a0 = 0);
void flush_if_flagged__11TWindowChatFPv(void* p);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

void flush_if_flagged__11TWindowChatFPv(void* p) { if (get_flag__11TWindowChatFPv(p) != 0) { TWindowChat__sub_8025CB70(p); } }

}
