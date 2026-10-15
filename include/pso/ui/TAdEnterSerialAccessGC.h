#ifndef PSO_UI_TADENTERSERIALACCESSGC_H
#define PSO_UI_TADENTERSERIALACCESSGC_H

#include "types.h"

struct TAdEnterSerialAccessGC
{
    u8 _pad1C[0x24];
    u32 m_40;
    u32 m_44;
    u32 m_48;
    u32 m_4c;
    u32 m_50;
    u32 m_54;
    u32 m_58;
    u32 m_5c;
    u32 m_60;
    u32 m_64;
    static void render(void *self);
    static void draw_screen(void *arg0, void *arg1);
    static void draw_serial_separators();
    static void draw_serial_plates();
    void format_dashed_serial(u8 *src, u32 count, u32 *lens);
    static s32 *get_formatted_serial();
    static s32 parse_serial_value();
    static char *convert_serial_hex_to_decimal(int arg0);
    static char *hex_to_decimal_string(int arg0);
    static s32 open_message_window(void *arg0, void *arg1);
    s32 get_field20_state();
    void set_state_3();
    static void init_state();
    static void *create_callback(void *arg0, void *arg1, void *arg2);
    void set_active();
    static void create_default_callback();
    static s32 show_message_window(void *arg0, void *arg1);
    static void clear_serial_buffer();
    static void store_serial_access_key(s32 arg0, s32 arg1, s32 arg2);
    static char *serial_to_hex_string(int arg0);
    static int forward_input(void* p);
    void reset_input_state();
};

#endif
