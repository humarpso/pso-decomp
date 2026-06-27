#ifndef PSO_BOSS_TBOSS6MINE_H
#define PSO_BOSS_TBOSS6MINE_H

#include "types.h"

struct TBoss6Mine
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    u8 _pad54[0x20];
    void* m_74;
    u8 _pad78[0x230];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x2C];
    s16 m_32c;
    u8 _pad32E[0x10];
    u16 m_33e;
    u8 _pad340[0x34];
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u32 m_380;
    u32 m_384;
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u32 m_398;
    u8 _pad39C[0x4];
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u8 _pad3AC[0x4];
    void* m_3b0;
    u8 _pad3B4[0x8];
    void* m_3bc;
    u8 _pad3C0[0xC];
    u32 m_3cc;
};

#endif
