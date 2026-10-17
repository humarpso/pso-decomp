#include "types.h"
#include "pso/unk/text_801C53D4.h"

extern "C" {

s32 decrement_clamped(s32 *arg0, s32 arg1) {
    *arg0 -= arg1;
    if ((s32) *arg0 < 0) {
        *arg0 = 0;
        return 0;
    }
    return 1;
}

s32 fn_801C5404(s32 *arg0) {
    s32 temp_r3;

    temp_r3 = *arg0;
    if ((temp_r3 < 0) || (temp_r3 > 0x63)) {
        return 0;
    }
    return temp_r3;
}

void fn_801C5420(s32 *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x63)) {
        var_r4 = 0;
    }
    *arg0 = var_r4;
}

}
