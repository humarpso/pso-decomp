#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *fn_802C7250(void *, void *, void *);

void *fn_80264124(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        fn_802C7250(o, arg0, M2C_FIELD(arg0, void **, 0x54));
    }
    return o;
}

}
