#ifndef PSO_ENEMY_TOBJENEDD_H
#define PSO_ENEMY_TOBJENEDD_H

#include "types.h"

struct TObjEneDD
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u32 m_a8;
    u8 _padAC[0x74];
    void* m_120;
    u8 _pad124[0x124];
    void* m_248;
    u8 _pad24C[0x64];
    u32 m_2b0;
    u8 _pad2B4[0x72];
    s16 m_326;
    u8 _pad328[0x4C];
    u32 m_374;
    u32 m_378;
    u8 _pad37C[0x4];
    u32 m_380;
    u32 m_384;
    u32 m_388;
};

#endif
