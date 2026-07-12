#ifndef PSO_MISC_TPHOTONGOLLA_H
#define PSO_MISC_TPHOTONGOLLA_H

#include "types.h"

struct TPhotonGolla
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x54];
    s16 m_b8;
    u8 _padBA[0x7A];
    u32 m_134;
    u32 m_138;
    u8 _pad13C[0x18];
    u32 m_154;
    u16 m_158;
    u8 _pad15A[0x42];
    u32 m_19c;
    u8 _pad1A0[0x4];
    u32 m_1a4;
    u32 m_1a8;
    u8 _pad1AC[0xC];
    u16 m_1b8;
    u8 _pad1BA[0x2];
    u32 m_1bc;
    u32 m_1c0;
    u32 m_1c4;
    u32 m_1c8;
};

#endif
