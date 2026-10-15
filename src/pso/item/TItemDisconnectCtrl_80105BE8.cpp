#include "types.h"

extern "C" {

void TItemDisconnectCtrl__sub_80105BE8(void);
void init_forward__19TItemDisconnectCtrlFv(void);
s32 init_forward__10TObjPlayerFPv(s32 *);

    extern int lbl_805D54E0;
void TItemDisconnectCtrl__sub_80105BE8(void) { lbl_805D54E0 = 0; }

extern s32 lbl_805D5440;

void init_forward__19TItemDisconnectCtrlFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D5440);
}

}

__declspec(section ".ctors") static void *const __sinit_TItemDisconnectCtrl_80105BE8_cpp_ref = (void *)init_forward__19TItemDisconnectCtrlFv;
