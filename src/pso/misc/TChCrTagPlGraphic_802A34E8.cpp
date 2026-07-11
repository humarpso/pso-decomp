#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrTagPlGraphic__sub_802A34E8(void *arg0);
void *__ct__17TChCrTagPlGraphicFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *TChCrTagPlGraphic__sub_802A34E8(void *arg0) {
    void *o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = __ct__17TChCrTagPlGraphicFv(o, tl_03, arg0);
    }
    return o;
}

}
