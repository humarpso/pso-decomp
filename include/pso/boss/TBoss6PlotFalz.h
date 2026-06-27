#ifndef PSO_BOSS_TBOSS6PLOTFALZ_H
#define PSO_BOSS_TBOSS6PLOTFALZ_H

#include "types.h"

struct TBoss6PlotFalz
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
    u8 m_37c;
    u8 _pad37D[0x3];
    u32 m_380;
    u32 m_384;
    void* m_388;
    u16 m_38a;
    u8 _pad38C[0x40];
    u32 m_3cc;
    u32 m_3d0;
    u32 m_3d4;
    u32 m_3d8;
    u32 m_3dc;
};

#endif
