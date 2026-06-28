#ifndef PSO_MISC_TWINDOWSUBSHORTCUTLIST_H
#define PSO_MISC_TWINDOWSUBSHORTCUTLIST_H

#include "types.h"

struct TWindowSubShortCutList
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x58];
    u32 m_80;
    u8 _pad84[0x4];
    u32 m_88;
};

#endif
