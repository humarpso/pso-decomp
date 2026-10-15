#ifndef PSO_NPC_TOBJNPCAHM01_H
#define PSO_NPC_TOBJNPCAHM01_H

#include "types.h"

struct TObjNpcAHM01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    static void free_resources();
    static void load_resources();
};

#endif
