#ifndef PSO_MISC_TOKEY_H
#define PSO_MISC_TOKEY_H

#include "types.h"

struct TOKey
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x34];
    void* m_98;
    u8 _pad9C[0x20];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u8 _padCC[0x4];
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
};

#endif
