#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TEffIndirectCtrl__ct(void *, void *, void *);
extern void *tl_01;

void *fn_802A8260(void *arg0) {
    void *o = __nw__7TObjectFUl(0x54);
    if (o != NULL) {
        TEffIndirectCtrl__ct(o, arg0, tl_01);
    }
    return o;
}

}
