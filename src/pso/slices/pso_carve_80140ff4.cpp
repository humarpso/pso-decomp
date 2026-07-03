#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_05;
extern void *lbl_805D5650;
void *__nw__7TObjectFUl(int);
void *TMapCsnCtrl__ct(void *, void *);

void fn_80140FF4(void) {
    void *o;
    o = __nw__7TObjectFUl(0x81C);
    if (o != NULL) {
        o = TMapCsnCtrl__ct(o, tl_05);
    }
    lbl_805D5650 = o;
}

}
