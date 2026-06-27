#ifndef PSO_ENEMY_TOBJENEGIBBLES_H
#define PSO_ENEMY_TOBJENEGIBBLES_H

#include "types.h"

struct TObjEneGibbles
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x84];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x246];
    u16 m_326;
    u16 m_328;
    u8 _pad32A[0x2];
    s16 m_32c;
    u8 _pad32E[0x6];
    u32 m_334;
    u8 _pad338[0x6];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x8];
    u32 m_374;
    u8 _pad378[0x4];
    s16 m_37c;
    u16 m_37e;
    u32 m_380;
    u32 m_384;
    u8 _pad388[0x28];
    u32 m_3b0;
    u32 m_3b4;
    u32 m_3b8;
    u32 m_3bc;
    void* m_3c0;
    u8 _pad3C4[0x10];
    u32 m_3d4;
    u8 _pad3D8[0x4];
    void* m_3dc;
};

#endif
