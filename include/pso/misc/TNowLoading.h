#ifndef PSO_MISC_TNOWLOADING_H
#define PSO_MISC_TNOWLOADING_H

#include "types.h"

struct TNowLoading
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    void* m_2c;
    static void render();
    void run_task();
    void copy_pos(void* q);
};

#endif
