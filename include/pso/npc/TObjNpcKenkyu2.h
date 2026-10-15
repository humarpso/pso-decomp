#ifndef PSO_NPC_TOBJNPCKENKYU2_H
#define PSO_NPC_TOBJNPCKENKYU2_H

#include "types.h"

struct TObjNpcKenkyu2
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void free_static_model();
    static void load_shared_resource();
};

#endif
