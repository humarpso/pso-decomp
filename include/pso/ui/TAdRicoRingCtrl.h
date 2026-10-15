#ifndef PSO_UI_TADRICORINGCTRL_H
#define PSO_UI_TADRICORINGCTRL_H

#include "types.h"

struct TAdRicoRingCtrl
{
    u32 m_1c;
    u32 m_20;
    void set_scale4(f32 farg0);
    static void *create(void *arg0);
    static void release_global_805D4A00();
    static void load_static_resource();
    void start_fade_all(f32 x);
    void run_task();
    void start_fade(f32 farg0);
    void start_anim(f32 farg0);
};

#endif
