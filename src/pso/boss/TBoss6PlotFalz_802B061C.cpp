#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0);
s32 is_ready__14TBoss6PlotFalzFv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC86C(void *, M2C_UNK);
s32 get_plot_state__10TObjPlayerFPv(void *);

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3DC);
    if ((temp_r3 != NULL) && ((get_plot_state__10TObjPlayerFPv(temp_r3) != 0) || (is_ready__14TBoss6PlotFalzFv(arg0) != 0))) {
        TBoss6PlotFalz__sub_802AC86C(arg0, 5);
    }
}

}
