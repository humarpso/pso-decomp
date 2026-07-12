#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TItemTexLoadFPv(void *arg0);
void TItemTexLoad__sub_8011D37C(void);
void *TItemTexLoad__ct(void *, void *);
void *__nw__7TObjectFUl(int);
int free__11TOBoss4RockFUi(void*);

void *create__12TItemTexLoadFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TItemTexLoad__ct(o, arg0);
    }
    return o;
}

    extern int lbl_805D5500;
    extern int lbl_805D5504;
void TItemTexLoad__sub_8011D37C(void) { free__11TOBoss4RockFUi((void*)(lbl_805D5504)); lbl_805D5504 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D5500)); lbl_805D5500 = 0; }

}
