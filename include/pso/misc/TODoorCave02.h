#ifndef PSO_MISC_TODOORCAVE02_H
#define PSO_MISC_TODOORCAVE02_H

#include "types.h"

struct TODoorCave02
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x48];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    s32 draw_parts(void *arg1_);
    void render();
    static void *create(void *arg0);
    static void free_globals();
    static void load_resources();
};

#endif
