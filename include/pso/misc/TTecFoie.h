#ifndef PSO_MISC_TTECFOIE_H
#define PSO_MISC_TTECFOIE_H

#include "types.h"

struct TTecFoie
{
    void play_foie_cast_sound();
    void run_task();
    u32 m_1c;
    void* m_20;
    u8 _pad24[0xA2];
    s16 m_c6;
    u16 m_c8;
    u8 _padCA[0x2E];
    u32 m_f8;
    u8 _padFC[0x34];
    u32 m_130;
    void render();
    u8 *construct_aimed(s32 arg1, u8 *arg2, u8 *arg3, s16 arg4);
    void create_particle_emitters();
    void init_projectile_params();
    static void create_ex(void *arg0, void *arg1, void *arg2, void *arg3);
    static void create(void *arg0, void *arg1, void *arg2, void *arg3);
};

#endif
