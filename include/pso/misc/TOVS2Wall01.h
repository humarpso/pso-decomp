#ifndef PSO_MISC_TOVS2WALL01_H
#define PSO_MISC_TOVS2WALL01_H

#include "types.h"

struct TOVS2Wall01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u8 _pad88[0x29E];
    s16 m_326;
    u8 _pad328[0x14];
    u32 m_33c;
    void* m_340;
    u8 _pad344[0x10];
    u32 m_354;
    u8 _pad358[0x4];
    u32 m_35c;
};

#endif
