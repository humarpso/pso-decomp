#ifndef PSO_OBJECT_TOBJCITYMAINWARP_H
#define PSO_OBJECT_TOBJCITYMAINWARP_H

#include "types.h"

struct TObjCityMainWarp
{
    void run_task();
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x24];
    u32 m_88;
    u8 _pad8C[0x24];
    u32 m_b0;
    u8 _padB4[0x4];
    u16 m_b8;
    u8 _padBA[0x2];
    u32 m_bc;
    u32 m_c0;
    u8 _padC4[0x8C];
    u32 m_150;
    static void update_unlock_flags();
    static void set_active_bit(s32 _w0);
    static void reset();
    void set_flag70_bit10();
    static s32 get_phase_flag();
    s32 are_all_players_in_range();
    s32 find_local_player_in_range(f32 farg0);
    void close_windows();
    void send_6x6A_set_boss_warp_flags(u16 value);
    static void notify_player_warp(void *arg0, s32 arg1);
    void trigger_warp_effect(s32 arg1);
    void update_floor_switch_state();
    void update_state();
    void update_warp_sequence();
    void update_challenge_state();
    void render();
    void *create();
    static void clear_active_bit();
    void update_warp_flags_from_story();
    void init_visible_mask();
};

#endif
