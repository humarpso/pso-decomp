#ifndef PSO_MISC_TFOGCTRL_H
#define PSO_MISC_TFOGCTRL_H

#include "types.h"

struct TFogCtrl
{
    u32 m_1c;
    u32 m_20;
    u8 _pad24[0x15C];
    u32 m_180;
    u32 m_184;
    u8 _pad188[0x14];
    u32 m_19c;
    u32 m_1a0;
    u32 m_1a4;
    u32 m_1a8;
    u32 m_1ac;
    u32 m_1b0;
    u32 m_1b4;
    u8 _pad1B8[0x8];
    u32 m_1c0;
    u32 m_1c4;
};

#endif
