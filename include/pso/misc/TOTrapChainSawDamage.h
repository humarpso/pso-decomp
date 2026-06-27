#ifndef PSO_MISC_TOTRAPCHAINSAWDAMAGE_H
#define PSO_MISC_TOTRAPCHAINSAWDAMAGE_H

#include "types.h"

struct TOTrapChainSawDamage
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x58];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u8 _padCC[0x8];
    u32 m_d4;
    u8 _padD8[0x18];
    u32 m_f0;
    u8 _padF4[0x4];
    u32 m_f8;
    u8 _padFC[0x4];
    u32 m_100;
    u32 m_104;
    u32 m_108;
};

#endif
