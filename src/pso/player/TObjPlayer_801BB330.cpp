#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__10TObjPlayerFv(u8 *arg0);
s32 get_type__10TObjPlayerFPv(void *);
s32 check_flag__10TObjPlayerFPvi(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80154E3C(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK update_movement_effects__10TObjPlayerFi(void *);
M2C_UNK update_subsystems__10TObjPlayerFi(void *);
M2C_UNK update_facing_vector__10TObjPlayerFPv(void *);
M2C_UNK update_status_effects__10TObjPlayerFPv(void *);
M2C_UNK update_position_history__10TObjPlayerFPv(void *);
M2C_UNK calc_attach_pos__10TObjPlayerFPv(void *);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK handle_state2_transitions__10TObjPlayerFPv();
M2C_UNK copy_offset_position__10TObjPlayerFPvPv(void *, void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, s16, M2C_UNK);

s32 obj_testFlags30(void *, M2C_UNK);

void run_task__10TObjPlayerFv(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r0_2;

    handle_state2_transitions__10TObjPlayerFPv();
    update_subsystems__10TObjPlayerFi(arg0);
    update_position_history__10TObjPlayerFPv(arg0);
    update_status_effects__10TObjPlayerFPv(arg0);
    run_action_state_phase__10TObjPlayerFisi(arg0, M2C_FIELD(arg0, s16 *, 0x326), 1);
    advance_animation_playback(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    copy_position__20TBoss3VoloptHiraisinFi(arg0);
    copy_offset_position__10TObjPlayerFPvPv(arg0 + 0x84C, arg0);
    if (obj_testFlags30(arg0, 0x800) != 0) {
        TObjPlayer__sub_80154E3C(arg0);
    } else if (get_type__10TObjPlayerFPv(arg0 + 0x828) == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x324);
        switch (temp_r0) {
        case 1:
            TObjPlayer__sub_80154E3C(arg0);
            check_enemy_body_collisions(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        case 6:
        case 2:
            TObjPlayer__sub_80154E3C(arg0);
            break;
        case 3:
            TObjPlayer__sub_80154E3C(arg0);
            check_enemy_body_collisions(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x324);
        switch (temp_r0_2) {
        case 3:
        case 1:
            check_object_collisions__10TObjPlayerFPv(arg0);
            check_enemy_body_collisions(arg0);
            update_enemy_collision_flags__10TObjPlayerFPv(arg0);
            break;
        case 2:
            if (check_flag__10TObjPlayerFPvi(arg0, 4) != 0) {
                TObjPlayer__sub_80154E3C(arg0);
            } else {
                check_object_collisions__10TObjPlayerFPv(arg0);
            }
            break;
        case 6:
            TObjPlayer__sub_80154E3C(arg0);
            break;
        }
    }
    update_movement_effects__10TObjPlayerFi(arg0);
    update_facing_vector__10TObjPlayerFPv(arg0);
}

}
