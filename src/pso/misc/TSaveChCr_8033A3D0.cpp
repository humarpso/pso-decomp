#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TSaveChCr__sub_8033A3D0(void *arg0);
void *TSaveChCr__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *TSaveChCr__sub_8033A3D0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TSaveChCr__ct(o, tl_03, arg0);
    }
    return o;
}

}
