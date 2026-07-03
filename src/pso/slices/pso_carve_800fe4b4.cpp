#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int fn_800FE300(void *);
void *__nw__7TObjectFUl(int);
void *fn_800FE45C(void *, void *);

void * fn_800FE4B4(void *arg0) {
    void *o;
    if (fn_800FE300(arg0) == 0) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = fn_800FE45C(o, arg0);
    }
    return o;
}

}
