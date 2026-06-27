#ifndef PSO_MISC_TOMINETRAP_H
#define PSO_MISC_TOMINETRAP_H

#include "types.h"

struct TOMineTrap
{
    u8 _pad1C[0x8];
    u32 m_24;
    s16 m_28;
    u8 _pad2A[0x4];
    s16 m_2e;
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
    u8 _pad54[0x30];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x18];
    u32 m_a4;
    u8 _padA8[0x200];
    u32 m_2a8;
    u8 _pad2AC[0x2C];
    u16 m_2d8;
    u8 _pad2DA[0x22];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0xC];
    void* m_334;
    u8 _pad338[0xC];
    u32 m_344;
    u8 _pad348[0xC];
    u32 m_354;
    u32 m_358;
    u16 m_35c;
    u8 _pad35E[0x12];
    u32 m_370;
    u32 m_374;
    u32 m_378;
    u8 _pad37C[0x2];
    u16 m_37e;
    u32 m_380;
};

#endif
