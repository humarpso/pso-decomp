#ifndef PSO_MISC_TWINDOWSUBMAG_H
#define PSO_MISC_TWINDOWSUBMAG_H

#include "types.h"

struct TWindowSubMag
{
    u8 m_1c;
    u8 m_1d;
    u8 m_1e;
    u8 _pad1F[0x1];
    s16 m_20;
    u8 _pad22[0x2];
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u32 m_48;
    u32 m_4c;
};

#endif
