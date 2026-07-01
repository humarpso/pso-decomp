#ifndef PSO_BOSS_TBOSS7JOINT_H
#define PSO_BOSS_TBOSS7JOINT_H

#include "types.h"

struct TBoss7Joint
{
    u16 m_1c;
    u8 _pad1E[0xE];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u8 _padA8[0x210];
    s16 m_2b8;
    u8 _pad2BA[0x1A];
    u16 m_2d4;
    u8 _pad2D6[0x56];
    s16 m_32c;
    u8 _pad32E[0x8A];
    u32 m_3b8;
    u8 _pad3BC[0x4];
    u32 m_3c0;
    u32 m_3c4;
};

#endif
