#ifndef PSO_MISC_TWINDOWACTIONPALETTE_H
#define PSO_MISC_TWINDOWACTIONPALETTE_H

#include "types.h"

struct TWindowActionPalette
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x2C];
    u32 m_5c;
    void* m_60;
    u8 _pad64[0x8];
    u8 m_6c;
    u8 _pad6D[0x3];
    void* m_70;
};

#endif
