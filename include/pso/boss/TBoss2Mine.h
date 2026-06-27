#ifndef PSO_BOSS_TBOSS2MINE_H
#define PSO_BOSS_TBOSS2MINE_H

#include "types.h"

struct TBoss2Mine
{
    u16 m_1c;
    u8 _pad1E[0x6];
    u32 m_24;
    u8 _pad28[0x4];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x3C];
    u32 m_a4;
    u8 _padA8[0x210];
    s16 m_2b8;
    u8 _pad2BA[0x42];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4];
    u16 m_32c;
    u8 _pad32E[0x5E];
    u32 m_38c;
    u8 _pad390[0x20];
    u32 m_3b0;
    u8 _pad3B4[0x14];
    u32 m_3c8;
    u32 m_3cc;
};

#endif
