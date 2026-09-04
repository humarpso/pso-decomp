#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemDisconnectCtrl.h"

void TItemDisconnectCtrl::run_task() {}

TItemDisconnectCtrl::~TItemDisconnectCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x80105BE8
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
#endif
#if PSO_CLASS_PACKAGE == 0x80105CBC
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
#endif
#endif
