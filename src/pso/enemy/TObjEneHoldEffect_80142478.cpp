#include "types.h"

extern "C" {

u8 is_in_view__17TObjEneHoldEffectFPv(void *arg0);
s32 TCameraCtrl__sub_8006B370(f32);

u8 is_in_view__17TObjEneHoldEffectFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 0)) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 4)) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)arg0 + 8)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
