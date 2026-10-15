#ifndef PSO_MISC_TWINDOWSHORTCUT_H
#define PSO_MISC_TWINDOWSHORTCUT_H

#include "types.h"

struct TWindowShortCut
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x38];
    u32 m_60;
    u32 m_64;
    u32 m_68;
    u32 m_6c;
    u32 m_70;
    void run_task();
};

#endif
