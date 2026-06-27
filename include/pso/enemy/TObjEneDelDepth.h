#ifndef PSO_ENEMY_TOBJENEDELDEPTH_H
#define PSO_ENEMY_TOBJENEDELDEPTH_H

#include "types.h"

struct TObjEneDelDepth
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x298];
    void* m_2fc;
    u8 _pad300[0x74];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x20];
    void* m_3a0;
    u8 _pad3A4[0x3C];
    u32 m_3e0;
    u8 _pad3E4[0xC];
    u32 m_3f0;
};

#endif
