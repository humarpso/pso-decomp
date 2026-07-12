#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BE864(void *arg0);

extern s32 lbl_805D6790;
extern u8 lbl_805D6794;
extern f32 lbl_805DE408;
extern f32 lbl_805DE4DC;

void TBoss6Type2__sub_802BE864(void *arg0) {
    s32 temp_r0;
    if ((s8) lbl_805D6794 == 0) {
        lbl_805D6794 = 1;
        lbl_805D6790 = (s32) (lbl_805DE4DC / lbl_805DE408);
    }
    temp_r0 = lbl_805D6790;
    M2C_FIELD(arg0, s32 *, 0x45C) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x460) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x420) = (s32) (M2C_FIELD(arg0, s32 *, 0x420) + 1);
}

}
