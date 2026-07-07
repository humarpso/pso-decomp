#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B7AE0(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805DE3A0;
extern const f32 lbl_805DE3A4;

void TBoss6Type1__sub_802B7AE0(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x438) != 0) {
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A4);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - lbl_805DE3A0);
}

}
