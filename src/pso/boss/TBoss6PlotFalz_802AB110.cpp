#include "types.h"

extern "C" {

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0);
s32 get_field_3e0__12TBoss3VoloptFPv();

s32 is_state_1f__14TBoss6PlotFalzFUi(u32 arg0) {
    if ((arg0 == 0U) || (get_field_3e0__12TBoss3VoloptFPv() != 0x1F)) {
        return 0;
    }
    return 1;
}

}
