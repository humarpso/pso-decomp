#ifndef PSO_OBJECT_TOBJHASHI_H
#define PSO_OBJECT_TOBJHASHI_H

#include "types.h"

struct TObjHashi
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    static void unload_static_data();
    static void load_shared_resource();
};

#endif
