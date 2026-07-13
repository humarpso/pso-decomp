#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss6Type2__sub_802B9994(int, int, void *, void *);

void TBoss6Type2__sub_802B9A24(u8 *arg0, s32 *arg1) {
    *arg1 = (s32) (s16) ((s8) M2C_FIELD(arg0, u8 *, 2) << 8);
    TBoss6Type2__sub_802B9994((int) (M2C_FIELD(arg0, u8 *, 0)), (int) (M2C_FIELD(arg0, u8 *, 1)), (void *) ((u8 *) arg1 + 4), (void *) (arg0));
}

}
