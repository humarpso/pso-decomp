#ifndef PSO_ENEMY_TOBJENEGIBBLES_H
#define PSO_ENEMY_TOBJENEGIBBLES_H
#include "types.h"
#include <stddef.h>

struct TObjEneGibbles {
    void*vfunc_9();
    u32 resolve_sound_id(u32 sound_id);
    u8 unknown_00[0x18];
    void* virtual_table;
    u8 unknown_1C[0x430];
    static void set_min_clamped_entry_value(s32 arg0, s32 arg1, f32 farg0);
    s32 spawn_ground_impact_effects(void *pos, f32 farg0);
    void play_distance_sound();
    void update_shadow_height();
    void update_position();
    void sync_state();
    void update_move_state();
    void update_action_state();
    void update_death_sequence();
    void update_spawn_state();
    void init_state();
    void clamp_angle(s32 arg1);
    void init_params();
    static void *create(void *arg0);
    static void free_static();
    static void load_resources();
};
typedef char TObjEneGibbles_vtable_offset[(offsetof(TObjEneGibbles, virtual_table) == 0x18) ? 1 : -1];
typedef char TObjEneGibbles_size[(sizeof(TObjEneGibbles) ==0x44C) ?1:-1];
#endif
