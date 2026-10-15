#ifndef PSO_MISC_TWINDOWSUBAREAMAPDISP_H
#define PSO_MISC_TWINDOWSUBAREAMAPDISP_H

#include "types.h"

struct TWindowSubAreaMapDisp
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x3A];
    u32 m_5c;
    u8 _pad60[0xC];
    u32 m_6c;
    u32 m_70;
    u32 m_74;
    void update_manual_scroll();
    void render();
    void run_task();
    void update_visibility();
};

#endif
