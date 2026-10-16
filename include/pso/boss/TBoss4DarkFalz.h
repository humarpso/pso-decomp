#ifndef PSO_BOSS_TBOSS4DARKFALZ_H
#define PSO_BOSS_TBOSS4DARKFALZ_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TBoss4DarkFalz : public TObjEnemy {
    virtual ~TBoss4DarkFalz();
    u32 m_374;
    u32 m_378;
    u32 m_37c;
    u8 _pad380[0x8];
    u32 m_388;
    u32 m_38c;
    u32 m_390;
    u32 m_394;
    u32 m_398;
    static void render();
    void run_task();
    static void cleanup_global();
    static void load_resources();
    static s32 create(s32 arg0);
    static s32 get_instance();
    int is_field378_zero();
    s32 get_action_state();
    s32 get_phase();
    s32 get_state();
    void*get_hit_data();
    void save_position();
    int set_position_from(void* _w1);
    void swap_and_send();
    void swap_bytes();
    void set_code_25_4();
    void set_state();
    void update_fade_countdown();
    static void request_action_e(s32 arg0);
    void start_phase();
    void enter_state_126();
    void init_state();
    void enter_state_142();
    void update_timer();
    static void request_action_9(s32 arg0);
    void update_parts();
    void update_spawn_type2_countdown();
    void start_demo1();
    static void spawn_ancient_trap(s32 arg0);
    static void request_action_7(s32 arg0);
    void spawn_type1();
    void update_intro_demo();
    void start_effect();
    static void spawn_trap(s32 arg0);
    static void check_timeout(s32 arg0);
    void init_timer();
    void start_demo();
    static void check_players_near_center(void *self);
    static void clear_uro_link_state();
    static void init_uro_link();
    static void *create_demo2(void *arg0, void *arg1, void *arg2, void *arg3);
    static s32 count_active_players();
    static u8 is_ending_or_split_screen();
    void send_code_25_4(s32 arg);
    void send_action_packet(s32 arg);
    void change_state(s32 arg1);
    void update_visible_flag();
    s32 calc_rate_from_field();
    s32 is_timer_expired();
    void handle_defeat();
    static void refresh_player_equipment(void *self);
    static void end_player_camera_pans(void *self);
    static void freeze_all_players(void *self);
    void update_roar_sound_timer();
    static void free_global_instance();
    static int get_instance_count();
    static void push_players_out_of_zone(s32 arg0, s32 arg1);
    static void *create_demo1(void *arg0, void *arg1, void *arg2);
    static void dispatch_by_main_phase(u16 arg0);};

typedef char TBoss4DarkFalz_size[sizeof(TBoss4DarkFalz) == 0x39C ? 1 : -1];
#endif
