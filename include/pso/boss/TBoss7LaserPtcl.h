#ifndef PSO_BOSS_TBOSS7LASERPTCL_H
#define PSO_BOSS_TBOSS7LASERPTCL_H

#include "types.h"

struct TBoss7LaserPtclVector { f32 x, y, z; };

struct TBoss7LaserPtcl {
    u8 unknown00[0x1C];
    s32 state;
    TBoss7LaserPtclVector position;
    TBoss7LaserPtclVector direction;
    TBoss7LaserPtclVector displacement;
    void *particles[2];
    f32 travel_distance;
    u8 unknown50[4];
    u32 m_54;

    void run_task();
};

#endif
