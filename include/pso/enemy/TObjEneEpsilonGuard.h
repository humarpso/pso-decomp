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
};

#endif
