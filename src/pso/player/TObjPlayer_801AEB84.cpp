#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_luck_reward__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_dfp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_evp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_mst_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void add_stat_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void set_speed_scaled_by_camera__10TObjPlayerFiUc(s32 arg0, u8 arg1);
void apply_speed_with_camera_scale__10TObjPlayerFiUc(s32 arg0, u8 arg1);
s32 test_action_mask__10TObjPlayerFPvi(s32, s32);
s32 get_game_play_mode();
M2C_UNK add_actor_tp_bonus(void *, int);
M2C_UNK add_actor_hp_bonus(void *, int);
int is_locally_controlled__10TObjPlayerFPv(void*);
void TObjPlayer__sub_801AEB80(void);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
int get_max_level__10TObjPlayerFv(void);
s32 TObjPlayer__sub_801AF868(s32);
s32 get_class_index__10TObjPlayerFPv(void *);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
s32 emit_idle_water_effect(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 has_water_ground_flag(s32);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 get_player_by_client_id(u16);
M2C_UNK add_dfp__10TObjPlayerFPvi(void *, int);
M2C_UNK add_evp__10TObjPlayerFPvi(void *, int);
M2C_UNK add_item_count__10TObjPlayerFiii(void *, void *, int);
M2C_UNK add_item_count_kind4__10TObjPlayerFiii(void *, void *, int);
M2C_UNK add_lck__10TObjPlayerFPvi(void *, int);
M2C_UNK add_mst__10TObjPlayerFPvi(void *, int);
M2C_UNK add_stat__10TObjPlayerFPvi(void *, int);
s32 check_camera_mode__10TObjPlayerFv();
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 get_main_phase();
s32 is_camera_mode_active__10TObjPlayerFv();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_technique_ready__8TTecCtrlFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
int test_flag_2000000__10TObjPlayerFPv(void*);
M2C_UNK try_add_item__10TObjPlayerFiii(void *, void *, int);
M2C_UNK try_add_item_count_kind3__10TObjPlayerFiii(void *, void *, int);
M2C_UNK try_add_item_count_type2__10TObjPlayerFiii(void *, void *, int);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
s32 update_movement_by_screen__10TObjPlayerFv(s32);

#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
extern "C" {
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void apply_luck_reward__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_lck__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    add_item_count_kind4__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (get_class_index__10TObjPlayerFPv((void *) (arg0))), (int) (1));
}

}
void add_dfp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_dfp__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    try_add_item_count_kind3__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (get_class_index__10TObjPlayerFPv((void *) (arg0))), (int) (1));
}

}
void add_evp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_evp__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    try_add_item_count_type2__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (get_class_index__10TObjPlayerFPv((void *) (arg0))), (int) (1));
}

}
void add_mst_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_mst__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    add_item_count__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (get_class_index__10TObjPlayerFPv((void *) (arg0))), (int) (1));
}

}
void add_stat_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_stat__10TObjPlayerFPvi((void *) (arg0), (int) (var_r31));
    try_add_item__10TObjPlayerFiii((void *) (arg0 + 0x374), (void *) (get_class_index__10TObjPlayerFPv((void *) (arg0))), (int) (1));
}

}
void set_speed_scaled_by_camera__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_actor_tp_bonus((void *) (arg0), (int) (var_r31));
}

}
void apply_speed_with_camera_scale__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    add_actor_hp_bonus((void *) (arg0), (int) (var_r31));
}

}

}
