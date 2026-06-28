#ifndef PSO_MISC_TWINDOWCTRL_H
#define PSO_MISC_TWINDOWCTRL_H

#include "types.h"

struct TWindowCtrl
{
    u16 m_1c;
    u16 m_1e;
    u16 m_20;
    u16 m_22;
    u32 m_24;
    u16 m_28;
    u8 _pad2A[0x2];
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u8 _pad48[0x4C];
    void* m_94;
};

#endif
