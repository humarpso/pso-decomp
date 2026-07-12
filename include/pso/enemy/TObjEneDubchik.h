#ifndef PSO_ENEMY_TOBJENEDUBCHIK_H
#define PSO_ENEMY_TOBJENEDUBCHIK_H

#include "types.h"

struct TObjEneDubchik
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x8];
    void* m_44;
    u8 _pad48[0x70];
    s16 m_b8;
    u8 _padBA[0x1E];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1B0];
    void* m_290;
    u8 _pad294[0x8];
    void* m_29c;
    u8 _pad2A0[0x18];
    s16 m_2b8;
    s16 m_2ba;
    u8 _pad2BC[0x70];
    s16 m_32c;
    u16 m_32e;
    u8 _pad330[0xE];
    u16 m_33e;
    u8 _pad340[0x10];
    u32 m_350;
    u8 _pad354[0x14];
    u32 m_368;
    u32 m_36c;
    u8 _pad370[0x1C];
    u16 m_38c;
    u8 _pad38E[0x2];
    u16 m_390;
    u16 m_392;
    u8 _pad394[0x14];
    u32 m_3a8;
    u32 m_3ac;
    void* m_3b0;
};

#endif
