#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TWindowSubAreaMapDisp__ct(void *);

void *TWindowSubAreaMap__ct(void *arg0) {
    void *o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        TWindowSubAreaMapDisp__ct(o);
    }
    return o;
}

}
