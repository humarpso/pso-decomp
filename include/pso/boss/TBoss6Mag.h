#ifndef PSO_BOSS_TBOSS6MAG_H
#define PSO_BOSS_TBOSS6MAG_H

#include "types.h"

struct TBoss6Mag
{
    void render();
    void run_task();
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
    u8 _pad340[0x34];
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u8 _pad380[0x4];
    u32 m_384;
    u8 _pad388[0x4];
    u32 m_38c;
    u32 m_390;
    u8 _pad394[0x2C];
    u32 m_3c0;
    u8 _pad3C4[0x44];
    void* m_408;
    u8 _pad40C[0x40];
    void* m_44c;
    u8 _pad450[0x8];
    u32 m_458;
};

#endif
