#ifndef PSO_ENEMY_TOBJENEDD_H
#define PSO_ENEMY_TOBJENEDD_H

#include "types.h"

struct TObjEneDD
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x68];
    u32 m_a4;
    u32 m_a8;
    u8 _padAC[0x74];
    void* m_120;
    u8 _pad124[0x124];
    void* m_248;
    u8 _pad24C[0x64];
    u32 m_2b0;
    u8 _pad2B4[0x72];
    s16 m_326;
    u8 _pad328[0x4C];
    u32 m_374;
    u32 m_378;
    u8 _pad37C[0x4];
    u32 m_380;
    u32 m_384;
    u32 m_388;
    int was_hit_by_ranged();
    static f32 calc_elapsed_scaled();
    void init_float_params();
    void update_velocity();
    void *init_object();
    static void init_lights();
    static s32 clamp_frame_index(s32 arg0);
    static s32 check_v2_mode();
    int get_target_state_a();
    int get_target_state_b();
    int query_teammate_state();
    int update_lobby_state();
    static u8 is_phase_e();
    static u8 is_main_phase_15();
    static void clear_global_flag_400();
    int update_player_state();
    void draw_oriented_shadow(s32 arg1, s32 arg2, u32 arg3);
    int update_primary_light();
    int update_secondary_light();
    void reload_stats_keep_hp_tp();
    void reset_hp();
    int get_camera_ctrl();
    int update_camera_sequence();
    int initialize_enemy_state();
    static s32 get_random_scaled();
    static f32 rand_range(f32 farg0, f32 farg1);
    int set_state_8();
    int check_state_flag_4();
    int check_state_flag_2();
    int check_state_flag_1();
    static void send_damage_message(s32 arg0, u8 *arg1);
    static void inflict_poison(s32 arg0, u8 *arg1);
    void emit_effect_at_position(void* a1);
    static void emit_effect(void* p, int a1, int a2);
    static void emit_enemy_effect(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
    static void setup(void* p, int a1, int a2);
    static void setup_instance(s32 arg0, s32 arg1, u8 *arg2, s32 arg3);
    u8 is_alive();
    void transform_relative_position(void* a1);
    s32 is_target_unobstructed(s32 arg1);
    u8 is_valid_target();
    void transform_part_positions();
    void init_model();
    void clear_field_388();
    void set_active();
    int has_move_failures(s32 arg1);
    void move_to_wall_clamped_destination(f32 farg0, f32 farg1, f32 farg2);
    void move_with_wall_slide_commit(f32 farg0, f32 farg1, f32 farg2);
    void move_with_wall_stop(f32 farg0, f32 farg1, f32 farg2);
    void move_clamped_on_ground(f32 farg0, f32 farg1, f32 farg2);
    void move_with_wall_slide_on_ground(f32 farg0, f32 farg1, f32 farg2);
    void move_to_shot_position(f32 farg0, f32 farg1, f32 farg2);
    void calc_shot_position(u8 *arg1, f32 farg0, f32 farg1, f32 farg2);
    static void set_squared_value(f32 farg0);
    static void collect_target_candidates(s32 arg0, f32 farg0);
    static void create_instance();
    static int get_enemy_count();
    void handle_state(s32 arg1);
    void dispatch_action(s32 arg1);
    static void noop();
    void state_damaged(s32 arg1);
    void state_chase_target(s32 arg1);
};

#endif
