#ifndef PSO_BOSS_TBOSS3VOLOPT_H
#define PSO_BOSS_TBOSS3VOLOPT_H

#include "types.h"

struct TBoss3Volopt
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x248];
    void* m_284;
    u8 _pad288[0x74];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4C];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x3C];
    u32 m_3bc;
};

#endif
