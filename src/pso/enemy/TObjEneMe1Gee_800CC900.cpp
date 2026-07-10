#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__13TObjEneMe1GeeFPv(void *arg0);
void *init__13TObjEneMe1GeeFPvPvPvPv(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__13TObjEneMe1GeeFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x490);
    if (o != NULL) {
        o = init__13TObjEneMe1GeeFPvPvPvPv(o, tl_04, arg0, 0);
    }
    return o;
}

}
