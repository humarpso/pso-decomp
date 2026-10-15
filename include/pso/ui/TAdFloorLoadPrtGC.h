#ifndef PSO_UI_TADFLOORLOADPRTGC_H
#define PSO_UI_TADFLOORLOADPRTGC_H

#include "types.h"

struct TAdFloorLoadPrtGC
{
    void* m_1c;
    u8 _pad20[0x37C];
    u32 m_39c;
    static void render();
    static void run_task();
};

#endif
