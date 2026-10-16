#ifndef PSO_ENEMY_TOBJENEME3SHINOWA_H
#define PSO_ENEMY_TOBJENEME3SHINOWA_H

#include "types.h"
#include "pso/enemy/TObjEneDD_ST.h"

struct TObjEneMe3Shinowa : public TObjEneDD_ST {
    virtual ~TObjEneMe3Shinowa();
    virtual void vfunc_105();
    virtual u8 can_hit_same_target();
    virtual void vfunc_107();
    virtual void vfunc_108();
    virtual s32 vfunc_109();
    virtual void vfunc_110();
    virtual void vfunc_111();
    virtual void vfunc_112();
    virtual void action(s32);
    virtual void vfunc_114();
    virtual void vfunc_115();
    virtual void vfunc_116();
    virtual void update_mirage();
    virtual void vfunc_118();
    void init_enemy();
    f32 get_node_world_y();
    u8 check_body_collision_at(s32, f32);
    s32 sub_800E701C();
    s32 sub_800E6FE0();
    void sub_800E6F64();
    void sub_800E6BB8(s32);
    void vfunc_63();
    void vfunc_62();
    void vfunc_61();
    void vfunc_28();
    u32 m_374;
    u8 unk_378[0x24];
    u32 m_39c;
    u32 m_3a0;
    u8 unk_3A4[0x4];
    u32 m_3c4;
    u8 unk_3C8[0x4];
    void* m_3cc;
    u8 unk_3D0[0x18];
    void* m_3e8;
    void dispatch_if_active();
    s32 update_effect();
    void copy_position_vector();};

#endif
