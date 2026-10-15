#ifndef PSO_MISC_TWINDOWSUBEQUIPKIND_H
#define PSO_MISC_TWINDOWSUBEQUIPKIND_H

#include "types.h"

struct TWindowSubEquipKind
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x40];
    void* m_68;
    u8 _pad6C[0x14];
    u32 m_80;
    u32 m_84;
    s16 m_88;
    s16 m_8a;
    void run_task();
};

#endif
