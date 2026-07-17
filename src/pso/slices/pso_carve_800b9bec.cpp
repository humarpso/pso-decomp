#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *, f32);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern s32 lbl_805D4DF0;

void TObjEneDD__sub_800B9BEC(s32 arg0, u8 *arg1, f32 farg0) {
    f32 temp_f1;

    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (arg0));
    TBoss6Type1__sub_803D9370((void *) (arg1), (void *) (lbl_805D4DF0 + 0x178));
    temp_f1 = update_scale__15TObjBoss2TunnelFPv((void *) (arg1)) * farg0;
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * temp_f1);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * temp_f1);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * temp_f1);
    TBoss4Zako__sub_803D8910((void *) (arg1), (void *) (lbl_805D4DF0 + 0x178), (f32) (temp_f1));
}

}
