#ifndef PSO_MISC_TOKEYCOL_H
#define PSO_MISC_TOKEYCOL_H

#include "types.h"

struct TOKeyCol
{
    u8 _pad1C[0x6C];
    u32 m_88;
    u8 _pad8C[0x44];
    u32 m_d0;
    u32 m_d4;
    void send_switch_changed(s32 flags);
    void run_task();
    void render();
    static void *create(void *arg0);
};

#endif
