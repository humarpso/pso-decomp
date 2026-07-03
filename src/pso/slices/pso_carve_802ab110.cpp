#include "types.h"

extern "C" {

s32 fn_8003F108();

s32 TBoss6PlotFalz__sub_802AB110(u32 arg0) {
    if ((arg0 == 0U) || (fn_8003F108() != 0x1F)) {
        return 0;
    }
    return 1;
}

}
