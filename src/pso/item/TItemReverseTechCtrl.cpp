#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemReverseTechCtrl.h"

TItemReverseTechCtrl::~TItemReverseTechCtrl() {}
#else
#if PSO_CLASS_PACKAGE == 0x8011A684
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__20TItemReverseTechCtrlFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);

extern M2C_UNK __vt__20TItemReverseTechCtrl[];
extern void *lbl_805D2C58;

void *__ct__20TItemReverseTechCtrlFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TItemReverseTechCtrl;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C58;
    disallow_rendering__7TObjectFv(arg0);
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011A6E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__20TItemReverseTechCtrlFPv(void *arg0);
void *__ct__20TItemReverseTechCtrlFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__20TItemReverseTechCtrlFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = __ct__20TItemReverseTechCtrlFv(o, arg0);
    }
    return o;
}

}
#endif
#endif
