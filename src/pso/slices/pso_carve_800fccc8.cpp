#include "types.h"

extern "C" {

s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);
s32 fn_800FCCF4(void* p);

void fn_800FCCC8(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0xD, 0xFFFF1FFF);
}
s32 fn_800FCCF4(void* p) { return *(s32*)((char*)p + 0x874); }

}
