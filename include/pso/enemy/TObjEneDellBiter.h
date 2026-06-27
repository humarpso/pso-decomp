#ifndef PSO_ENEMY_TOBJENEDELLBITER_H
#define PSO_ENEMY_TOBJENEDELLBITER_H

#include "types.h"

struct TObjEneDellBiter
{
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
};

#endif
