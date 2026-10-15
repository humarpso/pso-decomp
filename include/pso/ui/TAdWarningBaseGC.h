#ifndef PSO_UI_TADWARNINGBASEGC_H
#define PSO_UI_TADWARNINGBASEGC_H

#include "types.h"

struct TAdWarningBaseGC
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    int destroy();
    static void create();
    static void init_heap();
};

#endif
