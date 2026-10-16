#ifndef PSO_ENEMY_TOBJENERE7BERURA_H
#define PSO_ENEMY_TOBJENERE7BERURA_H

#include "types.h"

struct TObjEneRe7Berura
{
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x30];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1D8];
    s16 m_2b8;
    u8 _pad2BA[0x42];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4];
    s16 m_32c;
    u8 _pad32E[0x10];
    s16 m_33e;
    u8 _pad340[0x80];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
    u32 m_3cc;
    u32 m_3d0;
    u8 _pad3D4[0x4];
    void* m_3d8;
    u8 _pad3DC[0x10];
    u32 m_3ec;
    u8 _pad3F0[0xC];
    void* m_3fc;
    u8 _pad400[0x18];
    u32 m_418;
    u32 m_41c;
    void* m_420;
    u8 _pad424[0x24];
    void* m_448;
    void state_attack(s32 arg1);
    void handle_message_transition(s32 msg);
    s32 check_death_trigger();
    void play_band_sound();
    void reload_stats_from_tables();
    void destroy_parts();
    u8 is_over_limit();
    s32 step_toward_target(s32 arg1, s32 arg2);
    void init_fields4B8();
    static void init_part(s32 arg0);
    static s32 collect_node_matrices(void *arg0, int idx);
    void update_collision_center();
    void init_enemy();
    static void destroy_children();
    void *create();
    static void load_static_resources();
    static void advance_state();
    static void demo_frame_callback();
    void run_flash_warning_state(s32 arg1);
    void handle_state(s32 arg1);
    static void *spawn_punch(void *arg0);
    static void set_global_state(s32 arg0);
    void draw();
};

#endif
