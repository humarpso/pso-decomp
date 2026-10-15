#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

s32 set_window_flags__11TWindowCtrlFPvll(void *, s32, s32);

void TWindowCtrl::set_window_flags_off(s32 arg1) {
    set_window_flags__11TWindowCtrlFPvll(this, arg1, 0);
}

}
