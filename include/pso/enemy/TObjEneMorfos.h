#ifndef PSO_ENEMY_TOBJENEMORFOS_H
#define PSO_ENEMY_TOBJENEMORFOS_H

#include "types.h"

struct TObjEneMorfos
{
    void render();
    void run_task();
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x24];
    u32 m_60;
    u8 _pad64[0x40];
    u32 m_a4;
    u8 _padA8[0x30];
    u32 m_d8;
    u32 m_dc;
    u8 _padE0[0x1F4];
    u16 m_2d4;
    u8 _pad2D6[0x26];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u32 m_3c4;
    u8 _pad3C8[0xC];
    u32 m_3d4;
    u8 _pad3D8[0x14];
    void* m_3ec;
    u8 _pad3F0[0x18];
    void* m_408;
    u8 _pad40C[0x18];
    void* m_424;
    u8 _pad428[0x6C];
    u32 m_494;
    void* m_498;
    static int get_instance();
    void draw_body();
    static void record_camera_path_point();
    void state_death(s32 arg1);
    void state_patrol(s32 arg1);
    void state_appear(s32 arg1);
    void handle_event_transition(s32 ev);
    void play_sound_in_band();
    void init_target_offsets();
    void set_hover_target_position();
    s32 approach_value(s32 arg1, s32 arg2);
    s32 try_enter_low_hp_state();
    s32 check_low_hp_trigger();
    void init_instance();
    static void unload_static_data();
    void *create();
    static s32 snap_to_ground(s32 arg0, s32 arg1);
    void update_ground_probe();
    static u8 check_value_in_range(void *arg0, u16 arg1, u16 arg2, u16 arg3);
};

#endif
