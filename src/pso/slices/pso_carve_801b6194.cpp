#include "types.h"

extern "C" {

s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2) {
    s16 temp_r3;
    s16 var_r6;

    var_r6 = 0;
    *arg1 += arg0;
    temp_r3 = *arg1;
    if (temp_r3 < 0) {
        *arg1 = 0;
    } else {
        var_r6 = temp_r3 - arg2;
        if (var_r6 > 0) {
            *arg1 = arg2;
        }
    }
    return var_r6;
}

}
