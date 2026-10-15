#ifndef PSO_OBJECT_TOBJCITYAREAWARP_H
#define PSO_OBJECT_TOBJCITYAREAWARP_H

#include "types.h"

struct TObjCityAreaWarp
{
    u8 _pad1C[0x94];
    u32 m_b0;
    u8 _padB4[0x4];
    u16 m_b8;
    u8 _padBA[0x2];
    u32 m_bc;
    void render();
    void do_warp();
    void run_task();
    static void *create(void *arg0);
};

#endif
