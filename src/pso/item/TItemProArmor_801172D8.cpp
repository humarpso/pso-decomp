#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_armor_stat__13TItemProArmorFPv(void *arg0);
s32 get_stat_value__13TItemProArmorFPv(void *);
s32 calc_scaled_offset__13TItemProArmorFv(void *);
s32 calc_armor_value__13TItemProArmorFv(void *);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK TObjPlayer__sub_800112A4(s32, s32);

void apply_armor_stat__13TItemProArmorFPv(void *arg0) {
    s32 var_r31;
    u8 temp_r3;

    var_r31 = 0;
    temp_r3 = get_slot_count__14TItemProShieldFPv();
    switch ((s32) temp_r3) {
    case 0:
        var_r31 = calc_armor_value__13TItemProArmorFv(arg0);
        break;
    case 1:
        var_r31 = calc_scaled_offset__13TItemProArmorFv(arg0);
        break;
    case 2:
        var_r31 = get_stat_value__13TItemProArmorFPv(arg0);
        break;
    }
    TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), var_r31);
}

}
