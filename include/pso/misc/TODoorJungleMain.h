#ifndef PSO_MISC_TODOORJUNGLEMAIN_H
#define PSO_MISC_TODOORJUNGLEMAIN_H

#include "types.h"

struct TODoorJungleMain
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x58];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    static void free_static_resources();
    static void load_resources();
    void render();
    void run_task();
};

#endif
