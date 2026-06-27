#ifndef PSO_MISC_TOTRAPANCIENT01_H
#define PSO_MISC_TOTRAPANCIENT01_H

#include "types.h"

struct TOTrapAncient01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x14];
    u32 m_a4;
    u8 _padA8[0x200];
    u32 m_2a8;
    u8 _pad2AC[0x7A];
    u16 m_326;
    u8 _pad328[0x14];
    u16 m_33c;
    u8 _pad33E[0x2];
    u32 m_340;
    u32 m_344;
    u32 m_348;
    u8 _pad34C[0xC];
    void* m_358;
};

#endif
