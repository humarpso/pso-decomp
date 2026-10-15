#ifndef PSO_MISC_TOSENSORGENERAL01_H
#define PSO_MISC_TOSENSORGENERAL01_H

#include "types.h"

struct TOSensorGeneral01
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
    u8 _pad8C[0x44];
    u32 m_d0;
    u8 _padD4[0x14];
    u32 m_e8;
    u32 m_ec;
    u32 m_f0;
    void render();
    void *create();
    static void free_rocks();
    static void load_assets();
};

#endif
