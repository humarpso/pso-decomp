#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_range__11TBoss6Type2Fv(void);
M2C_UNK TBoss6Type2__sub_802BB1E0(f32, f32);

extern const f32 TBoss6Type2__data_805DE460;
extern const f32 lbl_805DE47C;

void init_range__11TBoss6Type2Fv(void) {
    TBoss6Type2__sub_802BB1E0(TBoss6Type2__data_805DE460, lbl_805DE47C);
}

}
