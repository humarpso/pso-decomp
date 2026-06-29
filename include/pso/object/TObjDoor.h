#ifndef PSO_OBJECT_TOBJDOOR_H
#define PSO_OBJECT_TOBJDOOR_H

#include "types.h"

struct TObjDoor
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u32 m_b0;
    u8 _padB4[0x8];
    u8 m_bc;
    u8 _padBD[0x3];
    u32 m_c0;
    u8 _padC4[0x4];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
};

#endif
