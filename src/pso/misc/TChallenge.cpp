#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TChallenge__sub_800709C4(void);
void *TChallenge__ct(void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_su;

void *TChallenge__sub_800709C4(void) {
    void *o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TChallenge__ct(o, tl_su);
    }
    return o;
}

}
