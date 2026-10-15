#include "types.h"

extern "C" {

s32 get_window__11TWindowCtrlFi(s32 arg0);

extern s8 *TWindowCtrl__active_window;

s32 get_window__11TWindowCtrlFi(s32 arg0) {
    if (TWindowCtrl__active_window == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0xC) {
        return 0;
    }
    return ((s32 *)(TWindowCtrl__active_window + 0x48))[arg0];
}

}
