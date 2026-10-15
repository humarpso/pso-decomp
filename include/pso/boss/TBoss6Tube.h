#ifndef PSO_BOSS_TBOSS6TUBE_H
#define PSO_BOSS_TBOSS6TUBE_H

#include "types.h"

struct TBoss6Tube
{
    u32 m_1c;
    u32 m_20;
    u32 m_24;
    u32 m_28;
    u32 m_2c;
    void run_task();
    void render();
    static f32 scale_by_const(f32 farg0);
    static f32 calc_tube_progress(s32 arg0);
    static void reset_state();
    void update_wobble();
    void spawn_trap();
    void update_timer();
    static void *create(void *arg0);
    static void free_resources();
    static void load_resources();
};

#endif
