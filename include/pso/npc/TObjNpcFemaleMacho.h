#ifndef PSO_NPC_TOBJNPCFEMALEMACHO_H
#define PSO_NPC_TOBJNPCFEMALEMACHO_H

#include "types.h"

struct TObjNpcFemaleMacho
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    static void close_dialog_window();
    static void load_resources();
};

#endif
