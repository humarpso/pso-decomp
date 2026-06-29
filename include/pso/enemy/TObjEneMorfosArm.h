#ifndef PSO_ENEMY_TOBJENEMORFOSARM_H
#define PSO_ENEMY_TOBJENEMORFOSARM_H

#include "types.h"

struct TObjEneMorfosArm
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x4C];
    u32 m_b0;
    u8 _padB4[0x4];
    s16 m_b8;
    u8 _padBA[0x42];
    u32 m_fc;
    u16 m_100;
};

#endif
