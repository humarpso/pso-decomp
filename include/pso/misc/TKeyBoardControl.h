#ifndef PSO_MISC_TKEYBOARDCONTROL_H
#define PSO_MISC_TKEYBOARDCONTROL_H

#include "types.h"

struct TKeyBoardControl
{
    u16 m_1c;
    s16 m_1e;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    static void run_main_frame();
    void close();
    void release_input();
    void release();
    static void run_tasks();
    int get_fog_ctrl();
    static void update();
    static s32 get_input();
    static s32 get_key_state();
    static void reset();
    static s32 any_pad_input_active();
    static s32 check_reset_button();
    static s32 check_and_read(s32 arg0);
    static s32 read_input(s32 arg0);
    static s32 is_key_down(s32 arg0);
    s32 check_input_angle();
    static void alloc_buffer();
    static s32 is_printable_key(void *arg0, u8 arg1);
    static s32 has_non_modifier_key();
    u16 lookup_key_char(u8 arg1);
    static s32 translate_key_char(void *arg0_, u8 arg1, u16 *arg2);
    s32 get_input_mode();
    s32 poll_input();
    s32 lookup_key_repeat_state(u8 arg1, u8 arg2);
    void process_key_input(u8 arg1);
    void process_all_key_states();
    void update_modifier_flags();
    void enable_keyboard_led();
    void enable_kana_led();
    void enable_caps_led();
    static void update_main_menu_scene();
    static void update_menu_scene();
    static void flush_input();
    static void init_pad_slots_and_read();
    static void read_pads();
    static s32 map_pad_buttons(u16 arg0);
    static s16 scale_axis_value(s16 x);
    void clamp_axes();
    static void init_pad_states();
    static void parse_pad_event(s32 arg0, u32 arg1);
    static void detect_device_type(s32 chan);
    static s32 disable_all_channels();
    void update_pressed_keys();
    static void update_key_events(s32 chan);
    static void disable_channel_polling(s32 arg0);
    static void init_char_select();
    static void dispatch_select_phase();
    static s32 get_ascii_key();
    static void read_key_checked(u8 arg0);
    static void update_input_frame();
    static void init_pad_state();
    s32 poll_key_state();
};

#endif
