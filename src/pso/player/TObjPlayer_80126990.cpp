#include "types.h"
#include "pso/player/TUnk_804A2B98.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 draw_weapon_model(void *arg0);
void draw_weapon_at_joint(s32 arg0, s8 arg1);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFUl(void *, int);

extern s32 knuckle_second_hand_pass;

void TObjPlayer::update_shield_ready(s32 arg0) {
    if (get_slot_count__14TItemProShieldFv() == 3) {
        knuckle_second_hand_pass = 0;
        draw_weapon_model((void *)arg0);
        knuckle_second_hand_pass = 1;
        draw_weapon_at_joint(arg0, 0x23);
    }
}

extern s32 lbl_804A2B98[];

void *TUnk_804A2B98::init_vtable_and_flags() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A2B98;
    set_status_flags__10TObjPlayerFUl(this, 577);
    return this;
}

}
