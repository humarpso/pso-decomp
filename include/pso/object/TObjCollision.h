#ifndef PSO_OBJECT_TOBJCOLLISION_H
#define PSO_OBJECT_TOBJCOLLISION_H

#include "types.h"

struct TObjCollision
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x40];
    void* m_ac;
    u8 _padB0[0x10];
    u32 m_c0;
    u32 m_c4;
};

#endif
