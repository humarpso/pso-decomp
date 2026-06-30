#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *fn_80353984(void *, void *);
extern void *tl_06;

void *fn_803539C8(void) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = fn_80353984(o, tl_06);
    }
    return o;
}

}
