#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800FA9A8();
M2C_UNK TOBoss4Rock__sub_80147A80(void*);
M2C_UNK TObjFogCollisionPoison__sub_801533BC();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_803E1FC8(M2C_UNK);
M2C_UNK fn_803E1FFC(f32, f32);
M2C_UNK fn_803E2070();
extern u32 lbl_805D5388;
extern f32 lbl_805DA964;
extern f32 lbl_805DA968;

void TFogCtrl__sub_800FBC04(void) {
    TObjFogCollisionPoison__sub_801533BC();
    fn_800FA9A8();
    if ((u32) lbl_805D5388 != 0U) {
        TOBoss4Rock__sub_80147A80((void*)lbl_805D5388);
    }
    lbl_805D5388 = 0U;
    fn_803E1FC8(-1);
    fn_803E1FFC(lbl_805DA964, lbl_805DA968);
    fn_803E2070();
    fn_801E2EFC();
}

}
