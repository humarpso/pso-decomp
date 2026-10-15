#ifndef PSO_OBJECT_TOBJFOGCOLLISION_H
#define PSO_OBJECT_TOBJFOGCOLLISION_H

#include "types.h"

struct TObjFogCollision
{
    u8 _pad1C[0x68];
    u32 m_84;
    u32 m_88;
    u8 _pad8C[0x4];
    u32 m_90;
    u32 m_94;
    void draw_volume();
    void dispatch_collision_virtuals();
    void run_task();
    s32 check_collision(u16 arg1);
};

#endif
