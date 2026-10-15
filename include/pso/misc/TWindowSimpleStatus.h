#ifndef PSO_MISC_TWINDOWSIMPLESTATUS_H
#define PSO_MISC_TWINDOWSIMPLESTATUS_H

#include "types.h"

struct TWindowSimpleStatus
{
    u8 _pad1C[0x4];
    u16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x38];
    u32 m_60;
    void run_task();
    void *create(void *arg1);
};

#endif
