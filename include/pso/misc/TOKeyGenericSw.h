#ifndef PSO_MISC_TOKEYGENERICSW_H
#define PSO_MISC_TOKEYGENERICSW_H

#include "types.h"

struct TOKeyGenericSw
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x58];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    u32 m_d4;
    u8 _padD8[0x10];
    u8 m_e8;
    u8 _padE9[0x3];
    u32 m_ec;
    u32 m_f0;
    u32 m_f4;
    u32 m_f8;
    void render();
    static void *create(void *arg0);
    static void free_shared_resources();
    static void load_resources();
};

#endif
