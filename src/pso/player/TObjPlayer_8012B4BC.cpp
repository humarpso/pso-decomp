#include "types.h"
#include "pso/item/TUnk_804A4D70.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 advance_angle_wrap(void *, s32);
s32 obj_getPtr2B0_20(s32);

void TUnk_804A4D70::update_weapon() {
    u8 *arg0 = (u8 *)this;
    s32 var_r4;

    if (get_slot_count__14TItemProShieldFv() == 6) {
        var_r4 = obj_getPtr2B0_20(*(s32 *)&this->player) / 100000;
        var_r4 = var_r4 * 0x222;
        if (var_r4 > 0x1555) {
            var_r4 = 0x1555;
        }
        advance_angle_wrap((u8 *)&this->unk_1F8, var_r4 + 0x1555);
    }
}

}
