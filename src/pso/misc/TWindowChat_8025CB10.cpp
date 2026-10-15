#include "types.h"

extern "C" {
bool TWindowChat__sub_8025CB10(u8 *arg0);
}

extern "C" {

void flush_if_flagged__11TWindowChatFPv(void* p);
int reset_input__11TWindowChatFPv(void* a0 = 0);
int get_flag__11TWindowChatFPv(void* a0 = 0);
int is_key_state_2__19TWindowKeyBoardSoftFPv(void* p);

bool TWindowChat__sub_8025CB10(u8 *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        return 1;
    }
    return *(s32 *)((s8 *)arg0 + 0x94) != 0;
}

void flush_if_flagged__11TWindowChatFPv(void* p) { if (get_flag__11TWindowChatFPv(p) != 0) { reset_input__11TWindowChatFPv(p); } }

}
