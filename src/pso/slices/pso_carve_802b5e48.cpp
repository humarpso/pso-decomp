#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802AAC74(s32);
s32 TBoss6Type1__sub_802B7E6C();
void TBoss6Type1__sub_802B5DFC(void* p);

int TBoss6Type1__sub_802B5E48(void) { return 0; }

}
