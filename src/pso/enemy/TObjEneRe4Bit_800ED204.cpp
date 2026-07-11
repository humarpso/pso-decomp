#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneRe4Bit__sub_800ED204(void *arg0);
void TObjEneDD__sub_800BA934(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_800ED578(void *);

extern const f32 TObjEneRe4Bit__data_805DA770;

void TObjEneRe4Bit__sub_800ED204(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), M2C_FIELD(arg0, void **, 0x3C0));
    M2C_FIELD(arg0, f32 *, 0x3F8) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x3FC) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x400) = TObjEneRe4Bit__data_805DA770;
    fn_800ED578(arg0);
    TObjEneDD__sub_800BA934(arg0);
}

}
