#include "types.h"
#include "pso/unk/text_801D6D8C.h"

extern "C" {

void fn_801D6D8C(s8 *arg0, s8 arg1, s32 arg2) {
    s8 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x14)) {
        var_r4 = 0x14;
    }
    (arg0 + arg2)[0x20] = var_r4;
}

}
