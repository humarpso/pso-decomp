#ifndef PSO_MISC_TOKEY_H
#define PSO_MISC_TOKEY_H

#include "types.h"

struct TOKey
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x34];
    void* m_98;
    u8 _pad9C[0x20];
    u32 m_bc;
    u8 _padC0[0x8];
    u32 m_c8;
    u8 _padCC[0x4];
    u32 m_d0;
    u32 m_d4;
    u32 m_d8;
    u32 m_dc;
    u32 m_e0;
    u32 m_e4;
    void play_activate_sound();
    void trigger_activate_sound();
    void update_lock_state();
    void update_armed_switch();
    void debug_draw_key_id();
    void reset_and_notify();
    void init_switch_id();
    void init_key();
    void bswap_6x05_switch_flag();
    void *destroy_key_base(s16 arg1);
    void *destroy_key_object(s16 arg1);
    void *init();
    s32 set_ready_if_pressed();
    void handle_switch_trigger(void *arg1);
    void trigger_camera_pan(s32 arg1);
    void send_switch_on();
    s32 is_any_player_in_range();
    s32 is_local_player_in_range();
    s32 is_confirm_pressed();
    void submit_cursor_target();
};

#endif
