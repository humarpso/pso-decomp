#ifndef PSO_MISC_TODOORANCIENT09_H
#define PSO_MISC_TODOORANCIENT09_H

#include "types.h"

struct TODoorAncient09
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
    u8 _pad88[0x4];
    u32 m_8c;
    u8 _pad90[0x1C];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u16 m_d4;
    u8 _padD6[0x2];
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
    void play_door_sound();
    void draw_model();
    void render();
    static void *create(void *arg0);
    static void free_rocks();
    static void load_resources();
};

#endif
