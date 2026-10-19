#ifndef PSO_PLAYER_TOBJPLAYER_80011014_H
#define PSO_PLAYER_TOBJPLAYER_80011014_H

#include "types.h"

extern "C" {
void TObjPlayer__sub_8000FF4C(void *p, s16 v);
void TObjPlayer__sub_8001053C(u8 *arg0);
s16 TObjPlayer__sub_800194E8(void *p);
void TObjPlayer__sub_8001951C(void *p);
s32 TObjectV8047c128_subtract_hp(u8 *arg0, s16 arg1);
void activate_switch_attacks__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 add_actor_hp(u8 *arg0, s16 arg1);
s32 add_actor_tp(u8 *arg0, s32 arg1);
void add_id_to_slots__10TObjPlayerFiUs(s32 arg0, u16 arg1);
void apply_actor_gravity(TObjEnemy *enemy, s32 *arg1, f32 farg0);
void assign_slots_from_list(void *arg0, s32 arg1);
f32 atan2_float(f32 y, f32 x);
void attach_mine_trap__10TObjPlayerFiUi(s32 arg0, u32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(s32 arg0);
f32 calc_random_ratio__10TObjPlayerFv(void);
f32 calc_xz_distance_sq__10TObjPlayerFiUiPv(s32 arg0, u32 arg1, void *arg2);
s32 check_can_act__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 damage_hp__10TObjPlayerFii(s32 arg0, s32 arg1);
void enemy_set_heading_velocity(TObjEnemy *enemy, s32 arg1, f32 farg0);
f32 fabs_float(f32 x);
u16 fn_80010F4C(void *p);
s16 get_attack_params_atp_max(void *p);
s16 get_attack_params_atp_min(void *p);
s32 get_current_floor(void);
int get_item_field_6__10TObjPlayerFPv(void *p);
int get_player_data__10TObjPlayerFi(int a0);
s32 get_type__10TObjPlayerFPv(void *p);
u8 is_locally_controlled__10TObjPlayerFPv(u8 *arg0);
bool is_split_screen(void);
void main(void);
f32 newton_sqrtf(f32 x);
int obj_getPtr2B0_20(u8 *p);
s16 obj_getS16_2BA(u8 *p);
s16 obj_getS16_32C(u8 *p);
s16 obj_getS16_32E(u8 *p);
u8 obj_is_hit_receivable(u8 *arg0);
void play_shock_feedback__10TObjPlayerFii(s32 arg0, s32 arg1);
void show_meseta_label(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
void spawn_poison_effect__10TObjPlayerFii(s32 arg0, s32 arg1);
void spawn_slow_effect__10TObjPlayerFii(s32 arg0, s32 arg1);
void trigger_switch_attack__10TObjPlayerFPvi(void *arg0, s32 arg1);
void trigger_switch_attack__10TObjPlayerFi(s32 arg0);
s32 try_spend_actor_meseta(u8 *arg0, s32 arg1);
s32 vfunc_37__13TUnk_804806E8Fv(u8 *player);
s32 vfunc_41__13TUnk_804806E8Fv(u8 *player);
s32 update_defense_stat_status(u8 *player);
}

#endif
