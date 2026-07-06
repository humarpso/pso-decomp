#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Type1__sub_802B59A8(void);
M2C_UNK TBoss6Type1__sub_802B5AD4(f32);

extern const f32 lbl_805DE2D0;

void TBoss6Type1__sub_802B59A8(void) {
    TBoss6Type1__sub_802B5AD4(lbl_805DE2D0);
}

}
