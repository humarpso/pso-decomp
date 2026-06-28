#ifndef PSO_OBJECT_TOBJLIGHT_H
#define PSO_OBJECT_TOBJLIGHT_H

#include "types.h"

struct TObjLight
{
    u8 _pad1C[0xC];
    s16 m_28;
    u8 _pad2A[0xE];
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u32 m_90;
    u32 m_94;
    u8 _pad98[0x4];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u8 _padA8[0x14];
    void* m_bc;
    u8 _padC0[0xC];
    void* m_cc;
    u8 _padD0[0x8];
    void* m_d8;
};

#endif
