#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TObjPlayer__sub_80363C5C(void *, void *);

void fn_80363CA0(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        TObjPlayer__sub_80363C5C(o, arg0);
    }
}

}
