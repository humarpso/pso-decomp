#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 get_value__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__sub_802ABADC();

extern void *lbl_805D66F0;
extern f32 lbl_805DE098;

f32 get_value__14TBoss6PlotFalzFv(void) {
    if ((TBoss6PlotFalz__sub_802ABADC() == 0) || ((void *) lbl_805D66F0 == NULL)) {
        return lbl_805DE098;
    }
    return M2C_FIELD(lbl_805D66F0, f32 *, 0x3C);
}

}
