#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type2__sub_802BC6DC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4F4) = 0;
}

s32 TBoss6Type2__sub_802BC6E8(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x4F0) - M2C_FIELD(arg0, s16 *, 0x32C);
}

void TBoss6Type2__sub_802BC6F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4F0) = (s32) M2C_FIELD(arg0, s16 *, 0x32C);
}

}
