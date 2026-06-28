#ifndef PSO_MISC_TPHOTONRAINBOW_H
#define PSO_MISC_TPHOTONRAINBOW_H

#include "types.h"

struct TPhotonRainbow
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x2C];
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u8 _padA0[0x8];
    u32 m_a8;
};

#endif
