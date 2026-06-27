#ifndef PSO_MISC_TOTRAPANCIENT02_H
#define PSO_MISC_TOTRAPANCIENT02_H

#include "types.h"

struct TOTrapAncient02
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x28];
    u32 m_64;
    u8 _pad68[0x1C];
    u32 m_84;
    u8 _pad88[0x220];
    u32 m_2a8;
    u8 _pad2AC[0x7A];
    u16 m_326;
    s16 m_328;
    u8 _pad32A[0x12];
    u16 m_33c;
    u8 _pad33E[0xE];
    u32 m_34c;
    u32 m_350;
    u32 m_354;
    u32 m_358;
};

#endif
