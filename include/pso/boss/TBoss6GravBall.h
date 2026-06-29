#ifndef PSO_BOSS_TBOSS6GRAVBALL_H
#define PSO_BOSS_TBOSS6GRAVBALL_H

#include "types.h"

struct TBoss6GravBall
{
    u8 _pad1C[0x90];
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    u8 _padB8[0x8];
    u32 m_c0;
    u32 m_c4;
    void* m_c8;
};

#endif
