#ifndef PSO_MISC_TCHECKMEMORYCARD_H
#define PSO_MISC_TCHECKMEMORYCARD_H

#include "types.h"

struct TCheckMemoryCard
{
    u32 m_1c;
    u32 m_20;
    u8 _pad24[0x4];
    u32 m_28;
    u8 _pad2C[0xC];
    u32 m_38;
    u32 m_3c;
    u8 _pad40[0x8];
    u32 m_48;
    u32 m_4c;
    static void render();
    void run_task();
    void *create(void *arg1, void *arg2);
};

#endif
