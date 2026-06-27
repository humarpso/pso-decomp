#ifndef PSO_MISC_TEFFCLITICAL_H
#define PSO_MISC_TEFFCLITICAL_H

#include "types.h"

struct TEffClitical
{
    u8 _pad1C[0x4];
    void* m_20;
    u8 _pad24[0x8];
    void* m_2c;
    u8 _pad30[0xC];
    void* m_3c;
    u8 _pad40[0x30];
    u32 m_70;
    u32 m_74;
};

#endif
