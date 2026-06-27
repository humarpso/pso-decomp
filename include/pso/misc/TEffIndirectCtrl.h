#ifndef PSO_MISC_TEFFINDIRECTCTRL_H
#define PSO_MISC_TEFFINDIRECTCTRL_H

#include "types.h"

struct TEffIndirectCtrl
{
    u32 m_1c;
    u32 m_20;
    u8 m_24;
    u8 m_25;
    u8 _pad26[0x2];
    u32 m_28;
    u32 m_2c;
    void* m_30;
    u8 _pad34[0x8];
    u32 m_3c;
    u32 m_40;
    u16 m_44;
    u16 m_46;
};

#endif
