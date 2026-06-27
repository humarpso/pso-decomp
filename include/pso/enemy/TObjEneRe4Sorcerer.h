#ifndef PSO_ENEMY_TOBJENERE4SORCERER_H
#define PSO_ENEMY_TOBJENERE4SORCERER_H

#include "types.h"

struct TObjEneRe4Sorcerer
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
    u8 _padA8[0x254];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x64];
    u16 m_38c;
    u8 _pad38E[0x32];
    s16 m_3c0;
    u8 _pad3C2[0x6];
    u32 m_3c8;
    void* m_3cc;
    u8 _pad3D0[0x2C];
    void* m_3fc;
    u8 _pad400[0x10];
    u32 m_410;
    u8 _pad414[0x4];
    void* m_418;
    u8 _pad41C[0x58];
    void* m_474;
};

#endif
