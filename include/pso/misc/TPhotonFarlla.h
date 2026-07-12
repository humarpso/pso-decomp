#ifndef PSO_MISC_TPHOTONFARLLA_H
#define PSO_MISC_TPHOTONFARLLA_H

#include "types.h"

struct TPhotonFarlla
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
    u8 _pad158[0x24];
    u16 m_17c;
    u8 _pad17E[0x2];
    u32 m_180;
    u8 _pad184[0x10];
    u16 m_194;
    u8 _pad196[0x2];
    u32 m_198;
    u32 m_19c;
    u32 m_1a0;
    u32 m_1a4;
};

#endif
