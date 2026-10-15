#ifndef PSO_MISC_TOREVLIGHTCAVE01_H
#define PSO_MISC_TOREVLIGHTCAVE01_H

#include "types.h"

struct TORevlightCave01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    u8 _pad68[0x54];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u32 m_cc;
    static void *create(void *arg0);
    static void release_static_instance();
    static void load_shared_resource();
    void run_task();
    void render();
};

#endif
