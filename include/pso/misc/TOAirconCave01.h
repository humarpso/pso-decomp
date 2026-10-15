#ifndef PSO_MISC_TOAIRCONCAVE01_H
#define PSO_MISC_TOAIRCONCAVE01_H

#include "types.h"

struct TOAirconCave01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x20];
    u32 m_5c;
    u32 m_60;
    void render();
    static void *create(void *arg0);
    void *destroy(s16 arg1);
    void *init_vtable_804AF8D8();
    static void release_static_resource();
    static void load_shared_resource();
};

#endif
