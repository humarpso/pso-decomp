#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TItemEffPG__sub_8034FE6C(void *arg0, void *arg1, void *arg2);
void *TItemEffPG__sub_8034FE28(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TItemEffPG__sub_8034FE6C(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        TItemEffPG__sub_8034FE28(o, arg0, arg1, arg2);
    }
}

}
