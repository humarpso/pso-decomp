#ifndef PSO_ENEMY_TOBJENEMERILLLIA_H
#define PSO_ENEMY_TOBJENEMERILLLIA_H

#include "types.h"

struct TObjEneMerillLia
{
    u8 _pad1C[0x9C];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1CC];
    u32 m_2ac;
    u8 _pad2B0[0x76];
    u16 m_326;
    u16 m_328;
    u8 _pad32A[0x2];
    s16 m_32c;
    u8 _pad32E[0x6];
    u32 m_334;
    u8 _pad338[0x2];
    s16 m_33a;
    u16 m_33c;
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x8];
    u16 m_374;
    u16 m_376;
    u32 m_378;
    u32 m_37c;
    u8 _pad380[0x10];
    u32 m_390;
    u8 _pad394[0x14];
    void* m_3a8;
    s32 get_clamped_level();
    void clamp_and_apply_mode_param();
    void reset_state_clear_status();
    void init_attack_state();
    void reset_action_state();
    static void search_target(void *ov);
    static s32 update_emerge_state(void *ov);
    static s32 update_kafun_attack(void *p);
    void init_params_from_position();
    void select_action_by_distance();
    static void destroy_rocks();
    void load_entry_params(s32 i);
};

#endif
