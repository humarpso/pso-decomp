#ifndef PSO_BOSS_TBOSS3VOLOPTMONITOR_H
#define PSO_BOSS_TBOSS3VOLOPTMONITOR_H

#include "types.h"

struct TBoss3VoloptMonitor
{
    u8 _pad1C[0x14];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x2C2];
    s16 m_326;
    u8 _pad328[0x14];
    u16 m_33c;
    u8 _pad33E[0x2A];
    u32 m_368;
    u8 _pad36C[0x8];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x8];
    u32 m_388;
    s16 m_38c;
    s16 m_38e;
    s16 m_390;
};

#endif
