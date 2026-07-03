#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_05;
void *__nw__7TObjectFUl(int);
void *fn_800D79A8(void *, void *, void *, void *);

void * fn_800D8A78(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x128);
    if (o != NULL) {
        o = fn_800D79A8(o, tl_05, arg0, arg1);
    }
    return o;
}

}
