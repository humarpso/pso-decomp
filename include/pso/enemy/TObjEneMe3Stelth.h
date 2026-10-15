#ifndef PSO_ENEMY_TOBJENEME3STELTH_H
#define PSO_ENEMY_TOBJENEME3STELTH_H

#include "types.h"

struct TObjEneMe3Stelth
{
    u8 _pad1C[0x30A];
    s16 m_326;
    u8 _pad328[0x98];
    u32 m_3c0;
    u8 _pad3C4[0x8];
    u32 m_3cc;
    u8 _pad3D0[0x34];
    void* m_404;
    static void destroy_resources();
    s32 try_spawn_ground_effect(s32 arg1);
    void play_hit_effect();
    static void spawn_attack(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);
};

#endif
