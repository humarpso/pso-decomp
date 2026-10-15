#ifndef PSO_OBJECT_TOBJEVTCOLLISION_H
#define PSO_OBJECT_TOBJEVTCOLLISION_H

#include "types.h"

struct TObjEvtCollision
{
    u16 m_1c;
    u8 _pad1E[0x66];
    u32 m_84;
    u8 _pad88[0x28];
    u32 m_b0;
    u32 m_b4;
    s32 is_any_player_in_range(f32 farg0);
    static void render();
    void run_task();
};

#endif
