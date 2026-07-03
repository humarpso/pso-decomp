#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TItemReverseTechPart1__ct(void *, void *, void *);
extern void *lbl_805D54D0;

void *TItemReverseTech__ct(void *arg0) {
    void *o = __nw__7TObjectFUl(0x34);
    if (o != NULL) {
        TItemReverseTechPart1__ct(o, arg0, lbl_805D54D0);
    }
    return o;
}

}
