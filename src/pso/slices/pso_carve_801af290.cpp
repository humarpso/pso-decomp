#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 get_game_play_mode();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 test_action_mask__10TObjPlayerFPvi(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 emit_idle_water_effect(s32);
s32 emit_movement_effect_at__10TObjPlayerFPv(s32);
s32 has_water_ground_flag(s32);
int is_locally_controlled__10TObjPlayerFPv(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int prepare_heavy_attack_particles_default__10TObjPlayerFPv(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

int TObjPlayer__sub_801AF290(void) { return 0; }

}
