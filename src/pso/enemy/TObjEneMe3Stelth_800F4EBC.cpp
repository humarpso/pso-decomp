#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DA814;
void TObjEneMe3Stelth__sub_800F4EBC(u8 *arg0);
}

extern "C" {

void TObjEneMe3Stelth__sub_800F4EBC(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + (lbl_805DA814 + M2C_FIELD(arg0, f32 *, 0x3D4)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

}
