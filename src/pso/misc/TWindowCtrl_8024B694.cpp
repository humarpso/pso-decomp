#include "types.h"

extern "C" {

void set_window_flags_off__11TWindowCtrlFPvi(void *arg0, s32 arg1);
s32 set_window_flags__11TWindowCtrlFPvii(void *, s32, s32);

void set_window_flags_off__11TWindowCtrlFPvi(void *arg0, s32 arg1) {
    set_window_flags__11TWindowCtrlFPvii(arg0, arg1, 0);
}

}
