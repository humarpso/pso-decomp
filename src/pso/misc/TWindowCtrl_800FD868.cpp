#include "types.h"

extern "C" {

void clear_flag_2__11TWindowCtrlFv(void);
void set_close_flag__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

void clear_flag_2__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) = (u16) (*(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) & 0xFFFFFFFD);
    }
}

extern void *TWindowCtrl__active_window;

void set_close_flag__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) = (u16) (*(u16 *)((s8 *)TWindowCtrl__active_window + 0x1C) | 2);
    }
}

}
