#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss4Bishi__vt0(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f32 lbl_805D8CC8;
extern const f32 lbl_805D8CCC;

void TBoss4Bishi__vt0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < lbl_805D8CC8) {
        temp_f0 = temp_f2 + lbl_805D8CCC;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        if (temp_f0 > lbl_805D8CC8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
            M2C_FIELD(arg0, s32 *, 0x374) = 2;
        }
    }
}

}
