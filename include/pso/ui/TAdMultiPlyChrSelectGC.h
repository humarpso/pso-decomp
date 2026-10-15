#ifndef PSO_UI_TADMULTIPLYCHRSELECTGC_H
#define PSO_UI_TADMULTIPLYCHRSELECTGC_H

#include "types.h"

struct TAdMultiPlyChrSelectGC
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u8 _pad28[0x14];
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x4];
    u32 m_48;
    u32 m_4c;
    u8 _pad50[0x14];
    u32 m_64;
    void set_index_and_close_status(s32 arg1);
    void set_status_value(s32 arg1);
    void handle_event(s32 arg1);
    void initialize_selection_state(s32 arg1);
    static int get_instance();
    void set_state_ready();
    s32 get_cursor();
    void set_state(s32 v);
    s32 get_card_index();
    static int get_card_instance();
    s32 get_selection();
    static void set_select_mode(int a0, int a1);
    void set_entry_value(s32 arg1, u32 arg2);
    void draw_selection_cursors();
    void update();
    void reset_cursor_state();
    void init_slot_position(s32 arg1, s32 arg2, s32 arg3);
    void clear_slot_entries(s32 arg1);
    static void reset_slot_selection_table();
    static void split_slot_index(s32 arg0, s32 *arg1, s32 *arg2);
    static void find_first_open_cell(s32 arg0, u32 *arg1);
    void move_cursor(s32 x_, s32 y_, s32 dx, s32 dy, s32 depth);
    void update_option_cursor();
    void handle_dpad_input();
    static void init();
    static s32 get_status();
    static s32 is_selection_confirmed();
    static s32 count_ready();
    static void remove_selected_slot(s32 arg0);
    static void add_selected_slot();
    static s32 get_clamped_cursor();
    static void reset_slot_selections();
    s32 get_field_20();
    static int get_state();
    static int get_selected_slot();
    static int get_global_6700();
    static void update_transition_anim_if_active();
    void update_transition_anim();
    s32 get_player_index();
    void set_cursor_index(s32 v);
    void set_field_100(s32 v);
    static void render(void *self);
    static s32 create_confirm_window();
    static s32 create_choice_menu();
    static void collect_player_slots();
    s32 get_state_result();
    static u8 *format_player_number_text(s32 arg0, s32 arg1);
    int request_scene_change();
    void check_cancel_input();
    void handle_input();
    void update_input_state();
    void close_and_reset();
    void update_idle_timer();
    void update_confirm_start();
    void handle_cancel_state();
    void update_state_move();
    void handle_confirm_state();
    void update_state();
    void update_card_select_state();
    void update_state_wait_card();
    void update_select();
    void reset_to_select();
    void update_button_input();
    void run_task();
    void set_field_4ec(s32 v);
    static void restore_selection();
    void update_field_4E8();
    s32 get_field_0x530();
    void set_field_1c(s32 v);
    s32 get_mode();
    s32 is_state_closing();
    static int get_global_state();
    static int get_select_flag();
    static int get_chr_select_state();
    s32 get_ready_state();
    void *init_player(void *arg1, void *arg2, void *arg3, void *arg4);
    static u32 get_move_effect(s32 arg0);
};

#endif
