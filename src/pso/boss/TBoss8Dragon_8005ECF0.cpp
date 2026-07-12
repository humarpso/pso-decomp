#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2);
s32 TBoss8Dragon__sub_8005E868(s32, s32, M2C_UNK);
s32 TBoss8Dragon__sub_8005E9E8(s32, s32, M2C_UNK);
f32 TBoss8Dragon__sub_8005EAD0(s32, s32, M2C_UNK);

void calc_params__12TBoss8DragonFiPvi(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s32 *, 4) = TBoss8Dragon__sub_8005E9E8(arg0, arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = TBoss8Dragon__sub_8005EAD0(arg0, arg2, 0);
    M2C_FIELD(arg1, f32 *, 0x10) = TBoss8Dragon__sub_8005EAD0(arg0, arg2, 1);
    M2C_FIELD(arg1, s32 *, 8) = TBoss8Dragon__sub_8005E868(arg0, arg2, 0);
}

}
