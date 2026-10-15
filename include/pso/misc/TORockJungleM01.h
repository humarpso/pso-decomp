#ifndef PSO_MISC_TOROCKJUNGLEM01_H
#define PSO_MISC_TOROCKJUNGLEM01_H

#include "types.h"

struct TORockJungleM01
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
    void* m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    u8 _padD4[0x4];
    u32 m_d8;
    u32 m_dc;
    void run_task();
    static void *create(void *arg0);
};

#endif
