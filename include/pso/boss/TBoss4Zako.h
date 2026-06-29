#ifndef PSO_BOSS_TBOSS4ZAKO_H
#define PSO_BOSS_TBOSS4ZAKO_H

#include "types.h"

struct TBoss4Zako
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x8];
    void* m_50;
    u8 _pad54[0x8];
    u32 m_5c;
    u32 m_60;
    u8 _pad64[0x10];
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
    u8 _pad37C[0x4];
    u32 m_380;
    u32 m_384;
    u32 m_388;
    void* m_38c;
    u8 _pad390[0x14];
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    u8 _pad3B0[0x4];
    u32 m_3b4;
    u32 m_3b8;
    u32 m_3bc;
    u32 m_3c0;
};

#endif
