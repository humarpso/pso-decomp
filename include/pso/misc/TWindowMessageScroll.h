#ifndef PSO_MISC_TWINDOWMESSAGESCROLL_H
#define PSO_MISC_TWINDOWMESSAGESCROLL_H

#include "types.h"

struct TWindowMessageScroll
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x70];
    u32 m_98;
    void run_task();
};

#endif
