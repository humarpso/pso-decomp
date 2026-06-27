#include "types.h"

extern "C" {

s32 fn_802C64D0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);

s32 fn_802C6A68(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C6848(var_r31) != 0) && (fn_802C64D0(var_r31) == 0)) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 3;
    }
    goto loop_1;
}

}
