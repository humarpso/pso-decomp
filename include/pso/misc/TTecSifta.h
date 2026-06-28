#ifndef PSO_MISC_TTECSIFTA_H
#define PSO_MISC_TTECSIFTA_H

#include "types.h"

struct TTecSifta
{
    u32 m_1c;
    u8 _pad20[0x84];
    s16 m_a4;
    u8 _padA6[0x2];
    u16 m_a8;
    u8 _padAA[0x2];
    u32 m_ac;
    u8 _padB0[0x2C];
    u32 m_dc;
    u32 m_e0;
    u8 _padE4[0x58];
    u32 m_13c;
};

#endif
