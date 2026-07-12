#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjEneEpsilonBody__ct(void *, void *, void *);
extern void *tl_04;

void *create_TObjEneEpsilonBody(void *arg0) {
    void *o = __nw__7TObjectFUl(0x514);
    if (o != NULL) {
        o = TObjEneEpsilonBody__ct(o, tl_04, arg0);
    }
    return o;
}

}
