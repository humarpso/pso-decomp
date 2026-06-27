#ifndef PSO_BOSS_TBOSS3VOLOPTP01_H
#define PSO_BOSS_TBOSS3VOLOPTP01_H

#include "types.h"

struct TBoss3VoloptP01
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u16 m_28;
    u16 m_2a;
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x1C];
    u32 m_80;
    u8 _pad84[0x20];
    u32 m_a4;
    u8 _padA8[0x1DC];
    void* m_284;
    u8 _pad288[0x74];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4C];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x8];
    u32 m_388;
    u8 _pad38C[0x28];
    u32 m_3b4;
    u32 m_3b8;
    void* m_3bc;
};

#endif
