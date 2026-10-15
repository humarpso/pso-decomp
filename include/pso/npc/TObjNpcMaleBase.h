#ifndef PSO_NPC_TOBJNPCMALEBASE_H
#define PSO_NPC_TOBJNPCMALEBASE_H

#include "types.h"

struct TObjNpcMaleBase
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void request_action(s32 arg1);
    static void free_static_data();
    static void load_shared_resource();
};

#endif
