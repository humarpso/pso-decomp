#ifndef PSO_BOSS_TBOSS3VOLOPTCORE_H
#define PSO_BOSS_TBOSS3VOLOPTCORE_H

#include "types.h"

struct TBoss3VoloptCore
{
    u8 _pad1C[0x88];
    u32 m_a4;
    u8 _padA8[0x10];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1D8];
    s16 m_2b8;
    s16 m_2ba;
    u8 _pad2BC[0x70];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xE];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x1C];
    u32 m_388;
    u8 _pad38C[0x4];
    u32 m_390;
    u8 _pad394[0x34];
    u32 m_3c8;
};

#endif
