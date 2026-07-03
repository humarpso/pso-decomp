#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *fn_8029F4C4(void *, void *);
extern void *tl_particlemodel;

void *fn_80299D68(void) {
    void *o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        fn_8029F4C4(o, tl_particlemodel);
    }
    return o;
}

}
