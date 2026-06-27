#ifndef PSO_ENEMY_TOBJENEDARKGUNCENTER_H
#define PSO_ENEMY_TOBJENEDARKGUNCENTER_H

#include "types.h"

struct TObjEneDarkGunCenter
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x26C];
    u32 m_2a8;
    u8 _pad2AC[0x50];
    void* m_2fc;
    u8 _pad300[0x74];
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u32 m_380;
    u8 _pad384[0x20];
    u32 m_3a4;
};

#endif
