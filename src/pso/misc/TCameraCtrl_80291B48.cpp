#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TCameraCtrl__vt8(void);
void *__nw__7TObjectFUl(int);
void *fn_80291CBC(void *);

void *TCameraCtrl__vt8(void) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = fn_80291CBC(o);
    }
    return o;
}

}
