#ifndef PSO_MISC_TOAIRCONCAVE02_H
#define PSO_MISC_TOAIRCONCAVE02_H

#include "types.h"

struct TOAirconCave02
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    void render();
    static void *create(void *arg0);
    static void release_static_resource();
    static void load_shared_resource();
};

#endif
