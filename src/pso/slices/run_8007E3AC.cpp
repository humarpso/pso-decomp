#include "types.h"

extern "C" {

int __dl__FPv();

s32 fn_8007E3AC(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

int fn_8007E380();

s32 fn_8007E3E8(s32 arg0) {
    fn_8007E380();
    return arg0;
}

}
