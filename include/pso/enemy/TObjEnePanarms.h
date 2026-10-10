#ifndef PSO_ENEMY_TOBJENEPANARMS_H
#define PSO_ENEMY_TOBJENEPANARMS_H

#include "types.h"

struct TObjEnePanarms
{
    void set_random_action_timer(int minimum, int range);

    u8 _pad00[0x1C];
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    s16 m_2c;
    u8 _pad2E[0x6];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    u8 _pad54[0x20];
    void* m_74;
    u8 _pad78[0x38];
    u32 m_b0;
    u8 _padB4[0x1F4];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x2C];
    s16 m_32c;
    u8 _pad32E[0x10];
    u16 m_33e;
    u8 _pad340[0x4C];
    u32 m_38c;
    u32 m_390;
    u8 _pad394[0x8];
    u32 m_39c;
    void* m_3a0;
    u8 _pad3A4[0x10];
    s32 action_timer;
    u8 _pad3B8[0x2C];
    u32 m_3e4;
    u32 m_3e8;
    u32 m_3ec;
    u8 _pad3F0[0x4];
    u32 m_3f4;
    u32 m_3f8;
    u32 m_3fc;
    void* m_400;
    u8 _pad404[0x70];
    u32 m_474;
    u32 m_478;
};

#endif
