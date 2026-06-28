#ifndef PSO_OBJECT_TOBJMAPCSN_H
#define PSO_OBJECT_TOBJMAPCSN_H

#include "types.h"

struct TObjMapCsn
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x4C];
    u32 m_88;
    u8 _pad8C[0x20];
    u32 m_ac;
    void* m_b0;
    u8 _padB4[0xC];
    u32 m_c0;
    u32 m_c4;
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    void* m_d4;
    u8 _padD8[0x11C];
    void* m_1f4;
};

#endif
