#ifndef PSO_OBJECT_TOBJHASHIVERSUS1_H
#define PSO_OBJECT_TOBJHASHIVERSUS1_H

#include "types.h"

struct TObjHashiVersus1
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    u8 _pad38[0x90];
    u32 m_c8;
    static void release_static_instance();
    static void load_shared_resource();
};

#endif
