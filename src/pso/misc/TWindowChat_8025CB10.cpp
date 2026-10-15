#include "types.h"
#include "pso/misc/TWindowChat.h"

extern "C" {
bool TWindowChat__sub_8025CB10(u8 *arg0);
}

extern "C" {

int reset_input__11TWindowChatFv(void* a0 = 0);
int get_flag__11TWindowChatFv(void* a0 = 0);
int is_key_state_2__19TWindowKeyBoardSoftFv(void* p);

bool TWindowChat__sub_8025CB10(u8 *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        return 1;
    }
    return *(s32 *)((s8 *)arg0 + 0x94) != 0;
}

void TWindowChat::flush_if_flagged() { if (get_flag__11TWindowChatFv(this) != 0) { reset_input__11TWindowChatFv(this); } }

}
