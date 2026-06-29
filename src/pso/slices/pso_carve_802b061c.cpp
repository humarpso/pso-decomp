#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TBoss6PlotFalz__sub_802AACEC(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC86C(void *, M2C_UNK);
s32 fn_8033FE28(void *);

void fn_802B061C(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3DC);
    if ((temp_r3 != NULL) && ((fn_8033FE28(temp_r3) != 0) || (TBoss6PlotFalz__sub_802AACEC(arg0) != 0))) {
        TBoss6PlotFalz__sub_802AC86C(arg0, 5);
    }
}

}
