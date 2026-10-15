#ifndef PSO_MISC_TWINDOWCHOICESETTING_H
#define PSO_MISC_TWINDOWCHOICESETTING_H

#include "types.h"

struct TWindowChoiceSetting
{
    u8 _pad1C[0x8];
    void* m_24;
    u8 _pad28[0x34];
    u32 m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x4];
    u16 m_70;
    u8 _pad72[0x6];
    u32 m_78;
    u32 m_7c;
    u16 m_80;
    void request_close();
    void draw();
    void move_next_choice();
    void move_cursor_prev();
    void update_scroll_offset();
    void clamp_scroll();
    void draw_setting(s32 arg1);
    void run_task();
    int is_selected();
};

#endif
