#ifndef PSO_ITEM_TITEMEFFPG_H
#define PSO_ITEM_TITEMEFFPG_H

#include "types.h"

struct TItemEffPG
{
    u8 _pad1C[0x8C];
    u16 m_a8;
    u8 _padAA[0x26];
    u32 m_d0;
    void *init_fields(s32 _w1, void * _w2);
    u8 *create();
    void draw_effect_models();
    s32 countdown_timer();
    void *destroy(s16 arg1);
    void run_task();
    static void create(void *arg0, void *arg1);
    void*init_params();
};

#endif
