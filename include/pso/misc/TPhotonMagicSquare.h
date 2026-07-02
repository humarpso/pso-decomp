#ifndef PSO_MISC_TPHOTONMAGICSQUARE_H
#define PSO_MISC_TPHOTONMAGICSQUARE_H

#include "types.h"

struct TPhotonMagicSquare
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u8 _pad38[0x28];
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x24];
    u32 m_90;
    u8 _pad94[0xC];
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    void* m_b8;
    u8 _padBC[0x8];
    u32 m_c4;
    u8 _padC8[0x4];
    u32 m_cc;
};

#endif
