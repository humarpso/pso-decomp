#ifndef PSO_ENEMY_TOBJENEMORFOS_H
#define PSO_ENEMY_TOBJENEMORFOS_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneMorfos : public TObjEneDD_ST {
    virtual ~TObjEneMorfos();
    void render();
    void run_task();
    u8 unk_374[0x30];
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
    u8 unk_480[0x58];
};

typedef char TObjEneMorfos_size[sizeof(TObjEneMorfos) == 0x4D8 ? 1 : -1];
#endif
