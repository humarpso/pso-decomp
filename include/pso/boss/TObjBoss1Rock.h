#ifndef PSO_BOSS_TOBJBOSS1ROCK_H
#define PSO_BOSS_TOBJBOSS1ROCK_H

#include "types.h"

struct TObjBoss1Rock
{
    void* m_1c;
    u8 _pad20[0x8];
    void* m_28;
    u8 _pad2C[0x8];
    u32 m_34;
    u32 m_38;
    u32 m_3c;
    u8 _pad40[0x10];
    u32 m_50;
    void render();
    void run_task();
    void *construct(void *arg1, void *arg2, void *arg3, void *arg4);
    void *construct_random(void *arg1, void *arg2, void *arg3);
};

#endif
