#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void sync_hp_damage__10TObjPlayerFPv(void *arg0);
void update_cane_cast__10TObjPlayerFi(s32 arg0);
void play_action_sound__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_800112A4(s32, s16);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, s32, M2C_UNK);
s32 is_mode_two_and_ready__10TObjPlayerFPv(s32);
M2C_UNK update_active_game_effect__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_8011F63C();
s32 TObjPlayer__sub_80121200();
M2C_UNK TObjPlayer__sub_8012B9B4(s32);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjectV8047c128_subtract_hp(s32, s16);
s16 obj_getS16_32E(s32);

void sync_hp_damage__10TObjPlayerFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r3;

    if (reset_key_machine_state__10TObjPlayerFv() != 0) {
        temp_r3 = obj_getS16_32E(M2C_FIELD(arg0, s32 *, 0xF0));
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x1F8) - temp_r3;
        if (temp_r0 != 0) {
            M2C_FIELD(arg0, s16 *, 0x1F8) = temp_r3;
        }
        if (temp_r0 > 0) {
            TObjectV8047c128_subtract_hp(M2C_FIELD(arg0, s32 *, 0xF0), temp_r0);
            TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0xF0), (s16) (temp_r0 / 2));
        }
    }
}

extern s32 tl_05;

void update_cane_cast__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        TObjPlayer__sub_8012B9B4(arg0);
        return;
    }
    update_active_game_effect__10TObjPlayerFPv(arg0);
}

extern const f32 lbl_805DAEC8;
extern const f32 lbl_805DAECC;

void play_action_sound__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 2:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 5:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x278));
        return;
    case 1:
        TObjPlayer__sub_803D9624(0, lbl_805DAEC8, lbl_805DAECC * M2C_FIELD(arg0, f32 *, 0x274), lbl_805DAEC8);
        return;
    case 3:
    case 4:
    case 6:
        play_particle_effect_once__10TObjPlayerFv();
        return;
    }
}

}
