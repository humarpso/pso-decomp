#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
int is_locally_controlled__10TObjPlayerFPv(void*);
s32 obj_getField1c(void *);
s32 init_pad_binding(void *, void *, int);
void init_local_pad_binding__10TObjPlayerFPv(u8 *arg0);
s32 get_character_save_record(u32);
s32 get_card_window_field_244__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

s32 test_action_mask__10TObjPlayerFl(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 emit_idle_water_effect(s32);
s32 has_water_ground_flag(s32);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);

s32 get_card_window_field_244__10TObjPlayerFPv(u8 *arg0) {
    return *(s32 *)((s8 *)(get_character_save_record((u32) ((u16)obj_getField1c(arg0)))) + 0x244);
}

void init_local_pad_binding__10TObjPlayerFPv(u8 *arg0) {
    if (((s32)is_locally_controlled__10TObjPlayerFPv((void*)(arg0))) != 0) {
        init_pad_binding((void *) (arg0 + 0x550), (void *) (obj_getField1c((void *) (arg0))), (int) ((s16) *(s32 *)((s8 *)arg0 + 0x3D0)));
    }
}

}

#include "types.h"

extern "C" {

void stop_force_if_alive__10TObjPlayerFPv(void* p) { if (is_locally_controlled__10TObjPlayerFPv(p) != 0) { TObjPlayer__sub_801BEF60((char*)p + 0x550, (void*)0); } }
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p) { if (test_flag_2000000__10TObjPlayerFPv(p) == 0) { ((TObjPlayer *)((char*)p + 0x384))->prepare_heavy_attack_particles_default(); } }

}

#include "types.h"

extern "C" {
void TObjPlayer__vt70(u8 *arg0);
void TObjPlayer__vt69(u8 *arg0);
void TObjPlayer__vt68(u8 *arg0);
void TObjPlayer__vt67(u8 *arg0);
}

extern "C" {

void TObjPlayer__vt70(u8 *arg0) {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) != 0 || check_flag_800000__10TObjPlayerFPv((s32)arg0) != 0) {
        return;
    }
    ((TObjPlayer *)(arg0 + 0x384))->emit_zalure_support_effect_at();
}

void TObjPlayer__vt69(u8 *arg0) {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) != 0 || check_flag_800000__10TObjPlayerFPv((s32)arg0) != 0) {
        return;
    }
    ((TObjPlayer *)(arg0 + 0x384))->emit_deband_support_effect_at();
}

void TObjPlayer__vt68(u8 *arg0) {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) != 0 || check_flag_800000__10TObjPlayerFPv((s32)arg0) != 0) {
        return;
    }
    ((TObjPlayer *)(arg0 + 0x384))->emit_jellen_support_effect_default();
}
void TObjPlayer__vt67(u8 *arg0) {
    if (test_flag_2000000__10TObjPlayerFPv((void*)(arg0)) != 0 || check_flag_800000__10TObjPlayerFPv((s32)arg0) != 0) {
        return;
    }
    ((TObjPlayer *)(arg0 + 0x384))->emit_shifta_support();
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"
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
