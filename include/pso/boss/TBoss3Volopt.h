#ifndef PSO_BOSS_TBOSS3VOLOPT_H
#define PSO_BOSS_TBOSS3VOLOPT_H

#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct TBoss3Volopt : public TObjEnemyCustom {
    virtual ~TBoss3Volopt();
    void sub_8003D340();
    u16 get_param_offset(s32);
    s32 get_adjusted_angle(s32);
    u8 unk_38C[0x1C];
    s32 m_3a8;
    u8 unk_3AC[0x10];
    u32 m_3bc;
    static void update_phase();
    static void alloc_idle_event();
    void update_intro_cutscene();
    void start_phase2();
    virtual void render();
    void update_camera_seq();
    virtual void run_task();
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
    void update_and_send_60();
    void swap_6x18_fields();
    void broadcast_state();
    void fade_out_and_finish();
    void update_fade_out();
    s32 query_field_30(s32 *arg1);
    static void create_breakup_mdl(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
    void play_area_variant_sound();
    void play_area_se_with_particle();
    void play_area_sound_effect();
    static s32 collect_and_count(u32 arg0, s32 arg1);
    void call_vt21();
    int is_active();
    static void update_if_active(s32 _w0);
    static void alloc_event(s16 arg0, s32 arg1);
    static void alloc_effect_node(u32 arg0, s16 arg1, s32 arg2);
    static void queue_event_1D(s16 arg0, s16 arg1);
    static s32 remap_area_sound_id(s32 arg0);
    void draw_screen_fade();
    u8 unk_3C0[0x20];
    s32 m_3e0;
    u8 unk_3E4[0xC];
    s16 m_3f0;
    u8 unk_3F2[0x12];
    s32 m_404;
};

typedef char TBoss3Volopt_size[sizeof(TBoss3Volopt) == 0x408 ? 1 : -1];
#endif
