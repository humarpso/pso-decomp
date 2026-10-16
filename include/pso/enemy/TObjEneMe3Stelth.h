#ifndef PSO_ENEMY_TOBJENEME3STELTH_H
#define PSO_ENEMY_TOBJENEME3STELTH_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneMe3Stelth : public TObjEneDD_ST {
    virtual ~TObjEneMe3Stelth();
    void copy_pos_with_height_offset();
    void setup_move_bounds();
    f32 get_node_world_y();
    u8 test_body_collision(s32, f32);
    s32 sub_800F4850();
    s32 is_angle_in_range();
    u8 sub_800F47D4();
    void sub_800F4758();
    void sub_800F42B8(s32);
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    void render();
    void run_task();
    u8 unk_374[0x30];
    u32 m_3c0;
    u8 _pad3C4[0x8];
    u32 m_3cc;
    u32 m_3d0;
    u8 unk_3D4[0x30];
    void* m_404;
    static void destroy_resources();
    s32 try_spawn_ground_effect(s32 arg1);
    void play_hit_effect();
    static void spawn_attack(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);};

#endif
