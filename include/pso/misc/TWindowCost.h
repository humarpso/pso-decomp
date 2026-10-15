#ifndef PSO_MISC_TWINDOWCOST_H
#define PSO_MISC_TWINDOWCOST_H

#include "types.h"

struct TWindowCost
{
    u8 _pad1C[0x8];
    void* m_24;
    void run_task();
};

#endif
