#ifndef PSO_MISC_TWINDOWINPUTNUMBER_H
#define PSO_MISC_TWINDOWINPUTNUMBER_H

#include "types.h"

struct TWindowInputNumber
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    u16 m_60;
    u8 _pad62[0x1];
    u8 m_63;
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    void* m_74;
};

#endif
