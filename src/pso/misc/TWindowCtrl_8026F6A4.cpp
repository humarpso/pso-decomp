#include "types.h"

extern "C" {

void set_flag_active__11TWindowCtrlFv(void);
void clear_flag_8__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

void set_flag_active__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) = (u16) (*(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) | 8);
    }
}

extern void *TWindowCtrl__active_window;

void clear_flag_8__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) = (u16) (*(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) & 0xFFFFFFF7);
    }
}

}
