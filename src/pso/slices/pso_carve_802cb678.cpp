#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_80040B3C(void *, int);
M2C_UNK TObjPlayer__sub_80154E3C(void *);

void TObjEneMe1GiGue__sub_802CB678(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
    fn_80040B3C(arg0, 0xE);
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
    TObjPlayer__sub_80154E3C(arg0);
}

}
