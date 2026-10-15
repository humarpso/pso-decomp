#ifndef PSO_MISC_TODOORCAVE01_H
#define PSO_MISC_TODOORCAVE01_H

#include "types.h"

struct TODoorCave01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x1C];
    u32 m_80;
    u32 m_84;
    u32 m_88;
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    static s32 draw_door_model(void *p0, int p1, int arg2);
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
};

#endif
