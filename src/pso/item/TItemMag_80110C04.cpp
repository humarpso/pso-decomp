#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1);
u8 get_slot_count__14TItemProShieldFPv();
s32 activate_d04_slot__10TObjPlayerFPv();
s16 TObjPlayer__sub_80113D90(s32);
s16 TObjPlayer__sub_80113D98(s32);
s16 fn_80113DA0(s32);
s16 fn_80113DC4(s32);
s16 fn_80113DE8(s32);
s16 fn_80113E0C();

s32 check_evolution_cond__8TItemMagFUii(u32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r30;

    if ((arg0 != 0U) && (temp_r3 = activate_d04_slot__10TObjPlayerFPv(), ((temp_r3 == 0) == 0))) {
        switch (arg1) {
        case 0:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 1:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 2:
            var_r30 = 0;
            if (fn_80113E0C() >= 0x46) {
                var_r30 = 1;
            }
            if (fn_80113DE8(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (fn_80113DC4(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (fn_80113DA0(temp_r3) >= 0x46) {
                var_r30 += 1;
            }
            if (var_r30 >= 2) {
                return 1;
            }
            break;
        case 3:
            if (get_slot_count__14TItemProShieldFPv() >= 0x64U) {
                return 1;
            }
            break;
        case 4:
            if ((get_slot_count__14TItemProShieldFPv() >= 0x78U) && (TObjPlayer__sub_80113D98(temp_r3) >= 0xB4) && (TObjPlayer__sub_80113D90(temp_r3) >= 0x6E)) {
                return 1;
            }
            break;
        case 5:
            if ((fn_80113E0C() >= 0x23) && (fn_80113DE8(temp_r3) >= 0x23) && (fn_80113DC4(temp_r3) >= 0x23) && (fn_80113DA0(temp_r3) >= 0x23)) {
                return 1;
            }
            break;
        }
    }
    return 0;
}

}
