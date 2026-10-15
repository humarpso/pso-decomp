#ifndef PSO_ENEMY_TOBJENEME3SHINOWAMIRAGE_H
#define PSO_ENEMY_TOBJENEME3SHINOWAMIRAGE_H

#include "types.h"

struct TObjEneMe3ShinowaMirage
{
    u16 m_1c;
    u8 _pad1E[0xE];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u8 _pad34[0x70];
    u32 m_a4;
    u8 _padA8[0x27E];
    s16 m_326;
    u8 _pad328[0x9C];
    u32 m_3c4;
    u8 _pad3C8[0x8];
    u32 m_3d0;
    u32 m_3d4;
    u8 _pad3D8[0x10];
    void* m_3e8;
    u8 _pad3EC[0x10];
    u32 m_3fc;
    u8 _pad400[0x2C];
    u16 m_42c;
    u8 _pad42E[0x2];
    void* m_430;
    static void advance_camera_ctrl_step();
    void state_break_apart(s32 arg1);
    void state_cast_support(s32 arg1);
    void state_chase_target(s32 arg1);
    void update_by_distance();
    void apply_effect_pair();
    void update_player_state_default();
    f32 get_node_world_y();
    void init_enemy();
    void render();
    void clear_mirage();
    void set_flag_0x100();
    int init_mirage();
    void activate_mirage(s32 arg1);
    void run_task();
    void *create(void *arg1, void *arg2);
    static void set_slot_min_clamped_value(s32 arg0, f32 farg0);
    static void free_shared_resources();
};

#endif
