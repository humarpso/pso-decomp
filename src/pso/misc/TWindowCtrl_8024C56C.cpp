#include "types.h"

extern "C" {

void close__11TWindowCtrlFv(void);
s32 TWindowMainMenu__sub_8024E3D0();
s32 TLobby__sub_8026ACDC();

extern s32 TWindowCtrl__active_window;

void close__11TWindowCtrlFv(void) {
    TWindowMainMenu__sub_8024E3D0();
    TLobby__sub_8026ACDC();
    TWindowCtrl__active_window = 0;
}

}
