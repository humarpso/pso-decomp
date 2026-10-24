#include "types.h"
#include "pso/item/TItemReverseTechCtrl.h"
#include "pso/item/TItemReverseTech_8011A1E8.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/TItemReverseTechCtrl.h"
#include "pso/misc/TKeyBoardControl.h"

struct ReverseTechCode {
    s8 *keys;
    s32 length;
    void (*activate)(void);
};

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

extern ReverseTechCode lbl_804A0468[3];

void TItemReverseTechCtrl::run_task() {
    s32 letter;
    ReverseTechCode *code;
    s32 *progress;
    s32 key;
    s32 i;
    key = TKeyBoardControl::get_ascii_key();
    if (key >= 'a' && key <= 'z') {
        letter = key - 'a';
    } else if (key >= 'A' && key <= 'Z') {
        letter = key - 'A';
    } else {
        letter = -1;
    }
    if (letter != -1) {
        progress = (s32 *)((u8 *)this + 0x1C);
        code = lbl_804A0468;
        for (i = 0; i != 3; i++, progress++, code++) {
            if (letter == code->keys[*progress]) {
                *progress = *progress + 1;
            } else {
                *progress = 0;
            }
            if (*progress == code->length) {
                code->activate();
                *progress = 0;
            }
        }
    }
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
ReverseTechCode lbl_804A0468[3] = {
    { (s8 *)lbl_804A0440, 9, TItemReverseTech__sub_8011A5A4 },
    { (s8 *)lbl_804A044C, 11, (void (*)(void))TItemReverseTech__sub_8011A580 },
    { (s8 *)lbl_804A0458, 13, (void (*)(void))TItemReverseTech__sub_8011A55C },
};

void *TItemReverseTechCtrl::create(void *item_reverse_tech_ctrl) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = __ct__20TItemReverseTechCtrlFv(o, item_reverse_tech_ctrl);
    }
    return o;
}
TItemReverseTechCtrl::~TItemReverseTechCtrl() {}

}

#undef __ct__20TItemReverseTechCtrlFv
