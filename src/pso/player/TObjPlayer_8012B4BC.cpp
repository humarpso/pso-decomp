#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_proshield_charge_bonus__10TObjPlayerFPv(u8 *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK advance_angle_wrap(void *, s32);
s32 obj_getPtr2B0_20(s32);

void apply_proshield_charge_bonus__10TObjPlayerFPv(u8 *arg0) {
    s32 var_r4;

    if (get_slot_count__14TItemProShieldFPv() == 6) {
        var_r4 = obj_getPtr2B0_20(M2C_FIELD(arg0, s32 *, 0xF0)) / 100000;
        var_r4 = var_r4 * 0x222;
        if (var_r4 > 0x1555) {
            var_r4 = 0x1555;
        }
        advance_angle_wrap(arg0 + 0x1F8, var_r4 + 0x1555);
    }
}

}
