#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TAdChrMoveEffectGC__ct(void *, void *);

void *fn_803495B4(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3A4);
    if (o != NULL) {
        TAdChrMoveEffectGC__ct(o, arg0);
    }
    return o;
}

}
