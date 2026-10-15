#ifndef PSO_UI_TADSCROLLWINGC_H
#define PSO_UI_TADSCROLLWINGC_H

#include "types.h"

struct TAdScrollWinGC
{
    u8 _pad1C[0x20];
    u32 m_3c;
    u32 m_40;
    u32 m_44;
    u32 m_48;
    u32 m_4c;
    u32 m_50;
    void render();
    s32 get_scroll_delay_for_mode();
    void advance_scroll(f32 v);
    void close();
    void close_window();
    void run_task();
};

#endif
