#include "types.h"

extern "C" {
void fn_8024AADC(s32 arg0, s32 arg1);
u32 get_window__11TWindowCtrlFl(void);
s32 free_member__15TWindowCtrlMainFv(u32 a0 = 0, s32 a1 = 0);
void fn_8024AADC(s32 arg0, s32 arg1) {
    u32 temp_r3 = get_window__11TWindowCtrlFl();
    if (temp_r3 != 0U) {
        free_member__15TWindowCtrlMainFv(temp_r3, arg1);
    }
}

}
