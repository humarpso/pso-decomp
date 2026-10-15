#ifndef PSO_NPC_TOBJNPCSOLDIERMACHO_H
#define PSO_NPC_TOBJNPCSOLDIERMACHO_H

#include "types.h"

struct TObjNpcSoldierMacho
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void unload_static_data();
    static void load_shared_resource();
};

#endif
