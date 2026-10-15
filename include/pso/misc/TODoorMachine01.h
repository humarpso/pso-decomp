#ifndef PSO_MISC_TODOORMACHINE01_H
#define PSO_MISC_TODOORMACHINE01_H

#include "types.h"

struct TODoorMachine01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x24];
    u32 m_88;
    u8 _pad8C[0x20];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    void draw_part_models(u8 *arg1, s32 arg2);
    void render();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
};

#endif
