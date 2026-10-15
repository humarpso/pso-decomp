#ifndef PSO_BOSS_TBOSS6EMPTYWARP_H
#define PSO_BOSS_TBOSS6EMPTYWARP_H

#include "types.h"

struct TBoss6EmptyWarp
{
    u32 m_1c;
    int render();
    void run_task();
    static void *create();
    void activate_warp();
    static void init_warp();
};

#endif
