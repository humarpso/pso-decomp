#ifndef PSO_MISC_TODOORLABO_H
#define PSO_MISC_TODOORLABO_H

#include "types.h"

struct TODoorLabo
{
    u8 _pad1C[0xA0];
    u32 m_bc;
    u8 _padC0[0x14];
    u32 m_d4;
    u8 _padD8[0x20];
    u32 m_f8;
};

#endif
