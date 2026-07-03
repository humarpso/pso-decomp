#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_07;
extern void *lbl_805D6960;
void *__nw__7TObjectFUl(int);
void *__ct__7TObjectFP7TObject(void *, void *);

void fn_802F19C0(void) {
    void *o;
    o = __nw__7TObjectFUl(0x1C);
    if (o != NULL) {
        o = __ct__7TObjectFP7TObject(o, tl_07);
    }
    lbl_805D6960 = o;
}

}
