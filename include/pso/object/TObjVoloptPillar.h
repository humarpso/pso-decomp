#ifndef PSO_OBJECT_TOBJVOLOPTPILLAR_H
#define PSO_OBJECT_TOBJVOLOPTPILLAR_H

#include "types.h"

struct TObjVoloptPillar
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x4];
    u32 m_ac;
    u8 _padB0[0x4];
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
};

#endif
