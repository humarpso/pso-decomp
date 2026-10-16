#ifndef PSO_ENEMY_TOBJENEPANARMS_H
#define PSO_ENEMY_TOBJENEPANARMS_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEnePanarms : public TObjEnemy {
    virtual ~TObjEnePanarms();
    s32 sub_800DE390();
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void set_random_action_timer(int minimum, int range);
    u8 unk_374[0x4];
    s32 m_378;
    u8 unk_37C[0x4];
    s32 m_380;
    u8 unk_384[0x4];
    s32 m_388;
    u32 m_38c;
    u32 m_390;
    u8 unk_394[0x4];
    s32 m_398;
    u32 m_39c;
    void* m_3a0;
    u8 unk_3A4[0x4];
    f32 m_3a8;
    u8 unk_3AC[0x4];
    f32 m_3b0;
    s32 action_timer;
    u8 unk_3B8[0x4];
    s32 m_3bc;
    u8 unk_3C0[0x4];
    s32 m_3c4;
    u8 unk_3C8[0xC];
    s32 m_3d4;
    u8 unk_3D8[0x4];
    void* m_3dc;
    u8 unk_3E0[0x4];
    u32 m_3e4;
    u32 m_3e8;
    u32 m_3ec;
    u8 _pad3F0[0x4];
    u32 m_3f4;
    u32 m_3f8;
    u32 m_3fc;
    void* m_400;
    u8 unk_404[0x58];
    s32 m_45c;
    u8 unk_460[0x14];
    u32 m_474;
    u32 m_478;
    int find_nearest_enemy_with_flag(s32 arg1, f32 farg0);
    static void spawn_npc_pair();
    void update_action_timer();
    void init_attack_state();
    void init_open_state();
    void update_move_timer();
    void start_phase3_timer12();
    void start_phase2_timer150();
    void update_attack();
    void init_attack_state2();
    void init_action();
    void update_chase_target();
    void init_state_2();
    void apply_effect_if_flagged();
    void update_hit_state();
    void restore_from_linked_object();
    void init_state_16();
    void update_move_to_target();
    void init_state_1();
    void start_action();
    void handle_split_flag();
    void init_split();
    void snap_to_parent_position();
    void reset_state();
    void spawn_periodic_particle();
    void update_offset_from_parent();
    void reset_split();
    static int do_action_2(void* p);
    void init_state();
    void update_linked_effect();
    void draw();
    static s32 create_bara(s32 arg0, s32 arg1);
    int find_nearest_enemy_with_flag_alt_target(s32 arg1, f32 farg0);
    static s32 create(s32 arg0);
    void init(void* a1);
    int get_state_flag();
    void copy_target_state(void* a1);};

#endif
