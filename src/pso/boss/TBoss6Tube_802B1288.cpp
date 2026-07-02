#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss6Tube__sub_802B1288(void);

extern s32 lbl_805D6720;
extern f32 lbl_805D6724;
extern f32 lbl_805DE250;

void TBoss6Tube__sub_802B1288(void) {
    lbl_805D6720 = 0;
    lbl_805D6724 = lbl_805DE250;
}

}
