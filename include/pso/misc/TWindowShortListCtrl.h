#ifndef PSO_MISC_TWINDOWSHORTLISTCTRL_H
#define PSO_MISC_TWINDOWSHORTLISTCTRL_H

#include "types.h"
#include "pso/TObject.h"

struct TWindowShortListCtrl : public TObject {
    virtual ~TWindowShortListCtrl();
    virtual void run_task();
    u8 m_1c;
    u8 m_1d;
    s16 m_1e;
    void* m_20;
    u32 m_24;
    void* m_28;
    u32 m_2c;
    u32 m_30;
    u32 m_34;
    u32 m_38;
    void update_variant_a();
    void update_variant_b();
    void update_variant_c();
    void *destroy(s16 arg1);
    static s32 get_card_window_flags();
    static s32 get_card_status_bits();
    void set_flag70_bit10();
    void set_displayed_item(s32 arg1);
    s32 is_technique_usable();
    void swap_card_entries(s32 arg1, s32 arg2);
    static void assign_item_to_palette(u32 arg0, u32 arg1);
    void destroy_children();
    void *create_window(s32 arg1, s32 arg2);
    virtual void render();
    static void set_card_window_flags(s32 arg0, s32 arg1);
    s16 get_cursor_pos();
    void update_cursor_pos();
    s16 get_selected_index();
    static void assign_shortcut(s32 arg0, s32 arg1, s32 arg2);};

typedef char TWindowShortListCtrl_size[sizeof(TWindowShortListCtrl) == 0x3C ? 1 : -1];
#endif
