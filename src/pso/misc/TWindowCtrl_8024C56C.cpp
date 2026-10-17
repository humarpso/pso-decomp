#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

void TWindowMainMenu__sub_8024E3D0(void);
void TLobby__sub_8026ACDC(void);

extern s32 TWindowCtrl__active_window;

void TWindowCtrl::close() {
    TWindowMainMenu__sub_8024E3D0();
    TLobby__sub_8026ACDC();
    TWindowCtrl__active_window = 0;
}

}
