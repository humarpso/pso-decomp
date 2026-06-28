#ifndef PSO_MISC_TWINDOWSUBCOMCARD_H
#define PSO_MISC_TWINDOWSUBCOMCARD_H

#include "types.h"

struct TWindowSubComCard
{
    u8 m_1c;
    u8 m_1d;
    u8 _pad1E[0x2];
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    void* m_30;
    u8 _pad34[0x24];
    u32 m_58;
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    u32 m_74;
    u32 m_78;
    u32 m_7c;
    u32 m_80;
    u32 m_84;
};

#endif
