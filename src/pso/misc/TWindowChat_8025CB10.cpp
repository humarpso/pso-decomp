#include "types.h"
#include "pso/misc/TWindowChat.h"
#include "pso/misc/TWindowKeyBoardSoft.h"

extern "C" {
bool TWindowChat__sub_8025CB10(u8 *arg0);
}

extern "C" {

bool TWindowChat__sub_8025CB10(u8 *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        return 1;
    }
    return *(s32 *)((s8 *)arg0 + 0x94) != 0;
}

void TWindowChat::flush_if_flagged() { if (get_flag() != 0) { reset_input(); } }

}
