#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 add_damage__11TBoss6Type2FPvi(void);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void TBoss6Type2__sub_802BD340(void);
s32 get_rotation_timer__11TBoss6Type2FPv(void* p);

int TBoss6Type2__sub_802BD3CC(void) { return 0; }

}
