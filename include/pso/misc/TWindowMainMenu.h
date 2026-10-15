#ifndef PSO_MISC_TWINDOWMAINMENU_H
#define PSO_MISC_TWINDOWMAINMENU_H

#include "types.h"

struct TWindowMainMenu
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x20];
    u32 m_48;
    u32 m_4c;
    u16 m_50;
    u16 m_52;
    u32 m_54;
    u8 _pad58[0x4];
    u32 m_5c;
    void show_child_window();
    void update_trade_submenu();
    void update_submenu();
    void close_submenu(void* a1);
    void refresh_submenu(void* a1);
    void close();
    static void render();
    static void run_task();
    static void set_entry_field_20(s32 arg0, s32 arg1);
    int is_item_active();
    void set_symbol_chat_parts(void * _w1);
    void update_item_tween();
    void init_color();
    void pop_level();
    int get_selected_item_type();
    void clear_menu_flags();
    int is_flag_set();
    int get_menu_flag();
    s32 find_free_slot();
    s32 update_if_active(s32 _w1);
    void set_target_y(f32 farg0);
    void update_scaled_position();
    void draw_entries_reversed(u8 *arg1);
    void update_slide_position();
    void handle_cancel();
    void handle_confirm();
    static void *create_menu(void *arg0, void *arg1);
};

#endif
