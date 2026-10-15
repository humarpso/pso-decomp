#ifndef PSO_MISC_TOBOSS4ROCK_H
#define PSO_MISC_TOBOSS4ROCK_H

#include "types.h"

struct TOBoss4Rock
{
    u8 _pad1C[0x8];
    u32 m_24;
    u8 _pad28[0xC];
    u32 m_34;
    void* m_38;
    u8 _pad3C[0x48];
    u32 m_84;
    u8 _pad88[0x14];
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u32 m_a8;
    u32 m_ac;
    u32 m_b0;
    u32 m_b4;
    void run_task();
    void render();
    static void *create(void *arg0);
    void *destroy(s16 arg1);
};

#endif
