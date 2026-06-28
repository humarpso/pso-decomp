#ifndef PSO_MISC_TWINDOWHELPITEM_H
#define PSO_MISC_TWINDOWHELPITEM_H

#include "types.h"

struct TWindowHelpItem
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x8];
    void* m_30;
    u8 _pad34[0x2C];
    u8 m_60;
    u8 _pad61[0x3];
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    u8 _pad74[0x28];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u8 _padA8[0x8];
    u32 m_b0;
    u32 m_b4;
    u32 m_b8;
};

#endif
