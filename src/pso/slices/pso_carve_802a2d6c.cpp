#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *__ct__17TChCrTagOccHeaderFv(void *, void *, void *);
extern void *tl_03;

void *create_ch_cr_tag_occ_header(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = __ct__17TChCrTagOccHeaderFv(o, tl_03, arg0);
    }
    return o;
}

}
