#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TButterfly__ct(void *arg0, void *arg1, void *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
void TObjPlayer__sub_80020898(void *, void *);
void init_motion__10TButterflyFPv(void *);
void TPhotonMagicSquare__sub_801A2640(void *);

extern M2C_UNK __vt__10TButterfly[];
extern void *lbl_805D3230;

void *TButterfly__ct(void *arg0, void *arg1, void *arg2) {
    TPhotonMagicSquare__sub_801A2640(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TButterfly;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3230;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 56), (void *)((char *)arg2 + 12));
    TObjPlayer__sub_80020898((void *)((char *)arg0 + 92), (void *)((char *)arg2 + 24));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 104), (void *)((char *)arg2 + 36));
    init_motion__10TButterflyFPv(arg0);
    return arg0;
}

}
