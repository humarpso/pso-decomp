#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *fn_801815F8(void *, void *);
extern void *tl_05;

void *fn_80140830(void) {
    void *o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        fn_801815F8(o, tl_05);
    }
    return o;
}

}
