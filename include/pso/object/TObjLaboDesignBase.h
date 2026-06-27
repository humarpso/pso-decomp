#ifndef PSO_OBJECT_TOBJLABODESIGNBASE_H
#define PSO_OBJECT_TOBJLABODESIGNBASE_H

#include "types.h"

struct TObjLaboDesignBase
{
    u8 _pad1C[0x2];
    s16 m_1e;
    u8 _pad20[0x18];
    void* m_38;
    u8 _pad3C[0x70];
    u32 m_ac;
    u32 m_b0;
    u8 _padB4[0x8];
    u32 m_bc;
};

#endif
