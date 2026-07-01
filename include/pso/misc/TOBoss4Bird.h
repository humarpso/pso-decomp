#ifndef PSO_MISC_TOBOSS4BIRD_H
#define PSO_MISC_TOBOSS4BIRD_H

#include "types.h"

struct TOBoss4Bird
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x14];
    void* m_50;
    u8 _pad54[0xC];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x8];
    u32 m_98;
    u8 _pad9C[0x18];
    u32 m_b4;
    u32 m_b8;
    u32 m_bc;
    u32 m_c0;
    void* m_c4;
    u8 _padC8[0x14];
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
};

#endif
