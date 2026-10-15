#include "types.h"

extern "C" {

u8 is_camera_visible__17TObjEneHoldEffectFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 is_camera_visible__17TObjEneHoldEffectFPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 0)) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 4)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

}
