#include "types.h"

extern "C" {

void TWindowCtrl__sub_8026AD60(void);
void TWindowCtrl__sub_8026AD78(s32 arg0);
s32 get_field44__11TWindowCtrlFv(void);

extern void *TWindowCtrl__active_window;

s32 get_field44__11TWindowCtrlFv(void) {
    if ((void *) TWindowCtrl__active_window == NULL) {
        return 0;
    }
    return *(s32 *)((s8 *)TWindowCtrl__active_window + 0x44);
}

extern void *TWindowCtrl__active_window;

void TWindowCtrl__sub_8026AD60(void) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(s32 *)((s8 *)TWindowCtrl__active_window + 0x44) = 0;
    }
}

extern void *TWindowCtrl__active_window;

void TWindowCtrl__sub_8026AD78(s32 arg0) {
    if ((void *) TWindowCtrl__active_window != NULL) {
        *(s32 *)((s8 *)TWindowCtrl__active_window + 0x44) = arg0;
    }
}

}
