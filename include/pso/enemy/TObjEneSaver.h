#ifndef PSO_ENEMY_TOBJENESAVER_H
#define PSO_ENEMY_TOBJENESAVER_H

#include "types.h"

struct TObjEneSaver
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x84];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x21C];
    void* m_2fc;
    u8 _pad300[0x26];
    u16 m_326;
    u16 m_328;
    u8 _pad32A[0x2];
    s16 m_32c;
    u8 _pad32E[0x6];
    u32 m_334;
    u8 _pad338[0x6];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x8];
    u32 m_374;
    u32 m_378;
    s16 m_37c;
    u16 m_37e;
    u32 m_380;
    u32 m_384;
    u16 m_388;
    u16 m_38a;
    u32 m_38c;
    void* m_390;
    u8 _pad394[0x8];
    u32 m_39c;
    u32 m_3a0;
    void* m_3a4;
    u8 _pad3A8[0x18];
    u32 m_3c0;
    u32 m_3c4;
    u32 m_3c8;
};

#endif
