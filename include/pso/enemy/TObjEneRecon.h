#ifndef PSO_ENEMY_TOBJENERECON_H
#define PSO_ENEMY_TOBJENERECON_H

#include "types.h"

struct TObjEneRecon
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x6];
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x18];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x18];
    u32 m_80;
    u8 _pad84[0x20];
    u32 m_a4;
    u8 _padA8[0x1A0];
    void* m_248;
    u8 _pad24C[0x90];
    u32 m_2dc;
    u8 _pad2E0[0x1C];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x68];
    u32 m_390;
    u8 _pad394[0x78];
    void* m_40c;
    u8 _pad410[0x8];
    u32 m_418;
    u8 _pad41C[0xC];
    void* m_428;
    u8 _pad42C[0x8];
    u16 m_434;
    u8 _pad436[0x2];
    void* m_438;
    u8 _pad43C[0x8];
    u32 m_444;
    u8 _pad448[0x30];
    u32 m_478;
    u32 m_47c;
    void* m_480;
    u8 _pad484[0x10];
    u32 m_494;
};

#endif
