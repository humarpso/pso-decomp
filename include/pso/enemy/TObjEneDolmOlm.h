#ifndef PSO_ENEMY_TOBJENEDOLMOLM_H
#define PSO_ENEMY_TOBJENEDOLMOLM_H

#include "types.h"

struct TObjEneDolmOlm
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x7C];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1CC];
    u32 m_2ac;
    u8 _pad2B0[0x78];
    u16 m_328;
    u8 _pad32A[0x2];
    s16 m_32c;
    u8 _pad32E[0xC];
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
    u8 _pad3AC[0x10];
    u32 m_3bc;
    u8 _pad3C0[0x4];
    u32 m_3c4;
    u32 m_3c8;
    u8 _pad3CC[0xC];
    void* m_3d8;
    u8 _pad3DC[0x8];
    u32 m_3e4;
    void load_params_from_table(s32 i);
    static void load_shared_resources();
    static void free_shared_resources();
    static void toggle_effect_render();
    void advance_position();
    void init_body_sub();
    static void reset_count();
};

#endif
