#ifndef PSO_CLASS_PACKAGE
#include "pso/TMapCsnCtrl.h"

TMapCsnCtrl::~TMapCsnCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x80140FA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TMapCsnCtrl__ct(void *arg0);
void TMapCsnCtrl__sub_80140F44(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__11TMapCsnCtrl[];
extern void *lbl_805D33C0;

void *TMapCsnCtrl__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TMapCsnCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D33C0;
    TMapCsnCtrl__sub_80140F44(arg0);
    return arg0;
}

}
#endif
#endif
