#ifndef PSO_ENEMY_TOBJENERE4BIT_H
#define PSO_ENEMY_TOBJENERE4BIT_H

#include "types.h"

struct TObjEneRe4Bit
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x6];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x27E];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u16 m_3c4;
    u8 _pad3C6[0x2];
    u32 m_3c8;
    u32 m_3cc;
    u32 m_3d0;
    u8 _pad3D4[0x8];
    void* m_3dc;
    u8 _pad3E0[0x10];
    u32 m_3f0;
    u8 _pad3F4[0x10];
    u32 m_404;
};

#endif
