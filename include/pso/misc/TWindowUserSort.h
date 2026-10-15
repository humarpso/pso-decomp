#ifndef PSO_MISC_TWINDOWUSERSORT_H
#define PSO_MISC_TWINDOWUSERSORT_H

#include "types.h"

struct TWindowUserSort
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x38];
    u32 m_60;
    void run_task();
};

#endif
