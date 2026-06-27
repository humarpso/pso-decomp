#ifndef PSO_ENEMY_TOBJENESLIMEONE_H
#define PSO_ENEMY_TOBJENESLIMEONE_H

#include "types.h"

struct TObjEneSlimeOne
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x270];
    u16 m_2d4;
    u8 _pad2D6[0x26];
    void* m_2fc;
    u8 _pad300[0x84];
    u32 m_384;
    u32 m_388;
    u8 _pad38C[0x1C];
    void* m_3a8;
    u8 _pad3AC[0x30];
    void* m_3dc;
    u8 _pad3E0[0xC];
    u32 m_3ec;
    u32 m_3f0;
};

#endif
