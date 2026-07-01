#ifndef PSO_MISC_TOSENSORANCIENT01_H
#define PSO_MISC_TOSENSORANCIENT01_H

#include "types.h"

struct TOSensorAncient01
{
    u8 _pad1C[0x18];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x24];
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x2C];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    u8 _padD4[0x14];
    u32 m_e8;
    u32 m_ec;
    u8 _padF0[0x4];
    u32 m_f4;
};

#endif
