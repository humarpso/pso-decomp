#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TWindowComCard__sub_802499E4(void *arg0, void *arg1);
void *TWindowComCard__ct(void *, void *, void *);
void *TWindowSubComCard__sub_8007A8F8(void *);
void *__nw__7TObjectFUl(int);

void * TWindowComCard__sub_802499E4(void *arg0, void *arg1) {
    void *x0;
    void *o;
    x0 = TWindowSubComCard__sub_8007A8F8(arg1);
    if (x0 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x60);
    if (o != NULL) {
        o = TWindowComCard__ct(o, arg0, x0);
    }
    return o;
}

}
