#ifndef PSO_BOSS_TBOSS2TENTACLE_H
#define PSO_BOSS_TBOSS2TENTACLE_H

#include "types.h"

struct TBoss2Tentacle
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0xB0];
    u32 m_e0;
    u8 _padE4[0x2C];
    u32 m_110;
    u8 _pad114[0x8];
    u32 m_11c;
    u32 m_120;
    u32 m_124;
    u32 m_128;
    void* m_12c;
    u8 _pad130[0x10];
    void* m_140;
    u8 _pad144[0x8];
    u32 m_14c;
    u8 _pad150[0x4];
    u32 m_154;
};

#endif
