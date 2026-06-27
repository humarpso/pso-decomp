#ifndef PSO_ENEMY_TOBJENEBM3FLY_H
#define PSO_ENEMY_TOBJENEBM3FLY_H

#include "types.h"

struct TObjEneBm3Fly
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
    u8 _pad64[0x1C];
    u32 m_80;
    u8 _pad84[0x20];
    u32 m_a4;
    u8 _padA8[0x254];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0xE4];
    void* m_40c;
    u8 _pad410[0x8];
    u16 m_418;
    u8 _pad41A[0x2];
    void* m_41c;
    u8 _pad420[0x8];
    u32 m_428;
    u8 _pad42C[0x2C];
    u32 m_458;
    u32 m_45c;
};

#endif
