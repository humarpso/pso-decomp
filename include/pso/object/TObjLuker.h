#ifndef PSO_OBJECT_TOBJLUKER_H
#define PSO_OBJECT_TOBJLUKER_H

#include "types.h"

struct TObjLuker
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u8 _pad88[0x18];
    u32 m_a0;
    u32 m_a4;
    u16 m_a8;
    u16 m_aa;
    s16 m_ac;
    u16 m_ae;
    s16 m_b0;
    u8 _padB2[0x2];
    u32 m_b4;
    u32 m_b8;
};

#endif
