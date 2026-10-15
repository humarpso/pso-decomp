#include "types.h"
#include "pso/enemy/TObjEneHoldEffect.h"

extern "C" {

s32 TCameraCtrl__sub_8006B370(f32);

u8 TObjEneHoldEffect::is_in_view() {
    s32 var_r31;

    var_r31 = 0;
    if ((TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)this + 0)) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)this + 4)) != 0) || (TCameraCtrl__sub_8006B370(*(f32 *)((s8 *)this + 8)) != 0)) {
        var_r31 = 1;
    }
    return var_r31;
}

}
