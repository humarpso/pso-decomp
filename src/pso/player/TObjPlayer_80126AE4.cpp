#include "types.h"

extern "C" {

void apply_on_shield_state6__10TObjPlayerFi(s32 arg0);
void *init_with_update_handler__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 refresh_owner_stats__5TItemFPv(s32);
void TItemWeapon__ct(void *);

void apply_on_shield_state6__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 6) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
}

extern s32 lbl_804A2D88[];
extern s32 spawn_weapon_impact_effect[];

void *init_with_update_handler__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2D88;
    *(s32 **)((s8 *)arg0 + 0x1EC) = spawn_weapon_impact_effect;
    return arg0;
}

}
