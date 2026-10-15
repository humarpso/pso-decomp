#include "types.h"
#include "pso/item/TItemProArmor.h"

extern "C" {

void *TItemProArmor__sub_80117368(void *arg0, s16 arg1);
s32 add_actor_tp(s32, s32);
void __dt__11TItemObjectFv(void *, int);
s32 calc_armor_value__13TItemProArmorFv(void *);
s32 calc_scaled_offset__13TItemProArmorFv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
u8 get_slot_count__14TItemProShieldFv();
s32 get_stat_value__13TItemProArmorFv(void *);

void TItemProArmor::apply_armor_stat() {
    s32 var_r31;
    u8 temp_r3;

    var_r31 = 0;
    temp_r3 = get_slot_count__14TItemProShieldFv();
    switch ((s32) temp_r3) {
    case 0:
        var_r31 = calc_armor_value__13TItemProArmorFv(this);
        break;
    case 1:
        var_r31 = calc_scaled_offset__13TItemProArmorFv(this);
        break;
    case 2:
        var_r31 = get_stat_value__13TItemProArmorFv(this);
        break;
    }
    add_actor_tp(*(s32 *)((s8 *)this + 0xF0), var_r31);
}

extern s32 lbl_8049FE00[];

void *TItemProArmor__sub_80117368(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_8049FE00;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
