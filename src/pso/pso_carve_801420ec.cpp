#include "types.h"

extern "C" {

s32 fn_801420EC(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r3;

    var_r3 = arg0;
    if (var_r3 < arg1) {
        var_r3 = arg1;
    }
    if (var_r3 > arg2) {
        return arg2;
    }
    return var_r3;
}

}
