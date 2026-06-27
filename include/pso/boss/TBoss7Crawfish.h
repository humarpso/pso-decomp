#ifndef PSO_BOSS_TBOSS7CRAWFISH_H
#define PSO_BOSS_TBOSS7CRAWFISH_H

#include "types.h"

struct TBoss7Crawfish
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    void* m_68;
    u8 _pad6C[0x38];
    u32 m_a4;
    u8 _padA8[0x10];
    s16 m_b8;
    u8 _padBA[0x26C];
    s16 m_326;
    u8 _pad328[0x4C];
    void* m_374;
    u8 _pad378[0x28];
    u32 m_3a0;
    u8 _pad3A4[0x28];
    u32 m_3cc;
};

#endif
