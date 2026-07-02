#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowDD__sub_80340F70(void);
void *TWindowDD__sub_80340F00(void *);
void *__nw__7TObjectFUl(int);

void *TWindowDD__sub_80340F70(void) {
    void *o = __nw__7TObjectFUl(0x70);
    if (o != NULL) {
        o = TWindowDD__sub_80340F00(o);
    }
    return o;
}

}
