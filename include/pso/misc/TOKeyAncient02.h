#ifndef PSO_MISC_TOKEYANCIENT02_H
#define PSO_MISC_TOKEYANCIENT02_H

#include "types.h"

struct TOKeyAncient02
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x4];
    void* m_68;
    u8 _pad6C[0x1C];
    u32 m_88;
    u8 _pad8C[0x44];
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x10];
    u32 m_e8;
    u32 m_ec;
    void render();
    static void *create(void *arg0);
    static void free_static();
    static void load_resources();
};

#endif
