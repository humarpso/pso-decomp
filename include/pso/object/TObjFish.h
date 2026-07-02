#ifndef PSO_OBJECT_TOBJFISH_H
#define PSO_OBJECT_TOBJFISH_H

#include "types.h"

struct TObjFish
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x20];
    void* m_5c;
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x28];
    u32 m_94;
    u32 m_98;
    u8 _pad9C[0x4];
    u32 m_a0;
};

#endif
