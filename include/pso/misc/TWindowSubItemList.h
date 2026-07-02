#ifndef PSO_MISC_TWINDOWSUBITEMLIST_H
#define PSO_MISC_TWINDOWSUBITEMLIST_H

#include "types.h"

struct TWindowSubItemList
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x40];
    void* m_68;
    u8 _pad6C[0x14];
    u32 m_80;
    u32 m_84;
    u8 _pad88[0x4];
    u32 m_8c;
};

#endif
