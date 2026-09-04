#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_tech_effect__10TObjPlayerFPv(void *arg0);
void play_side_step_particle__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80125090(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_8011E2FC(void *, f32);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
M2C_UNK update_active_game_effect__10TObjPlayerFPv(void *);
s32 get_player_list__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80124C90(void *);
s16 get_tech_level__10TObjPlayerFPv(s32);

extern f32 lbl_805DAD3C;

void update_tech_effect__10TObjPlayerFPv(void *arg0) {
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if (get_tech_level__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) {
            TObjPlayer__sub_8011E2FC(arg0, lbl_805DAD3C);
            TObjPlayer__sub_80124C90(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}

void play_side_step_particle__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = get_player_list__10TObjPlayerFv();
    switch (temp_r3) {
    case 1:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 4:
        play_particle_effect_once__10TObjPlayerFv();
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    }
}

void TObjPlayer__sub_80125090(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) + 0xAAA);
}

}
