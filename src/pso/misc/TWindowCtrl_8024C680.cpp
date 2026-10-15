#include "types.h"

extern "C" {

s32 get_display_flag__11TWindowCtrlFv(void);

s32 is_split_screen();
extern void *TWindowCtrl__active_window;

s32 get_display_flag__11TWindowCtrlFv(void) {
    if (is_split_screen() != 0) {
        return 0;
    }
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    return ((u16) *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) >> 1U) & 1;
}

}
