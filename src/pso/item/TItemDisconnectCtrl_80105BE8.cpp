#include "types.h"
#include "pso/item/TItemDisconnectCtrl.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TItemDisconnectCtrl__sub_80105BE8(void);

    extern int lbl_805D54E0;
void TItemDisconnectCtrl__sub_80105BE8(void) { lbl_805D54E0 = 0; }

extern s32 lbl_805D5440;

void TItemDisconnectCtrl::init_forward() {
    ((TObjPlayer *)(&lbl_805D5440))->init_forward();
}

}

__declspec(section ".ctors") static void *const __sinit_TItemDisconnectCtrl_80105BE8_cpp_ref = (void *)TItemDisconnectCtrl::init_forward;
