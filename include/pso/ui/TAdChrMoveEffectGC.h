#ifndef PSO_UI_TADCHRMOVEEFFECTGC_H
#define PSO_UI_TADCHRMOVEEFFECTGC_H

#include "types.h"

struct TAdChrMoveEffectGC
{
    u32 m_1c;
    u32 m_20;
    void copy4(void* q);
    void render();
    void reset_effect_entries();
    void clear_entries();
    void setup_move_effect_params(s32 arg1, s32 arg2);
    void run_task();
};

#endif
