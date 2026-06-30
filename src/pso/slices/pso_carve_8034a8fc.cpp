#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *__ct__16TBoss4CheckEmptyFv(void *, void *);
extern void *tl_02;

void *fn_8034A8FC(void) {
    void *o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = __ct__16TBoss4CheckEmptyFv(o, tl_02);
    }
    return o;
}

}
