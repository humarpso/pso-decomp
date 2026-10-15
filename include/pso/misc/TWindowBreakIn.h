#ifndef PSO_MISC_TWINDOWBREAKIN_H
#define PSO_MISC_TWINDOWBREAKIN_H

#include "types.h"

struct TWindowBreakIn
{
    u8 _pad1C[0x8];
    void* m_24;
    void render();
    void run_task();
};

#endif
