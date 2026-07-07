#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, M2C_UNK *);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4B64(void *, M2C_UNK);
M2C_UNK TBoss6Type1__sub_802B4BA8(void *, M2C_UNK);
extern M2C_UNK lbl_80470CA4[];

void fn_802B25A8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x40C) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x410) = 0x3C;
    VecCopy__FP3VecPC3Vec(arg0 + 0x420, lbl_80470CA4);
    fn_8022675C(0x39403, arg0 + 0x584, 0, 1);
    fn_8022675C(0x4003A811, arg0 + 0x38, 0, 1);
    TBoss6Type1__sub_802B4B64(arg0, 0);
    TBoss6Type1__sub_802B4BA8(arg0, 1);
}

}
