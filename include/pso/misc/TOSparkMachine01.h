#ifndef PSO_MISC_TOSPARKMACHINE01_H
#define PSO_MISC_TOSPARKMACHINE01_H

#include "types.h"

struct TOSparkMachine01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x3C];
    u8 m_a0;
    u8 _padA1[0x1];
    u8 m_a2;
    u8 m_a3;
};

#endif
