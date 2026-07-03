#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_04;
void *__nw__7TObjectFUl(int);
void *TObjEneRe4Bit__ct(void *, void *, void *, void *, void *, void *, void *);

void * TObjEneRe4Bit__sub_800EDA44(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x410);
    if (o != NULL) {
        o = TObjEneRe4Bit__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
