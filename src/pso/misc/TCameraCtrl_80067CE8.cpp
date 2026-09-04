#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void *__nw__7TObjectFUl(int);
void *TCameraCtrl__sub_80068018(void *);
}

extern "C" {

void TCameraCtrl__sub_80067CE0(void* p, s32 v);

void * TCameraCtrl__vt7(void) {
    void *o;
    o = __nw__7TObjectFUl(0x74);
    if (o != NULL) {
        o = TCameraCtrl__sub_80068018(o);
    }
    return o;
}

}
