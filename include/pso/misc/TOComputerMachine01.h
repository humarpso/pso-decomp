#ifndef PSO_MISC_TOCOMPUTERMACHINE01_H
#define PSO_MISC_TOCOMPUTERMACHINE01_H

#include "types.h"

struct TOComputerMachine01
{
    u8 _pad1C[0x2];
    s16 m_1e;
    u8 _pad20[0x4];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x7C];
    u32 m_e0;
    void render();
    static void *create(void *arg0);
    static void reset_state();
    static void load_model_resource();
};

#endif
