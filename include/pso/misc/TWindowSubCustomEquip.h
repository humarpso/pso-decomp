#ifndef PSO_MISC_TWINDOWSUBCUSTOMEQUIP_H
#define PSO_MISC_TWINDOWSUBCUSTOMEQUIP_H

#include "types.h"

struct TWindowSubCustomEquip
{
    u8 _pad1C[0x4];
    s16 m_20;
    u8 _pad22[0x2];
    void* m_24;
    u8 _pad28[0x34];
    u32 m_5c;
    u8 m_60;
    u8 m_61;
    u8 m_62;
    u8 m_63;
    u8 m_64;
    u8 m_65;
    s16 m_66;
    u32 m_68;
    u32 m_6c;
    void update_customize_state();
    void set_relative_pos(void *arg1);
    int layout_selection_parts(void *arg1);
    void layout_entry_group(void *arg1);
    void reset_selection();
    s32 refresh_palette_slots();
    void update_rotate_anim();
    void handle_cancel();
    void handle_decide();
    void run_task();
    s32 calc_equip_index();
    int is_selected();
    void clear_flag_and_set_entry_state();
    void draw_cursor(u8 *arg1);
    s32 is_type_valid();
    static s32 get_saved_slot_for_index(s32 arg0, s8 arg1);
    void get_cursor_pos(void *arg1);
    void remove_duplicate_bindings(void *arg1);
    void toggle_action_binding(void *arg1);
};

#endif
