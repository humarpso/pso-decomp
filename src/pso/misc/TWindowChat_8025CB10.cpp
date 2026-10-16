#include "types.h"
#include "pso/misc/TWindowKeyBoardBase.h"
#include "pso/misc/TWindowChat.h"
#include "pso/misc/TWindowKeyBoardSoft.h"

extern "C" {

bool TWindowKeyBoardBase::sub_8025CB10() {
    u8 *arg0 = (u8 *)this;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        return 1;
    }
    return *(s32 *)((s8 *)arg0 + 0x94) != 0;
}

void TWindowChat::flush_if_flagged() { if (get_flag() != 0) { reset_input(); } }

}
