#ifndef PSO_ENEMY_TOBJENEMOJA_H
#define PSO_ENEMY_TOBJENEMOJA_H

#include "types.h"

struct TObjEneMoja
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
    u8 _pad338[0x2];
    s16 m_33a;
    u16 m_33c;
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u8 _pad36C[0x10];
    u32 m_37c;
    u32 m_380;
    u32 m_384;
    u32 m_388;
    u8 _pad38C[0xC];
    u32 m_398;
    void* m_39c;
};

#endif
