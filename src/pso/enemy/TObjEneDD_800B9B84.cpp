#include "types.h"
#include "pso/enemy/TObjEneDD.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFv(void *);
s32 vec3_add_to(void *, void *, f32);
s32 subtract_vector(void *, void *);
extern s32 camera_ctrl_instance;
void project_sound_origin_from_camera(s32 arg0, u8 *arg1, f32 farg0);
}

extern "C" {

int is_local_client_floor_leader(void*);
int TObjPlayer__sub_801BA42C(void*);
int freeze_all_players__10TObjPlayerFv(void*);
s32 get_main_phase();
int is_any_teammate_in_state__10TObjPlayerFv(void*);

extern s32 enable_v2_features;
extern s32 game_difficulty_selection;

s32 TObjEneDD::check_v2_mode() {
    if (((s32) enable_v2_features != 0) && ((s32) game_difficulty_selection == 3)) {
        return 1;
    }
    return 0;
}

int TObjEneDD::get_target_state_a() { return TObjPlayer__sub_801BA42C(this); }
int TObjEneDD::get_target_state_b() { return freeze_all_players__10TObjPlayerFv(this); }

void project_sound_origin_from_camera(s32 arg0, u8 *arg1, f32 farg0) {
    f32 temp_f1;
    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (arg0));
    subtract_vector((void *) (arg1), (void *) (camera_ctrl_instance + 0x178));
    { f32 s = update_scale__15TObjBoss2TunnelFv((void *) (arg1)); temp_f1 = s * farg0; }
    *(f32 *)((s8 *)arg1 + 0) = (f32) (*(f32 *)((s8 *)arg1 + 0) * temp_f1);
    *(f32 *)((s8 *)arg1 + 4) = (f32) (*(f32 *)((s8 *)arg1 + 4) * temp_f1);
    *(f32 *)((s8 *)arg1 + 8) = (f32) (*(f32 *)((s8 *)arg1 + 8) * temp_f1);
    vec3_add_to((void *) (arg1), (void *) (camera_ctrl_instance + 0x178), (f32) (temp_f1));
}

int TObjEneDD::query_teammate_state() { return is_any_teammate_in_state__10TObjPlayerFv(this); }
int TObjEneDD::update_lobby_state() { return is_local_client_floor_leader(this); }
u8 TObjEneDD::is_phase_e() {
    return (u8) (get_main_phase() == 0xE);
}
u8 TObjEneDD::is_main_phase_15() {
    return (u8) (get_main_phase() == 0xF);
}

}
