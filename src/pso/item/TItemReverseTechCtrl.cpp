#include "types.h"

extern "C" {

void *__ct__20TItemReverseTechCtrlFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);

extern s32 __vt__20TItemReverseTechCtrl[];
extern void *lbl_805D2C58;

void *__ct__20TItemReverseTechCtrlFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TItemReverseTechCtrl;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2C58;
    disallow_rendering__7TObjectFv(arg0);
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

}

#define __ct__20TItemReverseTechCtrlFv (*(void * (*)(void *, void *))&__ct__20TItemReverseTechCtrlFv)

#include "pso/TItemReverseTechCtrl.h"

#include "types.h"

extern "C" {

void *__nw__7TObjectFUl(int);

extern "C" void TItemReverseTech__sub_8011A55C();
extern "C" void TItemReverseTech__sub_8011A580();
extern "C" void TItemReverseTech__sub_8011A5A4();
extern void *lbl_804A0440[3];
extern void *lbl_804A044C[3];
extern void *lbl_804A0458[4];
void *lbl_804A0440[3] = {
    (void *)0x14110004, (void *)0xd03080d, (void *)0x6000000,
};
void *lbl_804A044C[3] = {
    (void *)0x618000a, (void *)0x140a0008, (void *)0x13040d00,
};
void *lbl_804A0458[4] = {
    (void *)0xa0e1412, (void *)0xe0a140a, (void *)0x81304, (void *)0xd000000,
};
void *lbl_804A0468[9] = {
    (void *)&lbl_804A0440, (void *)0x9, (void *)&TItemReverseTech__sub_8011A5A4, (void *)&lbl_804A044C,
    (void *)0xb, (void *)&TItemReverseTech__sub_8011A580, (void *)&lbl_804A0458, (void *)0xd,
    (void *)&TItemReverseTech__sub_8011A55C,
};

void *TItemReverseTechCtrl::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = __ct__20TItemReverseTechCtrlFv(o, arg0);
    }
    return o;
}
TItemReverseTechCtrl::~TItemReverseTechCtrl() {}

}

#undef __ct__20TItemReverseTechCtrlFv
