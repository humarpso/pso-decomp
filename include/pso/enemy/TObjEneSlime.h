#ifndef PSO_ENEMY_TOBJENESLIME_H
#define PSO_ENEMY_TOBJENESLIME_H

#include "types.h"

struct TObjEneSlime
{
    u8 _pad1C[0x14];
    u32 m_30;
    u8 _pad34[0x4];
    void* m_38;
    u8 _pad3C[0x330];
    u32 m_36c;
    u8 _pad370[0x4];
    void* m_374;
    u8 _pad378[0x3C];
    u32 m_3b4;
    void release_split_slimes();
    void render();
    void run_task();
    static void free_instance();
    static void spawn_pair();
    static s32 create(s32 arg0);
    static void spawn_child(s16 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
};

#endif
