#ifndef PSO_ENEMY_TOBJENEMORFOS_H
#define PSO_ENEMY_TOBJENEMORFOS_H

#include "types.h"

struct TObjEneMorfos
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x30];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1F4];
    u16 m_2d4;
    u8 _pad2D6[0x26];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u32 m_3c4;
    u8 _pad3C8[0xC];
    u32 m_3d4;
    u8 _pad3D8[0x14];
    void* m_3ec;
    u8 _pad3F0[0x18];
    void* m_408;
    u8 _pad40C[0x18];
    void* m_424;
    u8 _pad428[0x6C];
    u32 m_494;
    void* m_498;
};

#endif
