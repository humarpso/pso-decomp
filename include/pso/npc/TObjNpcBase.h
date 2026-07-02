#ifndef PSO_NPC_TOBJNPCBASE_H
#define PSO_NPC_TOBJNPCBASE_H

#include "types.h"

struct TObjNpcBase
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x5C];
    void* m_98;
    u8 _pad9C[0x28A];
    u16 m_326;
    u8 _pad328[0x60];
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u8 _pad398[0x8];
    u32 m_3a0;
    u32 m_3a4;
    u32 m_3a8;
    u32 m_3ac;
    u32 m_3b0;
    u32 m_3b4;
};

#endif
