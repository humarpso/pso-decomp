#ifndef PSO_BOSS_TBOSS4TYPE1_H
#define PSO_BOSS_TBOSS4TYPE1_H

#include "types.h"

struct TBoss4Type1
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
    u8 _pad54[0xC];
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
    u8 _pad340[0x38];
    void* m_378;
    u8 _pad37C[0x10];
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u8 _pad398[0x8];
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    u8 _pad3B0[0x14];
    u32 m_3c4;
    u32 m_3c8;
    u32 m_3cc;
    u32 m_3d0;
    u32 m_3d4;
    u32 m_3d8;
    u8 _pad3DC[0xA4];
    u32 m_480;
    void* m_484;
};

#endif
