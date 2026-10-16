#ifndef PSO_ENEMY_TOBJENEME3SHINOWA_H
#define PSO_ENEMY_TOBJENEME3SHINOWA_H

#include "types.h"

struct TObjEneMe3Shinowa
{
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
    u8 _pad1C[0x30A];
    s16 m_326;
    u8 _pad328[0x9C];
    u32 m_3c4;
    u8 _pad3C8[0x20];
    void* m_3e8;
    void dispatch_if_active();
    s32 update_effect();
    void copy_position_vector();
};

#endif
