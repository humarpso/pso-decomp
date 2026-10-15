#ifndef PSO_MISC_TWINDOWSUBCUSTOMSELECT_H
#define PSO_MISC_TWINDOWSUBCUSTOMSELECT_H

#include "types.h"

struct TWindowSubCustomSelect
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x4];
    u32 m_2c;
    u8 _pad30[0x4];
    u32 m_34;
    u8 _pad38[0x24];
    u32 m_5c;
    u8 _pad60[0x8];
    void* m_68;
    u8 _pad6C[0x4];
    u8 m_70;
    u8 m_71;
    u8 m_72;
    u8 m_73;
    u32 m_74;
    u32 m_78;
    u32 m_7c;
    u32 m_80;
    void handle_cancel();
    void handle_decide();
    s32 update_list_scroll();
    void handle_grid_navigation();
    void draw_cursor(u8 *arg1);
    void draw_palette_cells(int arg1);
    void run_task();
    int is_active();
};

#endif
