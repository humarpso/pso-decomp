#ifndef PSO_MISC_TOFENCEANCIENT02_H
#define PSO_MISC_TOFENCEANCIENT02_H

#include "types.h"

struct TOFenceAncient02
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u8 _pad38[0x74];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x10];
    u32 m_d0;
    static void *create(void *arg0);
    static void free_resources();
    static void load_assets();
};

#endif
