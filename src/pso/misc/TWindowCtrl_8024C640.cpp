#include "types.h"

extern "C" {

s32 get_flag_bit4__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

s32 get_flag_bit4__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    return ((u16) *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) >> 4U) & 1;
}

}
