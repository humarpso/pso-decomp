#ifndef PSO_OBJECT_TOBJWARPBOSS_H
#define PSO_OBJECT_TOBJWARPBOSS_H

#include "types.h"

struct TObjWarpBoss
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x24];
    u32 m_88;
    u8 _pad8C[0x18];
    u32 m_a4;
    u8 _padA8[0xC];
    u32 m_b4;
    u8 _padB8[0x4];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x4];
    s16 m_dc;
    s16 m_de;
    s16 m_e0;
    s16 m_e2;
    u8 _padE4[0x80];
    u32 m_164;
    u32 m_168;
    u32 m_16c;
    u8 _pad170[0x10];
    u32 m_180;
};

#endif
