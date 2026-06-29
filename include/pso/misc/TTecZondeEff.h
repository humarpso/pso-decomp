#ifndef PSO_MISC_TTECZONDEEFF_H
#define PSO_MISC_TTECZONDEEFF_H

#include "types.h"

struct TTecZondeEff
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u8 _pad3C[0x20C];
    u32 m_248;
    u32 m_24c;
    u32 m_250;
    u32 m_254;
    u32 m_258;
    u16 m_25c;
    s16 m_25e;
};

#endif
