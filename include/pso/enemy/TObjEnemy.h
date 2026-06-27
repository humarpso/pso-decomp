#ifndef PSO_ENEMY_TOBJENEMY_H
#define PSO_ENEMY_TOBJENEMY_H

#include "types.h"

struct TObjEnemy
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x7C];
    u32 m_b0;
    u8 _padB4[0x278];
    s16 m_32c;
    u8 _pad32E[0x6];
    u32 m_334;
    u16 m_338;
    u16 m_33a;
    u16 m_33c;
    u16 m_33e;
    u32 m_340;
    u32 m_344;
    u32 m_348;
    u32 m_34c;
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u32 m_36c;
    u32 m_370;
};

#endif
