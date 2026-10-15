#ifndef PSO_OBJECT_TOBJMAPFORCEWARP_H
#define PSO_OBJECT_TOBJMAPFORCEWARP_H

#include "types.h"

struct TObjMapForceWarp
{
    u8 _pad1C[0x70];
    u32 m_8c;
    u8 _pad90[0x24];
    u32 m_b4;
    u8 _padB8[0x44];
    u32 m_fc;
    static void render();
    static int run_task(void* p);
    static void register_warp(void* a0);
};

#endif
