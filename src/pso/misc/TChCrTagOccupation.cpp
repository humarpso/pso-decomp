#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChCrTagOccupation__sub_802A30B0(void *arg0);
void *__ct__18TChCrTagOccupationFv(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_03;

void *TChCrTagOccupation__sub_802A30B0(void *arg0) {
    void *o = __nw__7TObjectFUl(0x44);
    if (o != NULL) {
        o = __ct__18TChCrTagOccupationFv(o, tl_03, arg0);
    }
    return o;
}

}
