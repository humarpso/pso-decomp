#ifndef PSO_MISC_TODOORANCIENT08_H
#define PSO_MISC_TODOORANCIENT08_H

#include "types.h"

struct TODoorAncient08
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
    u16 m_d6;
    u16 m_d8;
    u8 _padDA[0x2];
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
    u32 m_e8;
    void play_open_sound();
    void draw_switch_lights();
    void render();
    static void *create(void *arg0);
    static void free_objects();
    static void load_resources();
};

#endif
