#ifndef PSO_ENEMY_TOBJENEEPSILONGUARD_H
#define PSO_ENEMY_TOBJENEEPSILONGUARD_H

#include "types.h"

struct TObjEneEpsilonGuard
{
    u16 m_1c;
    u8 _pad1E[0xA];
    u16 m_28;
    u16 m_2a;
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
    u8 _pad54[0x8];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x3C];
    u32 m_a4;
    u8 _padA8[0x254];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x138];
    void* m_460;
    u8 _pad464[0x8];
    u32 m_46c;
    u16 m_470;
    u8 _pad472[0x4A];
    void* m_4bc;
    void *create(void *arg1, void *arg2, void *arg3, void *arg4);
    void init_model_and_state();
    s16 get_table_value_by_index();
    s32 all_children_gone();
    static void update_attack_pattern(void *arg0);
    void tick_stun_timer();
    void tick_timer_set_flag();
    static void record_camera_angle_samples();
    void render_body_effect();
    void draw_debug_line();
    void update_guard_flag();
    void init_params();
    void update_step();
    void update_position();
    void request_state8();
    void set_action_9();
    void dispatch_state(u32 arg1, s32 arg2);
    static s32 create_damage_font(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
    static void free_shared_resources();
    static void load_assets();
};

#endif
