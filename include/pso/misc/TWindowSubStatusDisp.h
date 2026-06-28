#ifndef PSO_MISC_TWINDOWSUBSTATUSDISP_H
#define PSO_MISC_TWINDOWSUBSTATUSDISP_H

#include "types.h"

struct TWindowSubStatusDisp
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x34];
    u32 m_5c;
    s16 m_60;
    u16 m_62;
    u32 m_64;
    u32 m_68;
};

#endif
