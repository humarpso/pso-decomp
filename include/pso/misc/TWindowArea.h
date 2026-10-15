#ifndef PSO_MISC_TWINDOWAREA_H
#define PSO_MISC_TWINDOWAREA_H

#include "types.h"

struct TWindowArea
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x18];
    void* m_40;
    void run_task();
};

#endif
