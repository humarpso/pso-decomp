#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__5THeapFUl(int);
void *__ct__5THeapFUli(void *, void *, int);

void *fn_800867E4(void *arg0) {
    void *o = __nw__5THeapFUl(0x14);
    if (o != NULL) {
        __ct__5THeapFUli(o, arg0, 16);
    }
    return o;
}

}
