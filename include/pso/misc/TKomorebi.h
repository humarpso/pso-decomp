#ifndef PSO_MISC_TKOMOREBI_H
#define PSO_MISC_TKOMOREBI_H

#include "types.h"

struct TKomorebi
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
    void* m_68;
    void render();
    static void run_task();
    static void free_static();
    static void load_resources();
};

#endif
