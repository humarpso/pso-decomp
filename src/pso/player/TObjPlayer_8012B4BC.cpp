#include "types.h"
#include "pso/item/TUnk_804A4D70.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
void advance_angle_wrap(s32 *arg0, s32 arg1);
int obj_getPtr2B0_20(u8 *p);

void TUnk_804A4D70::update_weapon() {
    s32 var_r4;

    if (get_slot_count__14TItemProShieldFv() == 6) {
        var_r4 = obj_getPtr2B0_20((u8 *)this->player) / 100000;
        var_r4 = var_r4 * 0x222;
        if (var_r4 > 0x1555) {
            var_r4 = 0x1555;
        }
        advance_angle_wrap((s32 *)&this->unk_1F8, var_r4 + 0x1555);
    }
}

}
