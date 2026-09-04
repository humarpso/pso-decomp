#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneRecon__sub_8031BC38(void);
void * TObjEneRecon__sub_8031BC3C(void *arg0, void *arg1, void *arg2);
void TObjEneRecon__sub_8031BC94(void);
int TObjEneRecobox__sub_803201D0(void);
void *TObjEneReconBomb__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void TObjEneRecon__sub_8031BC38(void) {  }

void * TObjEneRecon__sub_8031BC3C(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x364);
    if (o != NULL) {
        o = TObjEneReconBomb__ct(o, arg0, arg1, arg2);
    }
    return o;
}

    extern int lbl_805D6AE8;
void TObjEneRecon__sub_8031BC94(void) { lbl_805D6AE8 = TObjEneRecobox__sub_803201D0(); }

}
