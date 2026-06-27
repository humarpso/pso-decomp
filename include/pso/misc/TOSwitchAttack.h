#ifndef PSO_MISC_TOSWITCHATTACK_H
#define PSO_MISC_TOSWITCHATTACK_H

#include "types.h"

struct TOSwitchAttack
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x58];
    u32 m_9c;
    u16 m_a0;
    u16 m_a2;
    u16 m_a4;
    u8 m_a6;
    u8 m_a7;
    u32 m_a8;
};

#endif
