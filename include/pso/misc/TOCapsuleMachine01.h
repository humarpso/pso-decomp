#ifndef PSO_MISC_TOCAPSULEMACHINE01_H
#define PSO_MISC_TOCAPSULEMACHINE01_H

#include "types.h"

struct TOCapsuleMachine01
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0x8];
    u32 m_30;
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    static void run_task();
    void render();
    static void *create(void *arg0);
    static void reset_static_state();
    static void alloc_and_load_resource();
};

#endif
