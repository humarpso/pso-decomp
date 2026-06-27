#ifndef PSO_BOSS_TBOSS6ROCK_H
#define PSO_BOSS_TBOSS6ROCK_H

#include "types.h"

struct TBoss6Rock
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u8 _pad60[0x4C];
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
    u32 m_bc;
    u32 m_c0;
    u32 m_c4;
    u32 m_c8;
    u8 _padCC[0x8];
    void* m_d4;
    u8 _padD8[0xC];
    u32 m_e4;
};

#endif
