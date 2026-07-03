#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjEneEpsilonGuard__sub_8035F1C8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void *TObjEneEpsilonGuard__ct(void *, void *, void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void * TObjEneEpsilonGuard__sub_8035F1C8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    void *o;
    o = __nw__7TObjectFUl(0x4D8);
    if (o != NULL) {
        o = TObjEneEpsilonGuard__ct(o, tl_04, arg0, arg1, arg2, arg3, arg4);
    }
    return o;
}

}
