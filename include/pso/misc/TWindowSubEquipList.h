#ifndef PSO_MISC_TWINDOWSUBEQUIPLIST_H
#define PSO_MISC_TWINDOWSUBEQUIPLIST_H

#include "types.h"

struct TWindowSubEquipList
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x58];
    u32 m_80;
    int run_task();
};

#endif
