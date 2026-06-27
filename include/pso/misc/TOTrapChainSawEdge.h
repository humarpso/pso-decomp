#ifndef PSO_MISC_TOTRAPCHAINSAWEDGE_H
#define PSO_MISC_TOTRAPCHAINSAWEDGE_H

#include "types.h"

struct TOTrapChainSawEdge
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
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x20];
    u32 m_f8;
    u32 m_fc;
    u32 m_100;
    u32 m_104;
};

#endif
