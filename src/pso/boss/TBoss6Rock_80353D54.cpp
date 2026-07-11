#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6Rock__sub_80353D54(s32 arg0, void *arg1, f32 *arg2);
s32 TBoss6Rock__sub_80353E10();
void *TBoss6Rock__sub_80354148(s32);
void VecCopy__FP3VecPC3Vec(void *, const void *);

extern u8 lbl_805437F8[];

s32 TBoss6Rock__sub_80353D54(s32 arg0, void *arg1, f32 *arg2) {
    if (TBoss6Rock__sub_80353E10() == 0) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(arg1, &lbl_805437F8[arg0 * 0xC]);
    *arg2 = M2C_FIELD(TBoss6Rock__sub_80354148(arg0), f32 *, 4);
    return 1;
}

}
