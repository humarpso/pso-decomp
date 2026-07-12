#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TBoss6EffHyoui__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6EffHyoui__ct(o, tl_02, arg0, arg1, arg2);
    }
    return o;
}

}
