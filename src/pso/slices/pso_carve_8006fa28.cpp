#include "types.h"

extern "C" {

s32 fn_8006FA54();

s32 fn_8006FA28(void) {
    s32 var_r3;

    var_r3 = fn_8006FA54();
    if (var_r3 < 0) {
        var_r3 = 0;
    }
    return var_r3;
}

}
