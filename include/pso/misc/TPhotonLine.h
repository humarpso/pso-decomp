#ifndef PSO_MISC_TPHOTONLINE_H
#define PSO_MISC_TPHOTONLINE_H

#include "types.h"

struct TPhotonLine
{
    u8 _pad1C[0x1C];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0xC];
    void* m_50;
    u8 _pad54[0x50];
    u32 m_a4;
    u8 _padA8[0x254];
    void* m_2fc;
    u8 _pad300[0x34];
    void* m_334;
    u8 _pad338[0x18];
    u32 m_350;
    u8 _pad354[0x14];
    u16 m_368;
};

#endif
