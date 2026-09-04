#include "pso/TItemDisconnectCtrl.h"

void TItemDisconnectCtrl::run_task() {}

TItemDisconnectCtrl::~TItemDisconnectCtrl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemDisconnectCtrl__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
void disallow_rendering__7TObjectFv(void *);

extern void *tl_05;
extern M2C_UNK __vt__19TItemDisconnectCtrl[];
extern void *lbl_805D2B70;

void *TItemDisconnectCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0, tl_05);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TItemDisconnectCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2B70;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
