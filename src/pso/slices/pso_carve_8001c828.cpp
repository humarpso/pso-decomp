#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *__ct__9TAdFadeGCFv(void *, void *, int);
extern void *tl_fade;

void *TLoadCtrl__ct(void *arg0) {
    void *o = __nw__7TObjectFUl(0x38);
    if (o != NULL) {
        __ct__9TAdFadeGCFv(o, tl_fade, 2);
    }
    return o;
}

}
