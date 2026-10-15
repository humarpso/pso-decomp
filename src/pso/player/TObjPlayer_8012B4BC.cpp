#include "types.h"

extern "C" {

void apply_proshield_charge_bonus__10TObjPlayerFPv(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 advance_angle_wrap(void *, s32);
s32 obj_getPtr2B0_20(s32);

void apply_proshield_charge_bonus__10TObjPlayerFPv(u8 *arg0) {
    s32 var_r4;

    if (get_slot_count__14TItemProShieldFPv() == 6) {
        var_r4 = obj_getPtr2B0_20(*(s32 *)((s8 *)arg0 + 0xF0)) / 100000;
        var_r4 = var_r4 * 0x222;
        if (var_r4 > 0x1555) {
            var_r4 = 0x1555;
        }
        advance_angle_wrap(arg0 + 0x1F8, var_r4 + 0x1555);
    }
}

}
