#include "types.h"

extern "C" {

int TWindowChat__sub_8025CB10(void);
void flush_if_flagged__11TWindowChatFPv(void* p);
int TWindowChat__sub_8025CB70(void* a0 = 0);
int get_flag__11TWindowChatFPv(void* a0 = 0);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

int TWindowChat__sub_8025CB10(void) { return 0; }

void flush_if_flagged__11TWindowChatFPv(void* p) { if (get_flag__11TWindowChatFPv(p) != 0) { TWindowChat__sub_8025CB70(p); } }

}
