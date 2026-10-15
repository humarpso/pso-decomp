#include "types.h"

extern "C" {

void set_window_flags__11TWindowCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
u32 get_window__11TWindowCtrlFi();
s32 update_child_2c__15TWindowCtrlMainFPv(u32, s32, s32);

void set_window_flags__11TWindowCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;

    temp_r3 = get_window__11TWindowCtrlFi();
    if (temp_r3 != 0U) {
        update_child_2c__15TWindowCtrlMainFPv(temp_r3, arg1, arg2 | 0xE);
    }
}

}
