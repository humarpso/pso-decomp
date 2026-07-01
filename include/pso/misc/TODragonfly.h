#ifndef PSO_MISC_TODRAGONFLY_H
#define PSO_MISC_TODRAGONFLY_H

#include "types.h"

struct TODragonfly
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x40];
    u32 m_cc;
    u8 _padD0[0x4];
    void* m_d4;
    u8 _padD8[0x20];
    u32 m_f8;
    u32 m_fc;
};

#endif
