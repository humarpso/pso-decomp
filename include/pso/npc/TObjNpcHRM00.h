#ifndef PSO_NPC_TOBJNPCHRM00_H
#define PSO_NPC_TOBJNPCHRM00_H

#include "types.h"

struct TObjNpcHRM00
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void destroy_resources();
    static void load_resources();
};

#endif
