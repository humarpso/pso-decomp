#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemProArmor__sub_80117368(void *arg0, s16 arg1);
void apply_armor_stat__13TItemProArmorFPv(void *arg0);
M2C_UNK add_actor_tp(s32, s32);
void __dt__11TItemObjectFv(void *, int);
s32 calc_armor_value__13TItemProArmorFv(void *);
s32 calc_scaled_offset__13TItemProArmorFv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFPv();
s32 get_stat_value__13TItemProArmorFPv(void *);

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
    add_actor_tp(M2C_FIELD(arg0, s32 *, 0xF0), var_r31);
}

extern M2C_UNK lbl_8049FE00[];

void *TItemProArmor__sub_80117368(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FE00;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
