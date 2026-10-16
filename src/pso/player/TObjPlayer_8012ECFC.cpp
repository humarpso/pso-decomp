#include "types.h"
#include "pso/item/TUnk_804A6010.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void twinkle_star_turn_stars(void *arg0);
s32 spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFv();
s32 rotate_matrix_y(s32, s32);

void twinkle_star_turn_stars(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer::get_player_list();
    switch (temp_r3) {
    case 1:
        TObjPlayer::play_particle_effect_once();
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    case 3:
        TObjPlayer::play_particle_effect_once();
        rotate_matrix_y(0, -*(s32 *)((s8 *)arg0 + 0x1F8));
    case 2:
        return;
    }
}

void TUnk_804A6010::update_weapon() {
    *(s32 *)((s8 *)this + 0x1F8) = (s32) (*(s32 *)((s8 *)this + 0x1F8) + 0xCCC);
}

extern s32 tl_05;

void TUnk_804A6010::emit_marker_effects() {
    s32 arg0 = (s32)this;
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 4);
    }
}

}
