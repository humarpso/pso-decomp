#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
int is_locally_controlled__10TObjPlayerFPv(void*);
s32 obj_getField1c(void *);
s32 init_pad_binding(void *, void *, int);
s32 get_character_save_record(u32);
s32 test_action_mask__10TObjPlayerFl(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 emit_idle_water_effect(s32);
s32 has_water_ground_flag(s32);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);

s32 TObjPlayer::get_card_window_field_244() {
    return *(s32 *)((s8 *)(get_character_save_record((u32) ((u16)obj_getField1c(((u8 *)this))))) + 0x244);
}

void TObjPlayer::init_local_pad_binding() {
    if (((s32)is_locally_controlled__10TObjPlayerFPv((void*)(((u8 *)this)))) != 0) {
        init_pad_binding((void *) (((u8 *)this) + 0x550), (void *) (obj_getField1c((void *) (((u8 *)this)))), (int) ((s16) this->m_3d0));
    }
}

void TObjPlayer::stop_force_if_alive() { if (is_locally_controlled__10TObjPlayerFPv(this) != 0) { TObjPlayer__sub_801BEF60((char*)this + 0x550, (void*)0); } }
void TObjPlayer::update_battle_control_if_unlocked() { if (test_flag_2000000__10TObjPlayerFPv(this) == 0) { ((TObjPlayer *)((char*)this + 0x384))->prepare_heavy_attack_particles_default(); } }

void TObjPlayer::enemy_spawn_zalure_effect() {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(((u8 *)this))) != 0 || check_flag_800000__10TObjPlayerFPv((s32)((u8 *)this)) != 0) {
        return;
    }
    ((TObjPlayer *)(((u8 *)this) + 0x384))->emit_zalure_support_effect_at();
}

void TObjPlayer::trigger_switch_attack() {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(((u8 *)this))) != 0 || check_flag_800000__10TObjPlayerFPv((s32)((u8 *)this)) != 0) {
        return;
    }
    ((TObjPlayer *)(((u8 *)this) + 0x384))->emit_deband_support_effect_at();
}

void TObjPlayer::enemy_spawn_jellen_effect() {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(((u8 *)this))) != 0 || check_flag_800000__10TObjPlayerFPv((s32)((u8 *)this)) != 0) {
        return;
    }
    ((TObjPlayer *)(((u8 *)this) + 0x384))->emit_jellen_support_effect_default();
}
void TObjPlayer::apply_switch_attack() {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(((u8 *)this))) != 0 || check_flag_800000__10TObjPlayerFPv((s32)((u8 *)this)) != 0) {
        return;
    }
    ((TObjPlayer *)(((u8 *)this) + 0x384))->emit_shifta_support();
}

}

#include "pso/misc/TRaderMapCore.h"

extern "C" {

void TObjPlayer::update_movement_effects() {
    s32 arg0 = (s32)this;
    if ((is_technique_ready__8TTecCtrlFv() != 0) && (TObjPlayer__sub_801AF868(arg0) == 0) && (update_movement_by_screen__10TObjPlayerFv(arg0) != 0) && (test_action_mask__10TObjPlayerFl(arg0, 0x408000) == 0) && (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) == 0) && (check_flag_800000__10TObjPlayerFPv(arg0) == 0)) {
        ((TObjPlayer *)(arg0 + 0x384))->emit_movement_effect_at();
    }
    if ((test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) == 0) && (test_action_mask__10TObjPlayerFl(arg0, 2) != 0) && (has_water_ground_flag(arg0 + 0x360) != 0)) {
        emit_idle_water_effect(arg0 + 0x384);
    }
}
int TObjPlayer::get_max_level() { return 199; }

}
