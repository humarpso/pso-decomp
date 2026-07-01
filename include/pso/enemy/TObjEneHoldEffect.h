#ifndef PSO_ENEMY_TOBJENEHOLDEFFECT_H
#define PSO_ENEMY_TOBJENEHOLDEFFECT_H

#include "types.h"

struct TObjEneHoldEffect
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    u16 m_94;
    u8 _pad96[0x2];
    u32 m_98;
    u32 m_9c;
};

#endif
