#ifndef PSO_OBJECT_TOBJWARPBOSSMULTI_H
#define PSO_OBJECT_TOBJWARPBOSSMULTI_H

#include "types.h"

struct TObjWarpBossMulti
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x14];
    u32 m_bc;
    u32 m_c0;
    u8 _padC4[0x10];
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
    u32 m_e8;
    u32 m_ec;
    u32 m_f0;
    u32 m_f4;
};

#endif
