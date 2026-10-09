#include "types.h"

extern "C" {

void init_all_slots__11TWindowCtrlFv(void);
void init_all_slots2__11TWindowCtrlFv(void);
int suppress_slot__11TWindowCtrlFi(s32);
int unsuppress_slot__11TWindowCtrlFi(s32);

void init_all_slots__11TWindowCtrlFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        suppress_slot__11TWindowCtrlFi(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

void init_all_slots2__11TWindowCtrlFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        unsuppress_slot__11TWindowCtrlFi(var_r31);
        var_r31 += 1;
    } while (var_r31 < 0xC);
}

}
