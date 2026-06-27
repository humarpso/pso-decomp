#ifndef PSO_BOSS_TBOSS4DARKFALZ_H
#define PSO_BOSS_TBOSS4DARKFALZ_H

#include "types.h"

struct TBoss4DarkFalz
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
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
    u8 _pad300[0x74];
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u8 _pad380[0x8];
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u32 m_398;
};

#endif
