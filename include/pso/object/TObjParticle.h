#ifndef PSO_OBJECT_TOBJPARTICLE_H
#define PSO_OBJECT_TOBJPARTICLE_H

#include "types.h"

struct TObjParticle
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x18];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u32 m_90;
    u32 m_94;
};

#endif
