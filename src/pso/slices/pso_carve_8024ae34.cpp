#include "types.h"

extern "C" {

int fn_8024AEAC(s32);

void fn_8024AE34(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        fn_8024AEAC(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
