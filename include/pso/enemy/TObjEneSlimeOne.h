#ifndef PSO_ENEMY_TOBJENESLIMEONE_H
#define PSO_ENEMY_TOBJENESLIMEONE_H

#include "types.h"

struct TObjEneSlimeOne
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    u32 m_38;
    u32 m_3c;
    u32 m_40;
    u8 _pad44[0x1C];
    u32 m_60;
    u8 _pad64[0x270];
    u16 m_2d4;
    u8 _pad2D6[0x26];
    void* m_2fc;
    u8 _pad300[0x84];
    u32 m_384;
    u32 m_388;
    u8 _pad38C[0x1C];
    void* m_3a8;
    u8 _pad3AC[0x30];
    void* m_3dc;
    u8 _pad3E0[0xC];
    u32 m_3ec;
    u32 m_3f0;
    s32 get_attack_target();
    s32 is_in_water_bomb_states();
    static int get_instance();
    int find_nearest_enemy_masked(f32 farg0);
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
};

#endif
