#ifndef PSO_BOSS_TBOSS3VOLOPT_H
#define PSO_BOSS_TBOSS3VOLOPT_H

#include "types.h"

struct TBoss3Volopt
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x248];
    void* m_284;
    u8 _pad288[0x74];
    void* m_2fc;
    u8 _pad300[0x26];
    s16 m_326;
    u8 _pad328[0x4C];
    u32 m_374;
    u8 _pad378[0x4];
    u32 m_37c;
    u8 _pad380[0x3C];
    u32 m_3bc;
    static void update_phase();
    static void alloc_idle_event();
    void update_intro_cutscene();
    void start_phase2();
    static void render();
    void update_camera_seq();
    void run_task();
    static void *create(void *arg0);
    static void free_parts();
    static void load_resources();
    int reset_photon_effect();
    s32 get_field_3e0();
    void swap_6x85_fields();
    void bswap_actions();
    void send_state();
    void swap_6x16_fields();
    void swap_6x15_fields();
    void finalize_and_send_60();
    void set_type();
    void send_6x16();
    void send_update_60();
    void set_player_flag_08000000();
    void set_flag_08000000();
    void load_params_from_table(s32 i);
    void update_and_send_60();
    void swap_6x18_fields();
    void broadcast_state();
    void *dt(s16 arg1);
    void *ct(void *arg1, void *arg2);
    void fade_out_and_finish();
    void *destroy_task_object(s16 arg1);
    void *init_fade_color(void *arg1, void *arg2);
    void update_fade_out();
    void *init_fade(void *arg1, void *arg2);
    void *init_object(void *);
    void update_homing_projectile();
    s32 query_field_30(s32 *arg1);
    static void create_breakup_mdl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
    void play_area_variant_sound();
    void play_area_se_with_particle();
    void play_area_sound_effect();
    static s32 collect_and_count(u32 arg0, s32 arg1);
    void play_proximity_sound();
    void call_vt21();
    int is_active();
    static void update_if_active(s32 _w0);
    static void alloc_event(s16 arg0, s32 arg1);
    static void alloc_effect_node(u32 arg0, s16 arg1, s32 arg2);
    static void queue_event_1D(s16 arg0, s16 arg1);
    static s32 remap_area_sound_id(s32 arg0);
    void draw_screen_fade();
};

#endif
