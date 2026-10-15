#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 set_evp__12TItemProUnitFf(s32, f32);

extern f32 lbl_805DAD80;
extern f32 lbl_805DAD84;
extern f32 lbl_805DAD88;
extern f32 lbl_805DAD8C;
extern f32 lbl_805DAD90;

void TObjPlayer::apply_shield_scale_to_unit() {
    f32 var_f31;
    u8 temp_r3;

    var_f31 = lbl_805DAD80;
    temp_r3 = get_slot_count__14TItemProShieldFv();
    switch ((s32) temp_r3) {
    case 0:
        var_f31 = lbl_805DAD84;
        break;
    case 1:
        var_f31 = lbl_805DAD88;
        break;
    case 2:
        var_f31 = lbl_805DAD8C;
        break;
    case 3:
        var_f31 = lbl_805DAD90;
        break;
    }
    set_evp__12TItemProUnitFf(*(s32 *)((s8 *)this + 0xF0) + 0x7CC, var_f31);
}

}
