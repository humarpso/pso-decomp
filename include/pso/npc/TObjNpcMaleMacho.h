#ifndef PSO_NPC_TOBJNPCMALEMACHO_H
#define PSO_NPC_TOBJNPCMALEMACHO_H

#include "types.h"

struct TObjNpcMaleMacho
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void close_dialog_window();
    static void load_static_resource();
};

#endif
