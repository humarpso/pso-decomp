#ifndef PSO_ENEMY_TOBJENEME3SHINOWAMIRAGE_H
#define PSO_ENEMY_TOBJENEME3SHINOWAMIRAGE_H

#include "types.h"

struct TObjEneMe3ShinowaMirage
{
    u16 m_1c;
    u8 _pad1E[0xE];
    u16 m_2c;
    u8 _pad2E[0x2];
    u32 m_30;
    u8 _pad34[0x70];
    u32 m_a4;
    u8 _padA8[0x27E];
    s16 m_326;
    u8 _pad328[0x9C];
    u32 m_3c4;
    u8 _pad3C8[0x8];
    u32 m_3d0;
    u32 m_3d4;
    u8 _pad3D8[0x10];
    void* m_3e8;
    u8 _pad3EC[0x10];
    u32 m_3fc;
    u8 _pad400[0x2C];
    u16 m_42c;
    u8 _pad42E[0x2];
    void* m_430;
};

#endif
