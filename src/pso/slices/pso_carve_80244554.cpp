#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TWindowArea__ct(void *);

void *fn_80244554(void *arg0) {
    void *o = __nw__7TObjectFUl(0x64);
    if (o != NULL) {
        TWindowArea__ct(o);
    }
    return o;
}

}
