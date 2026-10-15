#ifndef PSO_ENEMY_TOBJENEME3SINOWZOA_H
#define PSO_ENEMY_TOBJENEME3SINOWZOA_H

#include "types.h"

struct TObjEneMe3SinowZoa
{
    u8 _pad1C[0x30A];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u8 _pad3C4[0x8];
    u32 m_3cc;
    u8 _pad3D0[0x44];
    void* m_414;
    void state_knockback(s32 arg1);
    void handle_state_substate(s32 arg1);
    void state_chase_target(s32 arg1);
    void update_state_action(s32 arg1);
    void state_chase(s32 arg1);
    void update_distance_state();
    f32 get_node_height();
    void setup_move_bounds();
    void copy_pos_with_height_offset();
    void*init_common();
    s32 check_floor_contact(void *arg1);
    void check_and_notify();
    void render_with_stealth_debug();
    void update_move();
    static void set_entry_value_clamped(s32 arg0, f32 farg0);
    static void free_resources();
};

#endif
