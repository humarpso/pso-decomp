#include "types.h"

extern "C" {

int TWindowCtrl__sub_8024AEF0(s32);

void TWindowCtrl__sub_8024AE70(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        TWindowCtrl__sub_8024AEF0(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
