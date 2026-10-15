#ifndef PSO_MISC_TOMONUMENTANCIENT02_H
#define PSO_MISC_TOMONUMENTANCIENT02_H

#include "types.h"

struct TOMonumentAncient02
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
    u8 _pad6C[0x2C];
    void* m_98;
    u8 _pad9C[0x10];
    u32 m_ac;
    u8 _padB0[0x18];
    u32 m_c8;
    u32 m_cc;
    u32 m_d0;
    u32 m_d4;
    void* m_d8;
    u8 _padDC[0xC];
    u32 m_e8;
    u32 m_ec;
    void run_task();
    void render();
    static void *create(void *arg0);
    static void free_shared_data();
    static void load_resources();
};

#endif
