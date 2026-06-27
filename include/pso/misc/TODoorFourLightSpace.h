#ifndef PSO_MISC_TODOORFOURLIGHTSPACE_H
#define PSO_MISC_TODOORFOURLIGHTSPACE_H

#include "types.h"

struct TODoorFourLightSpace
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x10];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x1C];
    u32 m_80;
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
};

#endif
