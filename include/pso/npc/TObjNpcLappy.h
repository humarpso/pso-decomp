#ifndef PSO_NPC_TOBJNPCLAPPY_H
#define PSO_NPC_TOBJNPCLAPPY_H

#include "types.h"

struct TObjNpcLappy
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u8 _pad38[0x80];
    s16 m_b8;
    u8 _padBA[0x296];
    u32 m_350;
    void *destroy_npc_lappy_base(s16 arg1);
};

#endif
