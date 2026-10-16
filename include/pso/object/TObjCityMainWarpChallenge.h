#ifndef PSO_OBJECT_TOBJCITYMAINWARPCHALLENGE_H
#define PSO_OBJECT_TOBJCITYMAINWARPCHALLENGE_H

#include "types.h"

struct TObjCityMainWarpChallenge
{
    void count_players_in_warp_radius();
    void update_challenge_state();
    void trigger_warp_effect(s32);
    void send_6x6A_set_boss_warp_flags(u16);
    s32 are_all_players_in_range();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x18];
    u32 m_a4;
    u8 _padA8[0xC];
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x4];
    s16 m_dc;
    s16 m_de;
    s16 m_e0;
    s16 m_e2;
    u8 _padE4[0x80];
    u32 m_164;
    u32 m_168;
    u32 m_16c;
    void update_state();
    void render();
    void run_task();
};

#endif
