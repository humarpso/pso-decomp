#ifndef PSO_NPC_TOBJNPCNHW00_H
#define PSO_NPC_TOBJNPCNHW00_H

#include "types.h"

struct TObjNpcNHW00
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void free_static_resources();
    static void load_resources();
};

#endif
