#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss6Rock__sub_803549E4(void *arg0);
void *TBoss6Rock__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *TBoss6Rock__sub_803549E4(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TBoss6Rock__ct(o, tl_02, arg0);
    }
    return o;
}

}
