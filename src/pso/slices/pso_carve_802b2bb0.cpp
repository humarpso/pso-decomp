#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss6Type1__sub_802B683C(void *);
extern M2C_UNK lbl_80470C8C[];
void VecCopy__FP3VecPC3Vec(void *, void *);
void TBoss6Type1__sub_802B4BA8(void *, int);
void TBoss6Type1__sub_802B4B64(void *, int);

void fn_802B2BB0(void *arg0) {
    TBoss6Type1__sub_802B683C(arg0);
    M2C_FIELD(arg0, u32 *, 0x40C) = 300;
    M2C_FIELD(arg0, u32 *, 0x410) = 300;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 1056), lbl_80470C8C);
    TBoss6Type1__sub_802B4BA8(arg0, 0);
    TBoss6Type1__sub_802B4B64(arg0, 1);
}

}
