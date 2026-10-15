#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int suppress_slot__11TWindowCtrlFv(s32);
int unsuppress_slot__11TWindowCtrlFv(s32);

void TWindowCtrl::init_all_slots() {
    s32 var_r31;

    var_r31 = 0;
    do {
        suppress_slot__11TWindowCtrlFv(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

void TWindowCtrl::init_all_slots2() {
    s32 var_r31;

    var_r31 = 0;
    do {
        unsuppress_slot__11TWindowCtrlFv(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
