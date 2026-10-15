#ifndef PSO_ENEMY_TOBJENERECON_H
#define PSO_ENEMY_TOBJENERECON_H

#include "types.h"

struct TObjEneRecon
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x6];
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x18];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x18];
    u32 m_80;
    u8 _pad84[0x20];
    u32 m_a4;
    u8 _padA8[0x1A0];
    void* m_248;
    u8 _pad24C[0x90];
    u32 m_2dc;
    u8 _pad2E0[0x1C];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x68];
    u32 m_390;
    u8 _pad394[0x78];
    void* m_40c;
    u8 _pad410[0x8];
    u32 m_418;
    u8 _pad41C[0xC];
    void* m_428;
    u8 _pad42C[0x8];
    u16 m_434;
    u8 _pad436[0x2];
    void* m_438;
    u8 _pad43C[0x8];
    u32 m_444;
    u8 _pad448[0x30];
    u32 m_478;
    u32 m_47c;
    void* m_480;
    u8 _pad484[0x10];
    u32 m_494;
    f32 get_field_4d4();
    f32 get_field_4d0();
    static void destroy_instance();
    static void alloc_if_valid_state();
    static void set_active();
    static void *create_bomb(void *arg0, void *arg1, void *arg2);
    void render_shadows();
    static void advance_intro_stage();
    void update_ground_probe();
    u8 is_anim_5();
    void spawn_trap_a();
    void spawn_trap_b();
    static f32 approach_value(f32 farg0, f32 farg1);
    void clamp_min_height();
    void update_position_from_offsets();
    void init_state();
    static void release_static_instance();
    static void *create(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
    static void load_resources();
    void draw_with_debug_info();
    void update_if_800BB858();
    void remove_tracked_id(s32 id);
    u16 alloc_child_id();
    void update_floor_probe();
    u8 is_anim_6();
    void handle_death_state(s32 arg1);
    void handle_action_state(s32 arg1);
    void update_state(s32 arg1);
    void handle_state(s32 arg1);
    void update_child_spawn();
    u8 is_out_of_range();
    void restore_position();
    void set_state_6();
    void*get_field_38_ptr();
    void remove_child_entity(u8 *arg1);
    s32 has_child_in_anim_5();
    s32 is_below_child_limit(u16 arg1);
};

#endif
