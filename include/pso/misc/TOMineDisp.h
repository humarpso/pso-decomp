#ifndef PSO_MISC_TOMINEDISP_H
#define PSO_MISC_TOMINEDISP_H

#include "types.h"

struct TOMineDisp
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    u8 _pad94[0x10];
    u32 m_a4;
    u16 m_a8;
};

#endif
