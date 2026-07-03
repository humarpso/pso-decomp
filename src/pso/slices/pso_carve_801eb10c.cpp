#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *fn_80228AF0(void *, int, int, int);

void *fn_801EB10C(void) {
    void *o = __nw__7TObjectFUl(0x10A8);
    if (o != NULL) {
        fn_80228AF0(o, 0, 0, 0);
    }
    return o;
}

}
