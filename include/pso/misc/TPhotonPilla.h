#ifndef PSO_MISC_TPHOTONPILLA_H
#define PSO_MISC_TPHOTONPILLA_H

#include "types.h"

struct TPhotonPilla
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x54];
    s16 m_b8;
    u8 _padBA[0x7A];
    u32 m_134;
    u32 m_138;
    u8 _pad13C[0x18];
    u32 m_154;
    u8 _pad158[0x24];
    u16 m_17c;
    u8 _pad17E[0x12];
    u32 m_190;
    u32 m_194;
    u16 m_198;
    u8 _pad19A[0x2];
    u32 m_19c;
    u32 m_1a0;
    u32 m_1a4;
    u32 m_1a8;
};

#endif
