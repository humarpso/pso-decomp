#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80156844(void *, void *, M2C_UNK);
void fn_800D9BBC(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_800D9BBC(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x388);
    if (temp_r4 & 0x40000) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFBFFFF);
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        TObjPlayer__sub_80156844(arg0, arg0 + 0x38, 0);
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r4 & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}
#pragma pop

}
