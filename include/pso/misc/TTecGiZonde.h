#ifndef PSO_MISC_TTECGIZONDE_H
#define PSO_MISC_TTECGIZONDE_H

#include "types.h"

struct TTecGiZonde
{
    u32 m_1c;
    void* m_20;
    u8 _pad24[0xA2];
    s16 m_c6;
    u16 m_c8;
    u8 _padCA[0x66];
    u32 m_130;
    s32 find_chain_targets();
    void create(void *arg1, void *arg2, void *arg3);
    void run_task();
    static void render();
    void tick_lifetime();
    void init_parameters();
};

#endif
