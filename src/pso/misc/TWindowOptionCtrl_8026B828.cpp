#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 TWindowSnapShot__ct(s32, s32);
s32 TWindowSoundBalance__ct(s32, s32);
s32 __nw__7TObjectFUl(s32);
s32 get_option_entry__17TWindowOptionCtrlFi(s32);

s32 TWindowOptionCtrl::create_snap_shot_window() {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowSnapShot__ct(var_r31, get_option_entry__17TWindowOptionCtrlFi(0xCF));
    }
    return var_r31;
}

s32 TWindowOptionCtrl::create_sound_balance_window() {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x68);
    if (var_r31 != 0) {
        var_r31 = TWindowSoundBalance__ct(var_r31, get_option_entry__17TWindowOptionCtrlFi(0xCF));
    }
    return var_r31;
}

}
