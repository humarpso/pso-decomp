#ifndef PSO_MISC_TWINDOWSUBAREAMAP_H
#define PSO_MISC_TWINDOWSUBAREAMAP_H

#include "types.h"

struct TWindowSubAreaMap
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    static void render();
    void run_task();
};

#endif
