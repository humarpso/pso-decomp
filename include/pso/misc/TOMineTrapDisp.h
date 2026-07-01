#ifndef PSO_MISC_TOMINETRAPDISP_H
#define PSO_MISC_TOMINETRAPDISP_H

#include "types.h"

struct TOMineTrapDisp
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u16 m_a8;
    u8 _padAA[0x2];
    u16 m_ac;
};

#endif
