#include "types.h"

extern "C" {

s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);

s32 find_active_slot__22TAdMultiPlyChrSelectGCFv(void) {
    s32 var_r31;

    var_r31 = 0;
loop_1:
    if ((TAdMultiPlyChrSelectGC__sub_802C6848(var_r31) != 0) && (TAdMultiPlyChrSelectGC__sub_802C64D0(var_r31) == 0)) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 3;
    }
    goto loop_1;
}

}
