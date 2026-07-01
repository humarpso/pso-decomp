#ifndef PSO_MISC_TOMINE_H
#define PSO_MISC_TOMINE_H

#include "types.h"

struct TOMine
{
    u16 m_1c;
    u8 _pad1E[0x12];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
    u8 _pad54[0x2C];
    u32 m_80;
    u8 _pad84[0x224];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u16 m_328;
    u8 _pad32A[0xA];
    void* m_334;
    u8 _pad338[0x8];
    u32 m_340;
    u32 m_344;
    u8 _pad348[0xC];
    u32 m_354;
    u8 _pad358[0x4];
    u16 m_35c;
    u8 _pad35E[0x12];
    u32 m_370;
};

#endif
