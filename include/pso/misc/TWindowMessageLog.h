#ifndef PSO_MISC_TWINDOWMESSAGELOG_H
#define PSO_MISC_TWINDOWMESSAGELOG_H

#include "types.h"

struct TWindowMessageLog
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x24];
    u32 m_90;
};

#endif
