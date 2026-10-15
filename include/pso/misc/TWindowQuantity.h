#ifndef PSO_MISC_TWINDOWQUANTITY_H
#define PSO_MISC_TWINDOWQUANTITY_H

#include "types.h"

struct TWindowQuantity
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x3C];
    void* m_64;
    void set_position(s32 arg1);
    void run_task();
};

#endif
