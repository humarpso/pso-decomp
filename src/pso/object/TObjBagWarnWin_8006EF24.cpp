#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TObjBagWarnWinFPv(void *arg0);
void *__ct__14TObjBagWarnWinFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__14TObjBagWarnWinFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = __ct__14TObjBagWarnWinFv(o, arg0);
    }
    return o;
}

}
