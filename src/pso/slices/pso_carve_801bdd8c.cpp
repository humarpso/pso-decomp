#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjPlayer__sub_801BD70C(void *, void *, void *);
extern void *tl_03;

void *TObjPlayer__sub_801BDD8C(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDB8);
    if (o != NULL) {
        o = TObjPlayer__sub_801BD70C(o, tl_03, arg0);
    }
    return o;
}

}
