#ifndef PSO_OBJECT_TOBJWARPBASE_H
#define PSO_OBJECT_TOBJWARPBASE_H

#include "types.h"

struct TObjWarpBase
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x74];
    u32 m_b0;
    u32 m_b4;
    u16 m_b8;
    static void free_globals();
};

#endif
