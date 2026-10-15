#ifndef PSO_NPC_TOBJNPCSOUTOKUFU_H
#define PSO_NPC_TOBJNPCSOUTOKUFU_H

#include "types.h"

struct TObjNpcSoutokufu
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void close_dialog_window();
    static void load_shared_resource();
};

#endif
