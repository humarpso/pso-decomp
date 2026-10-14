#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void twinkle_star_turn_stars(void *arg0);
void twinkle_star_spin(void *arg0);
void twinkle_star_marker(s32 arg0);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK spawn_cane_effects__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
s32 get_attack_stage__11TItemWeaponFPv();
s32 get_player_list__10TObjPlayerFv();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);

void twinkle_star_turn_stars(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        play_particle_effect_once__10TObjPlayerFv();
        rotate_matrix_y(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
    case 2:
        return;
    }
}

void twinkle_star_spin(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0xCCC);
}

extern s32 tl_05;

void twinkle_star_marker(s32 arg0) {
    if (get_attack_stage__11TItemWeaponFPv() == 0) {
        spawn_cane_effects__10TObjPlayerFiUiii(tl_05, arg0, 2, 4);
    }
}

}
