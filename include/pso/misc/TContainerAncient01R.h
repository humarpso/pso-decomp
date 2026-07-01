#ifndef PSO_MISC_TCONTAINERANCIENT01R_H
#define PSO_MISC_TCONTAINERANCIENT01R_H

#include "types.h"

struct TContainerAncient01R
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x38];
    void* m_74;
    u8 _pad78[0x40];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x21C];
    void* m_2fc;
    u8 _pad300[0x26];
    u16 m_326;
};

#endif
