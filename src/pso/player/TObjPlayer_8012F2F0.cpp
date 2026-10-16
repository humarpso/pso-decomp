#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

u8 get_slot_count__14TItemProShieldFv();
s32 refresh_owner_stats__5TItemFPv(s32);

void TObjPlayer::update_boss2tunnel() {
    if (((s32) *(s32 *)((s8 *)this + 0x1F8) != 0) && (TObjPlayer::get_player_list() == 1)) {
        setup_particle_once();
        TObjPlayer::load_projection_tex((s32)this, (s32)0);
    }
}

void TObjPlayer::apply_on_shield_state5(s32 arg0) {
    if (get_slot_count__14TItemProShieldFv() == 5) {
        refresh_owner_stats__5TItemFPv(arg0);
    }
}

}
