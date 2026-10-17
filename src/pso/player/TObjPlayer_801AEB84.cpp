#include "types.h"
#include "pso/player/TObjPlayer_801AEB84.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 add_actor_tp_bonus(void *, int);
s32 add_actor_hp_bonus(void *, int);
s32 get_class_index__10TObjPlayerFv(void *);
s32 is_camera_mode_active__10TObjPlayerFv();

extern "C" {
extern "C" {
extern "C" {
extern "C" {
extern "C" {
extern "C" {
#include "pso/misc/TRaderMapCore.h"

extern "C" {

void apply_luck_reward__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    ((TObjPlayer *)arg0)->add_lck((int) (var_r31));
    TObjPlayer::add_item_count_kind4((s32)((void *) (arg0 + 0x374)), (s32)((void *) (get_class_index__10TObjPlayerFv((void *) (arg0)))), 1);
}

}
void add_dfp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    ((TObjPlayer *)arg0)->add_dfp((int) (var_r31));
    TObjPlayer::try_add_item_count_kind3((s32)((void *) (arg0 + 0x374)), (s32)((void *) (get_class_index__10TObjPlayerFv((void *) (arg0)))), 1);
}

}
void add_evp_material__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    ((TObjPlayer *)arg0)->add_evp((int) (var_r31));
    TObjPlayer::try_add_item_count_type2((s32)((void *) (arg0 + 0x374)), (s32)((void *) (get_class_index__10TObjPlayerFv((void *) (arg0)))), 1);
}

}
void add_mst_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    ((TObjPlayer *)arg0)->add_mst((int) (var_r31));
    TObjPlayer::add_item_count((s32)((void *) (arg0 + 0x374)), (s32)((void *) (get_class_index__10TObjPlayerFv((void *) (arg0)))), 1);
}

}
void add_stat_and_item__10TObjPlayerFiUc(s32 arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        var_r31 *= 5;
    }
    ((TObjPlayer *)arg0)->add_stat((int) (var_r31));
    TObjPlayer::try_add_item((s32)((void *) (arg0 + 0x374)), (s32)((void *) (get_class_index__10TObjPlayerFv((void *) (arg0)))), 1);
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
