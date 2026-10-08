#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemDisconnectCtrl__sub_80105BE8(void);
void init_forward__19TItemDisconnectCtrlFv(void);
M2C_UNK init_forward__10TObjPlayerFPv(M2C_UNK *);

    extern int lbl_805D54E0;
void TItemDisconnectCtrl__sub_80105BE8(void) { lbl_805D54E0 = 0; }

extern M2C_UNK lbl_805D5440;

void init_forward__19TItemDisconnectCtrlFv(void) {
    init_forward__10TObjPlayerFPv(&lbl_805D5440);
}

}

__declspec(section ".ctors") static void *const __sinit_TItemDisconnectCtrl_80105BE8_cpp_ref = (void *)init_forward__19TItemDisconnectCtrlFv;
