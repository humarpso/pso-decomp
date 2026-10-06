#include "pso/TItemReverseTechCtrl.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__20TItemReverseTechCtrlFPv(void *arg0);
void *__ct__20TItemReverseTechCtrlFv(void *, void *);
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

void *create__20TItemReverseTechCtrlFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = __ct__20TItemReverseTechCtrlFv(o, arg0);
    }
    return o;
}
TItemReverseTechCtrl::~TItemReverseTechCtrl() {}

}
