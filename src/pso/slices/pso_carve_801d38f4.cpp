#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_07;
void *__nw__7TObjectFUl(int);
void *fn_801D39C8(void *, void *, void *, void *, void *, void *);

void * fn_801D38F4(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = fn_801D39C8(o, tl_07, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
