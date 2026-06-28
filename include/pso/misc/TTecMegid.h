#ifndef PSO_MISC_TTECMEGID_H
#define PSO_MISC_TTECMEGID_H

#include "types.h"

struct TTecMegid
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0x34];
    u32 m_58;
    u8 _pad5C[0x6A];
    s16 m_c6;
    u16 m_c8;
    u8 _padCA[0x2E];
    u32 m_f8;
    u8 _padFC[0x34];
    u32 m_130;
    u8 _pad134[0x40];
    u32 m_174;
};

#endif
