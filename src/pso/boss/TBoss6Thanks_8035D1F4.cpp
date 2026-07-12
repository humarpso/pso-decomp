#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__12TBoss6ThanksFv(void);
void *TBoss6Thanks__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__12TBoss6ThanksFv(void) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        o = TBoss6Thanks__ct(o, tl_02);
    }
    return o;
}

}
