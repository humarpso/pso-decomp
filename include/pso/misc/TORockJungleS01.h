#ifndef PSO_MISC_TOROCKJUNGLES01_H
#define PSO_MISC_TOROCKJUNGLES01_H

#include "types.h"

struct TORockJungleS01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x20];
    u32 m_84;
    u8 _pad88[0x30];
    u32 m_b8;
    u32 m_bc;
    static void *create(void *arg0);
    static u8 *get_model(s32 arg0);
    static void free_globals();
    static void load_resources();
};

#endif
