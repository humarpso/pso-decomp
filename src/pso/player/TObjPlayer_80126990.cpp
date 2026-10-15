#include "types.h"

extern "C" {

void update_shield_ready__10TObjPlayerFi(s32 arg0);
void *init_vtable_and_flags__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
s32 draw_weapon_model(s32);
s32 draw_weapon_at_joint(s32, s32);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 knuckle_second_hand_pass;

void update_shield_ready__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 3) {
        knuckle_second_hand_pass = 0;
        draw_weapon_model(arg0);
        knuckle_second_hand_pass = 1;
        draw_weapon_at_joint(arg0, 0x23);
    }
}

extern s32 lbl_804A2B98[];

void *init_vtable_and_flags__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2B98;
    set_status_flags__10TObjPlayerFPvUi(arg0, 577);
    return arg0;
}

}
