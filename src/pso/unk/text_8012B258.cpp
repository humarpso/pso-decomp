#include "pso/items/TItemWeaponPartisan.h"
extern "C" {
u8 get_slot_count__14TItemProShieldFPv(TItemWeapon*);
s32 is_mode_two_and_ready__10TObjPlayerFPv(TItemWeapon*);
s32 obj_getPtr2B0_20(WeaponPlayerPrefix*);
void TObjPlayer__sub_80011138(WeaponPlayerPrefix*, s32);
void TObjPlayer__sub_80016018(WeaponPlayerPrefix*, WeaponVector*, s32, s32);
void apply_scale_if_active__10TObjPlayerFPvf(TItemWeapon*, f32);
void update_active_game_effect__10TObjPlayerFPv(TItemWeapon*);
void TObjEneDellBiter__sub_80087350(WeaponVector*, s32);
extern const f32 lbl_805DAE80;
}
void TItemWeaponPartisan::emit_marker_effects() {
    switch (get_slot_count__14TItemProShieldFPv(this)) {
    case 6:
        if (is_mode_two_and_ready__10TObjPlayerFPv(this) && obj_getPtr2B0_20(player) >= 10000) {
            TObjPlayer__sub_80011138(player, 10000);
            TObjPlayer__sub_80016018(player, (WeaponVector*)((u8*)player + 0x2FC), 0, -10000);
            apply_scale_if_active__10TObjPlayerFPvf(this, lbl_805DAE80);
            TObjEneDellBiter__sub_80087350((WeaponVector*)((u8*)player + 0x2FC), 0x66);
            TObjEneDellBiter__sub_80087350((WeaponVector*)((u8*)player + 0x2FC), 0x66);
        } else {
            update_active_game_effect__10TObjPlayerFPv(this);
        }
        break;
    default:
        update_active_game_effect__10TObjPlayerFPv(this);
        break;
    }
}
