#ifndef PSO_MISC_TOTRAP_H
#define PSO_MISC_TOTRAP_H

#include "types.h"

struct TOTrap
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x1C];
    u32 m_80;
    u32 m_84;
    u8 _pad88[0x70];
    u32 m_f8;
    u8 _padFC[0x1AC];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x14];
    u16 m_33c;
    u8 _pad33E[0x2];
    u32 m_340;
};

#endif
