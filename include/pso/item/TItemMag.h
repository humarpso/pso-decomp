#ifndef PSO_ITEM_TITEMMAG_H
#define PSO_ITEM_TITEMMAG_H

#include "types.h"

struct TItemMag
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC8];
    u32 m_f0;
    u32 m_f4;
    u8 _padF8[0x80];
    void* m_178;
    u32 m_17c;
    u8 _pad180[0x8];
    u32 m_188;
    u32 m_18c;
    u8 _pad190[0x8];
    void* m_198;
    u8 _pad19C[0x8];
    u8 m_1a4;
    u8 _pad1A5[0x13];
    u32 m_1b8;
    u8 _pad1BC[0x10];
    u32 m_1cc;
    u8 _pad1D0[0x4];
    u16 m_1d4;
    s16 m_1d6;
    u8 _pad1D8[0x4];
    u16 m_1dc;
    u16 m_1de;
};

#endif
