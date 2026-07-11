#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_04;
void *__nw__7TObjectFUl(int);
void *TObjControl__ct(void *, void *);
void *fn_80091B98(void *, void *, void *, void *, void *, void *, void *, void *);

void * TObjEneBalClawClaw__sub_800918E0(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = fn_80091B98(o2, o, arg0, arg1, arg2, arg3, arg4, arg5);
    }
    return o2;
}

}
