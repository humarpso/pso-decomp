#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802AAC74(s32);
s32 calc_field4b0_delta__11TBoss6Type1FPv();
void reset_fields_4e0__11TBoss6Type1FPv(void* p);

int TBoss6Type1__sub_802B5E48(void) { return 0; }

}
