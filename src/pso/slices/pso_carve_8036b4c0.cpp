#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *lbl_805D7008;
void *__nw__7TObjectFUl(int);
void *fn_8036B424(void *, void *);

void fn_8036B4C0(void *arg0) {
    void *o;
    if (lbl_805D7008 == NULL) {
        o = __nw__7TObjectFUl(0x30);
        if (o != NULL) {
            fn_8036B424(o, arg0);
        }
    }
}

}
