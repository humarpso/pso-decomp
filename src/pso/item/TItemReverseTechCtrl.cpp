#include "types.h"
#include "pso/item/TItemReverseTechCtrl.h"
#include "pso/item/TItemReverseTech_8011A1E8.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/TItemReverseTechCtrl.h"

extern "C" {

void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__20TItemReverseTechCtrl[];
extern void *lbl_805D2C58;

void *__ct__20TItemReverseTechCtrlFv(void *item_reverse_tech_ctrl) {
    __ct__7TObjectFP7TObject(item_reverse_tech_ctrl);
    *(s32 **)((s8 *)item_reverse_tech_ctrl + 0x18) = __vt__20TItemReverseTechCtrl;
    *(void * *)&((TItemReverseTechCtrl *)item_reverse_tech_ctrl)->m_name = lbl_805D2C58;
    disallow_rendering__7TObjectFv((TObject *)item_reverse_tech_ctrl);
    *(u32 *)((s8 *)item_reverse_tech_ctrl + 0x1C) = 0;
    *(u32 *)((s8 *)item_reverse_tech_ctrl + 0x20) = 0;
    *(u32 *)((s8 *)item_reverse_tech_ctrl + 0x24) = 0;
    return item_reverse_tech_ctrl;
}

#define __ct__20TItemReverseTechCtrlFv (*(void * (*)(void *, void *))&__ct__20TItemReverseTechCtrlFv)

void *__nw__7TObjectFUl(int);

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
