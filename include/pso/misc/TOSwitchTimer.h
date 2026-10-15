#ifndef PSO_MISC_TOSWITCHTIMER_H
#define PSO_MISC_TOSWITCHTIMER_H

#include "types.h"

struct TOSwitchTimer
{
    u8 _pad1C[0x1C];
    void* m_38;
    u8 _pad3C[0x54];
    u32 m_90;
    u32 m_94;
    u32 m_98;
    u32 m_9c;
    u32 m_a0;
    u32 m_a4;
    u16 m_a8;
    u8 _padAA[0x6];
    u8 m_b0;
    void render();
    void run_task();
    static void *create(void *arg0);
};

#endif
