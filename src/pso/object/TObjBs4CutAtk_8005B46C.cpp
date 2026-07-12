#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjBs4CutAtk__sub_8005B46C(void *arg0, void *arg1, void *arg2);
void *__ct__13TObjBs4CutAtkFv(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * TObjBs4CutAtk__sub_8005B46C(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = __ct__13TObjBs4CutAtkFv(o, arg0, arg1, arg2);
    }
    return o;
}

}
