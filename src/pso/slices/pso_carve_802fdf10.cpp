#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern f32 lbl_805D6980;
extern f32 lbl_805D6984;
extern f32 lbl_805D69C0;
extern f32 lbl_805D9E80;
extern f32 lbl_805DEDC8;
extern f32 lbl_805DEE40;

void fn_802FDF10(void) {
    f32 temp_f1;

    temp_f1 = lbl_805DEDC8 * lbl_805D9E80;
    lbl_805D6980 = temp_f1;
    lbl_805D6984 = lbl_805DEE40 * lbl_805D9E80;
    lbl_805D69C0 = temp_f1;
}

}
