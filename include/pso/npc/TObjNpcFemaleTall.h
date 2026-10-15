#ifndef PSO_NPC_TOBJNPCFEMALETALL_H
#define PSO_NPC_TOBJNPCFEMALETALL_H

#include "types.h"

struct TObjNpcFemaleTall
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void destroy_instance();
    static void load_resource_instance();
    void *destroy(s16 arg1);
};

#endif
