#ifndef PSO_ENEMY_TOBJENESLIMEONE_H
#define PSO_ENEMY_TOBJENESLIMEONE_H

#include "types.h"
#include "pso/enemy/TObjEnemy.h"

struct TObjEneSlimeOne : public TObjEnemy {
    virtual ~TObjEneSlimeOne();
    void sub_800E9090();
    virtual void vfunc_63();
    virtual void vfunc_62();
    virtual void vfunc_61();
    virtual f32 receive_direct_attack(void *, void *, void *, s32, s32);
    virtual void render();
    virtual void run_task();
    u8 unk_374[0xC];
    u8 * m_380;
    u32 m_384;
    u32 m_388;
    u8 unk_38C[0x4];
    s32 m_390;
    u8 unk_394[0xC];
    f32 m_3a0;
    u8 unk_3A4[0x4];
    void* m_3a8;
    u8 unk_3AC[0x1C];
    s32 m_3c8;
    s32 m_3cc;
    u8 unk_3D0[0xC];
    void* m_3dc;
    u8 unk_3E0[0x8];
    void * m_3e8;
    u32 m_3ec;
    u32 m_3f0;
    s32 get_attack_target();
    s32 is_in_water_bomb_states();
    static int get_instance();
    int is_timer_active();
    int find_nearest_enemy_with_flag(s32 arg1, f32 farg0);
    int check_player_field_7cc();
    void draw_part(s32 arg1);
    void advance_animation_state();
    s32 is_reached_target_depth();
    void set_motion_state(s32 arg1);
    void copy_position();
    void set_random_timer_15();
    void clear_child_flag();
    void set_target_flag_bit0();
    static s32 create(s32 arg0, s32 arg1, s32 arg2);
    static s32 create(s32 arg0, s32 arg1);
    void set_state(s32 arg1);
};

typedef char TObjEneSlimeOne_size[sizeof(TObjEneSlimeOne) == 0x3F4 ? 1 : -1];
#endif
