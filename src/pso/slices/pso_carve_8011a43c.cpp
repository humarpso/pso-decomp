#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *TCameraCtrl__ct(void *, void *);
extern void *tl_camera;

void *fn_8011A43C(void) {
    void *o = __nw__7TObjectFUl(0x1D4);
    if (o != NULL) {
        TCameraCtrl__ct(o, tl_camera);
    }
    return o;
}

}
