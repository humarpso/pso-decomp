#include "types.h"

extern "C" {

int fn_8024AEF0(s32);

void fn_8024AE70(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        fn_8024AEF0(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
