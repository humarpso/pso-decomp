#include "types.h"

extern "C" {

s32 TLockOnCursor__sub_8013EDC4(s32 arg0, s16 arg1);
void __dl__FPv(void);

s32 TLockOnCursor__sub_8013EDC4(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
