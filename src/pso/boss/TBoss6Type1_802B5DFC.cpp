#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802AAC74(s32);
s32 TBoss6Type1__sub_802B7E6C();
void TBoss6Type1__sub_802B5DFC(void* p);

void TBoss6Type1__sub_802B5DFC(void* p) { *(s32*)((char*)p + 0x4e0) = 0; *(s32*)((char*)p + 0x4e4) = 0; }
s32 is_field3F8_over_0x20__11TBoss6Type1FPv(void *arg0) {
    return TBoss6PlotFalz__sub_802AAC74(M2C_FIELD(arg0, s32 *, 0x3F8)) > 0x20;
}

}
