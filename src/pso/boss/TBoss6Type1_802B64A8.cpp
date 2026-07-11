#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B64A8(void *arg0);

extern f32 TBoss6Type1__data_805DE2D0;

void TBoss6Type1__sub_802B64A8(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x4DC) = (f32) TBoss6Type1__data_805DE2D0;
}

}
