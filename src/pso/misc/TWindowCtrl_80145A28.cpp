#include "types.h"

extern "C" {

s32 get_field24__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

s32 get_field24__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return -0x1600;
    }
    return *(s32 *)((s8 *)TWindowCtrl__active_window + 0x24);
}

}
