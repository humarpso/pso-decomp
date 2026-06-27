#ifndef PSO_MISC_TODOORCAVE03_H
#define PSO_MISC_TODOORCAVE03_H

#include "types.h"

struct TODoorCave03
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x48];
    u32 m_ac;
    u8 _padB0[0x20];
    u32 m_d0;
    void* m_d4;
};

#endif
