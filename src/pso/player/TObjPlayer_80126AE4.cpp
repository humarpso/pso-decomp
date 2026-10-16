#include "types.h"
#include "pso/player/TUnk_804A2D88.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 refresh_owner_stats__5TItemFv(s32);
void TItemWeapon__ct(void *);

void TObjPlayer::apply_on_shield_state6(s32 arg0) {
    if (get_slot_count__14TItemProShieldFv() == 6) {
        refresh_owner_stats__5TItemFv(arg0);
    }
}

extern s32 lbl_804A2D88[];
extern s32 spawn_weapon_impact_effect[];

void *TUnk_804A2D88::init_with_update_handler() {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804A2D88;
    (*(s32 * *)((u8 *)this + 0x1EC)) = spawn_weapon_impact_effect;
    return this;
}

}
