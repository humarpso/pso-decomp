#include "types.h"

extern "C" {

void init_all_slots__11TWindowCtrlFv(void);
void init_all_slots2__11TWindowCtrlFv(void);
int TWindowCtrl__sub_8024AEAC(s32);
int TWindowCtrl__sub_8024AEF0(s32);

void init_all_slots__11TWindowCtrlFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        TWindowCtrl__sub_8024AEAC(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

void init_all_slots2__11TWindowCtrlFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        TWindowCtrl__sub_8024AEF0(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
