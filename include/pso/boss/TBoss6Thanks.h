#ifndef PSO_BOSS_TBOSS6THANKS_H
#define PSO_BOSS_TBOSS6THANKS_H
#include "types.h"
struct TBoss6Thanks {
    u8 _object_header[0x1C];
    s32 m_1c;
    s32 current_motion;
    s32 m_24;
    f32 frame0;
    f32 frame1;
    f32 opacity;
    u32 m_34;
    void *model0;
    void *model1;
    s32 texture0;
    s32 texture1;
    void *motions[2];
    void *motion1;
    void run_task();
    void render();
};
#endif
