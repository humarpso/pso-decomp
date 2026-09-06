#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 calc_product__12TBoss8DragonFiiii(s32, s32, s32, s32);
f32 TBoss8Dragon__sub_8005EAD0(void *, void *, int);
void TBoss8Dragon__sub_8005ED6C(s32 arg0, u8 *arg1, s32 arg2);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_8005ED6C(s32 arg0, u8 *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = calc_product__12TBoss8DragonFiiii(arg0, arg2, 0, 1);
    M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *) (arg0), (void *) (arg2), (int) (0));
}
#pragma pop

}
