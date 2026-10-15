#include "types.h"

extern "C" {

void twinkle_star_turn_stars(void *arg0);
void twinkle_star_spin(void *arg0);
void twinkle_star_marker(s32 arg0);
s32 play_particle_effect_once__10TObjPlayerFv();
s32 spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, s32, s32);
s32 get_attack_stage__11TItemWeaponFPv();
s32 get_player_list__10TObjPlayerFv();
s32 rotate_matrix_y(s32, s32);

void twinkle_star_turn_stars(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_y(0, -*(s32 *)((s8 *)arg0 + 0x1F8));
    case 2:
        return;
    }
}

void twinkle_star_spin(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (*(s32 *)((s8 *)arg0 + 0x1F8) + 0xCCC);
}

extern s32 tl_05;

void twinkle_star_marker(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 4);
    }
}

}
