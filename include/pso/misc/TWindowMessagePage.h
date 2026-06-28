#ifndef PSO_MISC_TWINDOWMESSAGEPAGE_H
#define PSO_MISC_TWINDOWMESSAGEPAGE_H

#include "types.h"

struct TWindowMessagePage
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x6E];
    u32 m_90;
    u32 m_94;
};

#endif
