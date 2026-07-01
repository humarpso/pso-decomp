#ifndef PSO_MISC_TDEADSPOT_H
#define PSO_MISC_TDEADSPOT_H

#include "types.h"

struct TDeadSpot
{
    void* m_1c;
    u8 _pad20[0x10];
    u32 m_30;
    u8 _pad34[0x14];
    u32 m_48;
    u8 _pad4C[0x14];
    u32 m_60;
    u8 _pad64[0x14];
    u32 m_78;
    void* m_7c;
    u8 _pad80[0x38];
    u32 m_b8;
    u32 m_bc;
};

#endif
