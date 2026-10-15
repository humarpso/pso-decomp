#ifndef PSO_MISC_TOMEKAFISH01_H
#define PSO_MISC_TOMEKAFISH01_H

#include "types.h"

struct TOMekaFish01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    u8 _pad38[0x4C];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x20];
    u32 m_ac;
    u8 _padB0[0xC];
    u32 m_bc;
    u8 _padC0[0x38];
    u32 m_f8;
    u32 m_fc;
    static void free_static_data();
    static void load_shared_resource();
};

#endif
