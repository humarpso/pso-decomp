#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_idle_entry__10TObjPlayerFPv(void* p);
void exit_idle_state__10TObjPlayerFv(void);
void update_action__10TObjPlayerFi(s32 arg0);
void start_animation__10TObjPlayerFPv(void *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
s32 add_actor_hp(s32, s32);
s32 TObjPlayer__sub_801AF290(s32);
u32 resolve_move_collision__10TObjPlayerFPv();
s32 rewind_position_history__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BE2D0(s32);
int zero_vec3(void*);
s32 get_idle_animation__10TObjPlayerFPv(void *);
s32 run_action_state_phase__10TObjPlayerFisi(void *, s16, s32);
s32 TObjPlayer__sub_801D1018(s32);
int clear_status_bit6__10TObjPlayerFPv(void*);
int TObjPlayer__sub_8001053C(void*);
s32 apply_velocity__10TObjPlayerFPv(s32);
s32 add_actor_tp(s32, s32);
int TObjPlayer__sub_8011E204(void*, void*);
s32 set_action_state__10TObjPlayerFPvss(void *, s32, s32);
int set_ring_action__10TObjPlayerFPvi(void*, void*);

int obj_clearFlags30(void*, void*);

void cleanup_idle_entry__10TObjPlayerFPv(void* p) { obj_clearFlags30(p, (void*)3840); TObjPlayer__sub_8011E204(p, (void*)128); set_ring_action__10TObjPlayerFPvi((char*)p + 0x5e0, (void*)0); clear_status_bit6__10TObjPlayerFPv(p); TObjPlayer__sub_8001053C(p); zero_vec3((char*)p + 0x5fc); }
void exit_idle_state__10TObjPlayerFv(void) {  }
void update_action__10TObjPlayerFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = resolve_move_collision__10TObjPlayerFPv();
    if (temp_r3 == 0U) {
        apply_velocity__10TObjPlayerFPv(arg0);
    } else if (temp_r3 == 1U) {
        rewind_position_history__10TObjPlayerFPv(arg0);
    }
    if ((TObjPlayer__sub_801BE2D0(arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        add_actor_tp(arg0, 1);
    }
    if ((TObjPlayer__sub_801D1018(arg0) != 0) && (TFontSmallLobby__sub_801AFEE0() == 0) && (TObjPlayer__sub_801AF290(arg0) != 0)) {
        add_actor_hp(arg0, 1);
    }
}
void start_animation__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 1;
    run_action_state_phase__10TObjPlayerFisi(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    cleanup_idle_entry__10TObjPlayerFPv((void*)(arg0));
    set_action_state__10TObjPlayerFPvss(arg0, 1, get_idle_animation__10TObjPlayerFPv(arg0));
}

}
