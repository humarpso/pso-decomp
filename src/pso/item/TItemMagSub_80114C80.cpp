#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2);
f32 TBoss8Dragon__sub_803D64C0(s32);

void accumulate_stat__11TItemMagSubFPvPvPv(f32 *arg0, s32 *arg1, void *arg2) {
    *arg1 = *arg1 + M2C_FIELD(arg2, s32 *, 0xC);
    *arg0 = M2C_FIELD(arg2, f32 *, 0) * TBoss8Dragon__sub_803D64C0(*arg1 + M2C_FIELD(arg2, s32 *, 8));
}

}
