#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void VecCopy__FP3VecPC3Vec(void *, void *);
extern const f32 lbl_805DA770;
void fn_800ED578(void *);
void TObjEneDD__sub_800BA934(void *);

void fn_800ED204(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), M2C_FIELD(arg0, void **, 0x3C0));
    M2C_FIELD(arg0, f32 *, 0x3F8) = lbl_805DA770;
    M2C_FIELD(arg0, f32 *, 0x3FC) = lbl_805DA770;
    M2C_FIELD(arg0, f32 *, 0x400) = lbl_805DA770;
    fn_800ED578(arg0);
    TObjEneDD__sub_800BA934(arg0);
}

}
