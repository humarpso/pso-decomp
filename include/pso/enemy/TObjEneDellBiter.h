#ifndef PSO_ENEMY_TOBJENEDELLBITER_H
#define PSO_ENEMY_TOBJENEDELLBITER_H

#include "types.h"

struct TObjEneDellBiter
{
    void render();
    void run_task();
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x298];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u32 m_3c4;
    u8 _pad3C8[0xC];
    void* m_3d4;
    u8 _pad3D8[0x10];
    u32 m_3e8;
    u8 _pad3EC[0x4];
    void* m_3f0;
    u8 _pad3F4[0x6C];
    void* m_460;
    u8 _pad464[0x20];
    u32 m_484;
    u8 _pad488[0x34];
    u32 m_4bc;
    static void step_demo_script();
    void update_state(s32 arg1);
    s32 check_low_hp_transition();
    void spawn_front_particle();
    void update_attack_effect();
    void init_target_offsets();
    void update_particle_emitters();
    void set_effect_pos_above_self();
    void init_params();
    static void set_min_clamped_entry_value(s32 arg0, f32 farg0);
    static void destroy_static_instance();
    static void load_resources();
    void *init_instance(void *arg1, void *arg2, void *arg3, void *arg4);
};

#endif
