#ifndef PSO_ENEMY_TOBJENEBM3FLY_H
#define PSO_ENEMY_TOBJENEBM3FLY_H

#include "types.h"
#include <dolphin/mtx.h>
#include <stddef.h>

struct TObjEneBm3Fly {
    void sub_800B1634();
    int was_hit_by_ranged();
    void update_collide_flag();
    void clamp_flight_height();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();

    u8 base_state[0x60];
    s32 facing_angle;
    u8 unknown064[0x2FC - 0x64];
    Vec position;
    u8 unknown308[0x326 - 0x308];
    s16 animation_id;
    u8 unknown328[0x418 - 0x328];
    u16 owner_id;
    u8 unknown41A[0x458 - 0x41A];
    u8* particle_effect;
    s32 alternate_phase;
    void store_position();
    s32 init_child_params();
    static void release_shared_data();
    void *create(void *arg1, void *arg2, void *arg3, void *arg4);
    static void load_resources();
    void play_pitched_cue();
};

typedef char TObjEneBm3Fly_facing_angle_offset[(offsetof(TObjEneBm3Fly, facing_angle) == 0x60) ? 1 : -1];
typedef char TObjEneBm3Fly_position_offset[(offsetof(TObjEneBm3Fly, position) == 0x2FC) ? 1 : -1];
typedef char TObjEneBm3Fly_animation_id_offset[(offsetof(TObjEneBm3Fly, animation_id) == 0x326) ? 1 : -1];
typedef char TObjEneBm3Fly_owner_id_offset[(offsetof(TObjEneBm3Fly, owner_id) == 0x418) ? 1 : -1];
typedef char TObjEneBm3Fly_particle_effect_offset[(offsetof(TObjEneBm3Fly, particle_effect) == 0x458) ? 1 : -1];
typedef char TObjEneBm3Fly_alternate_phase_offset[(offsetof(TObjEneBm3Fly, alternate_phase) == 0x45C) ? 1 : -1];
#endif
